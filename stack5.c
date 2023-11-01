//accept string and display reverse  order using dynamic stack
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct node
{
    char data;
    struct node *next;
}NODE;
NODE *top;//globaly declare
void init()
{
      top=NULL;
}
void push(char c)
{
     NODE *newnode;
     newnode=(NODE*)malloc(sizeof(NODE));
     newnode->data=c;
     newnode->next=top;
     top=newnode;
     //printf("push succesfull");
}
void  disp()
{
   NODE *temp;
   for(temp=top;temp!=NULL;temp=temp->next)
   {
   printf("%c\t",temp->data);
    } 
}
int main()
{
 char s1[20];
 int i;
 init();
 printf("Enter string");
 gets(s1);
 for(i=0;s1[i]!='\0';i++)
 {
        push(s1[i]);
 }
 disp( );
}
