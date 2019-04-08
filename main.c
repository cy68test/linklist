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

}

int main()
{

  struct node* head = NULL;

  head = (struct node*)malloc(sizeof(struct node));
  head->data = 1;
  head->next = NULL;

  printf("count %d\n", Length(head));

  return 0;
}

  
