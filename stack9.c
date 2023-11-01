//EVALUATION OF POSTFIX
#include<stdio.h>
#include<ctype.h>
#define MAX 50
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
     {
          printf("stack is full dont push");
     }
     else
     {
         s.top++;
         s.a[s.top]=ch;
     }
}
int pop()
{   
    char c;
    if(isempty())
    {
         printf("stack is empty doint pop");
    }
    else
    {
         c=s.a[s.top];
         s.top--;
         return c;
    }
}
int main()
{
    char s1[100];
    int i,p,q,r,s,res,val1,val2;
    printf("Enter expression in postfix");
    gets(s1);
    printf("Enter value of pqrs");
    scanf("%d%d%d%d",&p,&q,&r,&s);
    init();
    for(i=0;s1[i]!='\0';i++)
     {
         if(isalpha(s1[i]))
           {
               switch(s1[i])
               {
                   case 'p':push(p);
                                   break;
                   case 'q':push(q);
                                   break;
                   case 'r':push(r);
                                   break;
                    case 's':push(s);
                                   break;               
               }
           }
           else
               {
                   val1=pop();
                   val2=pop();
                   switch(s1[i])
                   {
                      case '+':res=val2+val1;
                                     break;
                       case '-':res=val2-val1;
                                     break;
                       case '*':res=val2*val1;
                                     break;
                       case '/':res=val2/val1;
                                     break;              
                   }
                   push(res);
               }
     }
       printf("\n result=%d",pop());
}
