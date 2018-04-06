#include <stdio.h>
#include <stdlib.h>

typedef struct stack{
 int data;
 struct stack *next;
} stack;

stack *top=NULL;

void push(int a)
{
  stack *s=(stack *)malloc(sizeof(stack));
  s->data=a;
  if(top==NULL)
      s->next=NULL;
  else
      s->next=top;
  top=s;
}

void pop()
{
  if(top==NULL)
     printf("\ncannot delete,stack empty\n");
  else
  {
    stack *temp=top;  
    top=top->next;
    free(temp);    
  }  	  
}

void display()
{
  if(top==NULL)
    printf("\nstack is empty\n");
  else
  {
    stack *new=top;	
    while(new->next!=NULL)
   {
     printf("\n%d",new->data);
     new=new->next;
   }
   printf("\n%d",new->data);
  }
}

int main()
{
   int choice, value;
   system("clear");
   printf("\n:: Stack using Linked List ::\n");
   while(1){
      printf("\n****** MENU ******\n");
      printf("1. Push\n2. Pop\n3. Display\n4. Exit\n");
      printf("Enter your choice: ");
      scanf("%d",&choice);
      switch(choice){
	 case 1: printf("Enter the value(int) to be insert: ");
		 scanf("%d", &value);
		 push(value);
		 break;
	 case 2: pop(); break;
	 case 3: display(); break;
	 case 4: exit(0);
	 default: printf("\nNice try!!!\n");
      }
   }
 return 0;
}
