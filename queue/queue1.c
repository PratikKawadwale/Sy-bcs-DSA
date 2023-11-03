//circular queue
#include<stdio.h>
#define MAX 50
struct queue
{
   int data[MAX];
   int front,rear;
}q;
void initq( )
{
   q.front =q.rear=-1;
}
int isempty( )
{
     if(q.front ==-1)
        return 1;
     else
        return 0;
}
int isfull( )
{
  if(q.front==0 && q.rear==MAX-1 || q.front==q.rear+1)
     return 1;
  else
    return 0;
}
void insert(int num)
{
        if(isfull())
          printf("queue is overflow");
        else
        {
             if(q.front==-1)
             {
                q.front=0;
             }
             q.rear=(q.rear+1)%MAX;
          q.data[q.rear]=num;
          printf("\ninsert complete");
        }
}
int deleteq(  )
{
     int num;
     if(isempty())
       printf("queue is underflow");
     else  
     {
     
     if(q.front==q.rear)
     {
         q.front=q.rear=-1;
     }
     num=q.data[q.front];
     q.front=q.front+1%MAX;
     printf("deleted value=%d",num);
     }
}     
void disp( )
{
    int i;
    if(isempty())
     printf("queue is underflow");
     else
     {
        for(i=q.front;i!=q.rear;i=i+1%MAX)
        {
            printf("%d\t",q.data[i]);
        }
        printf("%d\t",q.data[i]);
     }
}
void main()
{
  int ch, num;
    initq( );
    do
    {
       printf("\n1-insert\n2-deleteq\n3-display");
       printf("\nEnter choice");
       scanf("%d",&ch);
       switch(ch)
       {
            case 1:printf("Enter number");
                         scanf("%d",&num);
                         insert(num);
                         break;
             case 2:deleteq( );
                          break;
             case 3:disp( );
                          break;
       }
    }while(ch<4);
}
