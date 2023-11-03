//double ended queue
#include<stdio.h>
#define MAX 10
typedef struct {
  int front;
  int rear;
  int caunt;
  int ele[MAX];
}DQueue;
void initDQueue(DQueue *q)
{
     q->front=0;
     q->rear=-1;
     q->caunt=0;
}
int isfull(DQueue *q)
{
   int full=0;
   if(q->caunt == MAX)
       full=1;
       return full;
}
int isempty(DQueue *q)
{
   int empty=0;
   if(q->caunt==0)
    empty=1;
    return empty;
}
void insertDQueueAtRear(DQueue *q,int item)
{
      if(isfull(q))
      {
         printf("\nqueue is overflow");
         return;
      }
      else
      {
          q->rear=(q->rear+1)%MAX;
          q->ele[q->rear]=item;
          
          q->caunt++;
          printf("\nAfter insert at rear front:%d,REAR:%d",q->front,q->rear);
          printf("\n insert item:%d\n",item);
      }
}
int deleteDQueueAtfront(DQueue *q)
{
    int val;
    if(isempty(q))
    {
        printf("Queue is underflow ");
        return -1;
    }
    else
    {
         val=q->ele[q->front];
         q->front=(q->front+1)%MAX;
         q->caunt--;
          printf("\nAfter delete at Front front:%d,REAR:%d",q->front,q->rear);         
        return val;
    }
}
void insertDQueueAtFront(DQueue *q,int item)
{
      if(isfull(q))
      {
         printf("\nqueue is overflow");
         return;
      }
      else
      {
          if(q->front==0)
          q->front=MAX-1;
          else
          {
             q->front=q->front-1;
             q->ele[q->front]=item;
             q->caunt++;
              printf("\nAfter insert at Front front:%d,REAR:%d",q->front,q->rear);
              printf("\n insert item:%d\n",item);
          }
        }
}
int deleteDQueueAtRear(DQueue *q)
{
    int val;
    if(isempty(q))
    {
        printf("Queue is underflow ");
        return -1;
    }
    else
    {
         val=q->ele[q->rear];
        if(q->rear==0)
        q->rear=MAX-1;
        else
        q->rear=q->rear-1;
          printf("\nAfter delete at rear front:%d,REAR:%d",q->front,q->rear);         
        q->caunt--;
        return val;
    }
}
int main()
{
    int num ,ch,val;
    DQueue q;
    initDQueue(&q);
    do
    {
       printf("\n1-insert r \n2-insert f\n3-Delete r\n4-delete f");
       printf("Enter choice");
       scanf("%d",&ch);
       switch(ch)
       {
           case 1:printf("Enter number");
                        scanf("%d",&num);
                        insertDQueueAtRear(&q,num);
                        break;
           case 2:printf("Enter number");
                        scanf("%d",&num);
                        insertDQueueAtFront(&q,num);
                        break;             
           case 3:printf("\n Deleted value=%d",deleteDQueueAtfront(&q));
                        break;
            case 4:printf("\n Deleted value=%d",deleteDQueueAtRear(&q));
                        break;            
       }
    }while(ch<5);
}
