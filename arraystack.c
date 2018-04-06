#include <stdlib.h>
#include <stdio.h>
#define MAX 100

int top,stack[MAX];

void push(int a,int n)
{
  if(top>=n-1)
      printf("\nNice try. Overflow\n");
  else
  {
    stack[++top]=a;
  }
}

void pop()
{
 if(top<=-1)
   printf("\nStack empty\n");
 else
    top--;
}

void display()
{
  if(top<=-1)
    printf("\nStack empty\n");
  else
  { for(int i=top;i>=0;i--)
    {
       printf("\n%d",stack[i]);
    }
  }
}

int main()
{
  int choice,n,value;
  top=-1;
  system("clear");
  printf("\n:: Stack using Arrays ::\n");
  printf("\n Enter the size of STACK[MAX=100]:");
  scanf("%d",&n);
   while(1){
      printf("\n****** MENU ******\n");
      printf("1. Push\n2. Pop\n3. Display\n4. Exit\n");
      printf("Enter your choice: ");
      scanf("%d",&choice);
      switch(choice){
	 case 1: printf("Enter the value(int) to be insert: ");
		 scanf("%d", &value);
		 push(value,n);
		 break;
	 case 2: pop(); break;
	 case 3: display(n); break;
	 case 4: exit(0);
	 default: printf("\nNice try!!!\n");
      }
   }
 return 0;
}
