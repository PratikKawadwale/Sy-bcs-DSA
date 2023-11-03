//dynamic linear queue
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
int isempty()
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
         printf("\n insert succ..");
    }   
}
void delq()
{
    int num;
    if(isempty())
     printf("queue is underflow");
     else
     {
         num=front->data;
         temp=front;
         front=front->next;
         free(temp);
         printf("deleted value=%d",num);
         
     }
}
void disp()
{
    struct node *temp;
    for(temp=front;temp!=NULL;temp=temp->next)
    {
        printf("%d\t",temp->data);
    }
}
int main()
{
   int num,ch;
   init();
   do
   {
      printf("\n1-insert\n2-deleted\n3-display");
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
