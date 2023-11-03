//linear queue
#include<stdio.h>
#define MAX 20
struct queue
{
    int data[MAX];
    int front ,rear;
}q;    
int initq( )
{
     q.front=-1;
     q.rear=-1;
}
int isempty(  )
{
     if(q.front==-1 || q.front>q.rear)
       return 1;
     else
      return 0;
}
int isfull( )
{
    if(q.rear==MAX-1)
       return 1;
     else
       return 0;
}
void insertq(int num)
{ 
    if(isfull( ))
     printf("queue is overflow");
    else
      {
          if(q.front == -1)
          {
             q.front=0;
           }  
             q.rear++;
             q.data[q.rear]=num;
             printf("\ninsert seccusseful");
      }
}
void deleteq( )
{
   int val;
   if(isempty( ))
       printf("queue is underflow");
   else
     {   
        val=q.data[q.front];        
        q.front++;
        printf("deleted value=%d",val);
     }
}
void disp( )
{
     int i;
     for(i=q.front;i<=q.rear;i++)
      {
            printf("%d\t",q.data[i]);
       }
}
int main( )
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
                         insertq(num);
                         break;
             case 2:deleteq( );
                          break;
             case 3:disp( );
                          break;
       }
    }while(ch!=4);
}
