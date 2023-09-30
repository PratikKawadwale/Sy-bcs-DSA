//DAUBLY LINKED LIST
#include<stdio.h>
#include<stdlib.h>
#define NODEALLOC (struct node*)malloc(sizeof(struct node));
typedef struct node
 {
      int data;
      struct node *next,*prev;
}NODE; 
NODE *create(struct node *list)
{
  NODE *newnode,*temp;
   int i,n;
   printf("Enter limit");
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       newnode=NODEALLOC;
       printf("Enter value");
       scanf("%d",&newnode->data);
       newnode->next=NULL;
       if(list==NULL)
         {
             list=newnode;
             temp=newnode;
         }
         else
         {
             temp->next=newnode;
             newnode->prev=temp;
             temp=newnode;
         }
   }return list;
}
void display(struct node *list)
{
    NODE *temp;
   for(temp=list;temp!=NULL;temp=temp->next)
   {
      printf("%d\t",temp->data);
   }
}
NODE *insertbeg(struct node *list,int num)
{
    struct node *newnode;
    newnode=NODEALLOC;
    newnode->data=num;
    newnode->next=list;
    list->prev=newnode;
    list=newnode;
    return list;  
}
NODE *insertend(NODE *list,int num)
{
   struct node *newnode,*temp;
   newnode=NODEALLOC;
   newnode->data=num;
   newnode->next=NULL;
   for(temp=list;temp->next!=NULL;temp=temp->next);
   temp->next=newnode;
   newnode->prev=temp;
   return list;
}
NODE *insertmid(NODE *list,int num,int pos)
{
    int i;
    NODE *newnode,*temp;
    newnode=NODEALLOC;
    newnode->data=num;
    for(temp=list,i=1;i<pos-1 && temp->next!=NULL;i++,temp=temp->next);
    newnode->next=temp->next; 
    temp->next->prev=newnode;
    temp->next=newnode;
    newnode->prev=temp;
     return list;
}
NODE *insertcommon(NODE *list,int num,int pos)
{
   NODE *newnode,*temp;
   int i;
   newnode=NODEALLOC;
   newnode->data=num;
   if(pos=1)
   {
       newnode->next=list;
       list->prev=newnode;
       list=newnode;
   }
   else
   {
      for(i=1,temp=list;i<pos-1 && temp!=NULL;i++,temp=temp->next);
      newnode->next=temp->next;
      temp->next->prev=newnode;
      temp->next=newnode;
      newnode->prev=temp;
   }return list;
}
NODE *deletebeg(NODE *list)
{
    NODE *temp;
    temp=list;
    list=list->next;
    free(temp);
    return list;
}
NODE *deleteend(NODE *list)
{
   NODE *temp,*temp1;
   for(temp=list;temp->next->next!=NULL;temp=temp->next);
   temp1=temp->next;
   temp->next=NULL;
   temp1->prev=NULL;
   free(temp1);
   return list;   
}
NODE *deletemid(NODE *list,int pos)
{
   NODE *temp,*temp1;
  int  i=1;
   for(i=1,temp=list;i<pos-1&&temp->next!=NULL;i++,temp=temp->next);
   temp1=temp->next;
   temp->next=temp1->next;
   temp1->next->prev=temp;
   free(temp1);
   return list;
}
int main( )
{
    int num,ch,pos;
    NODE *list=NULL;
    do
    {
       printf("\n1-create \n2-display \n3-insertbeg \n4-insertend \n5-insertmid \n6-insertcommon \n7-deletebeg \n8-deleteend \n9-deletemid");
       printf("\nEnter choice");
       scanf("%d",&ch);
       switch(ch)
       {
          case 1:list=create(list);
                       break;
          case 2:display(list);
                       break;
          case 3:printf("Enter number");
                       scanf("%d",&num);
                       list=insertbeg(list,num);
                       break;                       
         case 4:printf("Enter number");
                      scanf("%d",&num);
                      list=insertend(list,num);
                      break;              
         case 5:  printf("Enter number");
                       scanf("%d",&num);
                      printf("Enter pos");
                      scanf("%d",&pos);
                      list=insertmid(list,num,pos);
                      break;
        case 6: printf("Enter number");
                      scanf("%d",&num);
                      printf("Enter pos ");
                      scanf("%d",&pos);
                      list=insertcommon(list,num,pos);
                      break;
       case 7: list=deletebeg(list);
                     break; 
       case 8: list=deleteend(list);
                      break;                                                
       case 9: printf("enter pos");
                     scanf("%d",&pos);
                     list=deletemid(list,pos);
                     break;                      
       }
    }while(ch<10);
}
