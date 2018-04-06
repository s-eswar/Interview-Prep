#include<stdio.h>
#include<stdlib.h>

typedef struct node{
int data;
struct node *next;
} node;

node* getNode(int data)
{
    // allocating space
    node* newNode = (node*)malloc(sizeof(node));
 
    // inserting the required data
    newNode->data = data;
    newNode->next = NULL;
}

void sortinsert(node **head,int x)
{
   
   if(*head==NULL)
      *head= getNode(x);
   else
   {
      node *newnode=getNode(x);
      node *temp=*head;
      while(temp->next!=NULL && newnode->data>temp->data)
            temp=temp->next;
      temp->next=newnode->next;
      temp->next=newnode;
   } 
}

void display(node **head)
{
   node *temp=*head;
   while(temp->next!=NULL)
   {
      printf("%d\t",temp->data);
      temp=temp->next;
   }
   printf("%d\t",temp->data);
   printf("\n");
}

int main()
{
   node *head=NULL;
   node *head1=NULL;
   sortinsert(&head,3);
   sortinsert(&head,8);
   sortinsert(&head,1);
   sortinsert(&head1,9);
   sortinsert(&head1,1);
   sortinsert(&head1,3);
   display(&head);
   display(&head1);
   return 0;
}
