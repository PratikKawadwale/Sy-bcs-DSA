//write a programe that copies the content of one stack into another use stack library to perform basic stack operation the order of two stack must be identical 
#include<stdio.h>
#define MAX 100
struct stack
{
    int data[MAX];
    int top;
};
void init(struct stack s1)
{
   s1.top==-1;
}
int isfull(struct stack s1 )
{
    if(s1.top==MAX-1)
       return 1;
    else
       return 0;
}
void push(struct stack s1, int val)
{
    if(isfull( s1))
        printf("stack is full dont push");
    else
    {
        s1.top++;
        s1.data[s1.top]=val;
    }
}
void disp(struct stack s1)
{
   int i;
   for(i=s1.top;i>=0;i--)
    { 
    printf("%d\n",s1.data[i]);
    }
}
int main()
{
    int i,n,val;
    struct stack s1,s2,temp;
    init(s1);
    init(s2);
    init(temp);
    printf("Enter limit of stack");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
         printf("Enter value");
         scanf("%d",&val);
         push(s1,val);
    }
    for(i=s1.top;i>=0;i--)
    {
       push(temp,s1.data[i]);
    }
    for(i=temp.top;i>=0;i--)
    {
        push(s2,temp.data[i]);
    }
    printf("display orignal stack");
      disp(s1);
     printf("\ndisplay copy stack");
     disp(s2);
     
}
