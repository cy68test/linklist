#include<stdio.h>
#include<stdlib.h>

struct node
{
  int data;
  struct node *next;
};


int Length(struct node* head)
{
  int count = 0;

  struct node* current = head;

  while(current != NULL)
    {
      count++;
      current = current->next;
    }

  return count;
}


void Push(struct node* head, int data)
{
  struct node* push;
  push = (struct node*)malloc(sizeof(struct node));
  push->data = head->data;
  push->next = head->next;
  head->data = data;
  head->next = push;
}

void Print(struct node* head)
{
	struct node* current = head;
	while(current != NULL)
	{
		printf("current node's data is %d\n", current->data);
		current = current->next;
	}
}

int main()
{

  struct node* head = NULL;

  head = (struct node*)malloc(sizeof(struct node));
  head->data = 1;
  head->next = NULL;

  Push(head, 2);
  printf("count %d\n", Length(head));
	Print(head);

  return 0;
}

  
