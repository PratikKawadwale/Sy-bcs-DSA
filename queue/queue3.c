//dynamic circular queue
#include<stdio.h>
#include<stdlib.h>
struct node
{
     int data;
     struct node *next;
}*front,*rear,*newnode,*temp;
void init()
{
   front=rear=NULL;
}
int isempty( )
{
     if(front==NULL)
        return 1;
     else
        return 0;
}
void insert(int num)
{
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=num;
    newnode->next=NULL;
    if(isempty())
       front=rear=newnode; 
    else
    {
        rear->next=newnode;
        rear=newnode;
        rear->next =front;
        printf("\n insert succ..");
     }
}
void delq()
{
   int val;
   if(isempty())
    {
         printf("queue is underflow");
    } 
    else
      {
         temp=front;
         val=front->data;
         if(front->next==front)
         {
             free(front);
         }
         else
         {
            front=front->next;
            rear->next=front;
            free(temp);
         }
         printf("deleted val=%d",val);
      }
}
void disp()
{
   temp=front;
   do
   {
      printf("%d\t",temp->data);
      temp=temp->next;
   }
   while(temp!=front);
}
int main()
{
     int ch,num;
     init();
     do{
               printf("\n1-insert\n2-delete\n3-display");
               printf("\nEnter choice");
               scanf("%d",&ch);
               switch(ch)
               {
                    case 1:printf("Enter number");
                                 scanf("%d",&num);
                                 insert(num);
                                 break;
                     case 2:delq();
                                  break;
                     case 3:disp();
                                  break;
               }
           }while(ch<4);
}
