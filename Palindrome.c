#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>
#include<ctype.h>

#define MAX_LEN 10

int main()
{
   char word[MAX_LEN];
   printf("\t\t\tProgram to check for Palindrome\n");
   printf("\t\t\tPlease restrict your word length to less than %d\n",MAX_LEN);
   printf("Enter the word\t");
   scanf("%[^\n]%*c", word);
   assert(strlen(word)<MAX_LEN); 
   int length=strlen(word);
   char reverse[strlen(word)];
   int i=length-1,j=0;
   while(i>=0)
   {  
        if(!isalpha(word[i])) 
        {  printf("please don't use non english alphabets in the string\n");
           exit(0);
        }
        reverse[j]=word[i];
        j++;
        i--;
   }
   reverse[j]='\0';
   printf("the reversed word is %s\n",reverse) ;
   if(!strcmp(word,reverse))
        printf("Yes, its a Palindrome\n");
   else
        printf("No, Its not a Palindrome\n");
   return 0;
}
