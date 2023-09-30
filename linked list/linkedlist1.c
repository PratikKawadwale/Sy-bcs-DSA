//doubly circular linked list
#include<stdio.h>
#include<stdlib.h>
#define NODEALLOC (NODE*)malloc(sizeof(NODE));
typedef struct node
{
    int data;
    struct node *next,*prev;
}NODE;
NODE *create(NODE *list)
{
   NODE *temp,*newnode;
   int i,n;
   printf("Enter limit:");
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
      newnode=NODEALLOC;
      printf("Enter number");
      scanf("%d",&newnode->data);
      if(list==NULL)
      {
           list=temp=newnode;
           newnode->next=list;
           list->prev=newnode;
      }
      else
      {
         temp->next=newnode;
         newnode->prev=temp;
         temp=newnode;
         newnode->next=list;
         list->prev=newnode;
      }
   }   return list;
}
void display(NODE *list)
{
   NODE *temp=list;
   do
   {
      printf("%d\t",temp->data);
      temp=temp->next;
   }while(temp!=list);
}
NODE *insertbeg(NODE *list,int num)
{
   NODE *newnode,*temp;
   newnode=NODEALLOC;
   newnode->data=num;
   for(temp=list;temp->next!=list;temp=temp->next);
   newnode->next=list;
   list->prev=newnode;
   list=newnode;
   temp->next=list;
   return list;
}
NODE *insertmid(NODE *list,int num,int pos)
{
   NODE *temp,*newnode;
   int i;
   newnode=NODEALLOC;
   newnode->data=num;
   for(i=1,temp=list;i<pos-1 && temp->next!=NULL;i++,temp=temp->next);
   newnode->next=temp->next;
   temp->next->prev=newnode;
   temp->next=newnode;
   newnode->prev=temp;
   return list;
}
NODE *insertend(NODE *list,int num )
{
   NODE *temp,*newnode;
   newnode=NODEALLOC;
   newnode->data=num;
   for(temp=list;temp->next!=list;temp=temp->next);
   temp->next=newnode;
   newnode->prev=temp;
   temp=newnode;
   temp->next=list;
   return list;
}
NODE *deletebeg(NODE *list)
{
   NODE *temp,*temp1;
    for(temp=list;temp->next!=list;temp=temp->next);
   temp1=list;
   list->next=list;  
   list->prev=temp;
   temp->next=list; 
   free(temp1);
   return list;
}
int main( )
{
int ch,num,pos;
NODE *list=NULL;
do
{
   printf("\n1-create \n2-display\n3-insertbeg\n4-insertmid\n5-insertend \n6-deletebeg");
   printf("\nEnter choice");
   scanf("%d",&ch);
   switch(ch)
   {
       case 1:list=create(list);
                    break;
       case 2:display(list);
                    break;            
       case 3:printf("Enter value");
                    scanf("%d",&num);
                    list=insertbeg(list,num);
                    break;              
      case 4:printf("Enter pos");
                   scanf("%d",&pos);
                   printf("Enter value");
                   scanf("%d",&num);
                   list=insertmid(list,num,pos);
                   break;              
     case 5:printf("Enter value");
                  scanf("%d",&num);
                  list=insertend(list,num);
                  break;
     case 6:list=deletebeg(list);
                 break;
   }
  }while(ch<7);
 }

