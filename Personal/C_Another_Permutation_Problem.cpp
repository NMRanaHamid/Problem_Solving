#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

struct Node
{
   int data;
   struct Node *next;
};

struct Node *createNode(int data)
{
   struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
   newNode->data = data;
   newNode->next = NULL;
   return newNode;
}

void insertNode(struct Node **head, int data)
{
   struct Node *newNode = createNode(data);
   if (*head == NULL)
   {
      *head = newNode;
      return;
   }

   struct Node *current = *head;

   while (current->next != NULL)
   {
      current = current->next;
   }
   current->next = newNode;
}


void printList(struct Node *head)
{
   struct Node *current = head;
   while (current != NULL)
   {
      printf("%d ", current->data);
      current = current->next;
   }
}

int main()
{

   struct Node *head = NULL;
   int a = 2, b= 3;
   insertNode(&head, a);
   insertNode(&head, b);
   return 0;
}
