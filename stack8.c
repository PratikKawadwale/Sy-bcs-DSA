//infix to prefix conversion programe
#include<stdio.h>
#include<ctype.h>
#include<string.h>
#define MAX 100
struct stack
{
    char a[MAX];
    int top;
}s;
void init()
{
    s.top=-1;
}
int isempty()
{
     if(s.top==-1)
     return 1;
     else
       return 0;
}
int isfull()
{
   if(s.top==MAX-1)
   return 1;
   else
   return 0;
}
void push(char ch)
{
      if(isfull())
     printf("stack is full don't push");
     else
     {
         s.top++;
         s.a[s.top]=ch;
     }
}
char pop()
{
    char c;
    if(isempty())
     printf("stack is empty don't pop");
    else
    {
        c=s.a[s.top];
        s.top--;
        return c;
    }
}
int priority(char ch)
{
     if(ch=='(')
     return 0;
     if(ch=='+' || ch=='-')
     return 1;
     if(ch=='*' || ch=='/')
     return 2;
     if(ch=='$' || ch=='^')
     return 3;
     return 0;
}
int main()
{
   int i,j=0,k=0;
    char infix[100],prefix[100],rev[100],x;
    printf("Enter string");
    scanf("%s",infix);
    for(i=0;infix[i]!='\0';i++);
    for(i=i-1;i>=0;i--)
    {
        rev[j++]=infix[i];
    }
    rev[j++]='\0';
    init();
    for(i=0;rev[i]!='\0';i++)
    {
        if(rev[i]=='(')
        rev[i]=')';
        else if(rev[i]==')')
        rev[i]='(';
    }
    for(i=0;rev[i]!='\0';i++)
    {
        if(isalpha(rev[i]))
        prefix[k++]=rev[i];
        else if(rev[i]=='(')
        push(rev[i]);
        else if(rev[i]==')')
        {
            while((x=pop())!='(')
            prefix[k++]=x;
        }
        else
        {
            while(priority(s.a[s.top])>=priority(rev[i]))
            prefix[k++]=pop();
            push(rev[i]);
        }
    }
    while(!isempty())
        {
            prefix[k++]=pop();
        }
    prefix[k++]='\0';
    for(i=0;rev[i]!='\0';i++);
    for(i=i-1;i>=0;i--)
    printf("%c",prefix[i]);
}
