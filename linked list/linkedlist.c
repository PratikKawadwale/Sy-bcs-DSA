//singly circular linked list
#include<stdio.h>
#include<stdlib.h>
#define NODEALLOC (NODE *)malloc(sizeof(NODE));
typedef struct node
{
   int data;
   struct node *next; 
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
      printf("Enter number:");
      scanf("%d",&newnode->data);
      if(list==NULL)
      {
          list=temp=newnode;
          newnode->next=list;
      }
      else
      {
         temp->next=newnode;
         temp=newnode;
         newnode->next=list;
      }
    }return list;
}
void display(NODE *list)
{
   NODE *temp=list;
   
   do
   {
      printf("%d\t",temp->data);
      temp=temp->next;
   }
   while(temp!=list);
   }
NODE *insertbeg(NODE *list,int num)
   {
       NODE *newnode,*temp;
       newnode=NODEALLOC;
       newnode->data=num;
       for(temp=list;temp->next!=list;temp=temp->next);
       newnode->next=list;
       list=newnode;
       temp->next=list;
       return list;   
   }
   NODE *insertmid(NODE *list,int num,int pos)
   {
     NODE  *newnode,*temp;
     int i;
     newnode=NODEALLOC;
     newnode->data=num;
     for(temp=list,i=1;i<pos-1 && temp->next!=list;temp=temp->next,i++);
     newnode->next=temp->next;
     temp->next=newnode;
     return list;
   }
   NODE *insertend(NODE *list,int num)
   {
       NODE  *newnode,*temp;
       newnode=NODEALLOC;
       newnode->data=num;
       for(temp=list;temp->next!=list;temp=temp->next);
       temp->next=newnode;
       temp=newnode;
       temp->next=list;
       return list;
   }
 NODE  *deletebeg(NODE *list)
 {
     NODE *temp,*temp1;
     for(temp=list;temp->next!=list;temp=temp->next)
     temp1=list;
     list=temp1->next;
     temp->next=list;
     free(temp1);
     return list;
 }
 NODE *deletemid(NODE *list,int pos)
 {
     int i;
     NODE *temp,*temp1;
     for(temp=list,i=1;temp->next!=list && i<pos-1;i++,temp=temp->next);
     temp1=temp->next;
     temp->next=temp1->next;
     free(temp1);
     return list;
 }
 NODE *deleteend(NODE *list)
 {
    NODE *temp,*temp1;
    for(temp=list;temp->next->next!=list;temp=temp->next);
    temp1=temp->next;
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
        printf("\n1-create \n2-Display \n3-insertbeg \n4-insertmid\n5-insertend\n6-deletebeg\n7-deletemid \n8-deleteend");
        printf("\nEnter choice");
        scanf("%d",&ch);
        switch(ch)
        {
             case 1:list=create(list);
                         break;
             case 2:display(list);    
                         break;
             case 3:printf("\nEnter number");
                          scanf("%d",&num);
                          list=insertbeg(list,num);
                          break;                           
             case 4:printf("Enter pos");
                           scanf("%d",&pos);
                           printf("Enter number");
                           scanf("%d",&num);
                           list=insertmid(list,num,pos);
                           break;             
            case 5:printf("Enter number");
                         scanf("%d",&num);
                         list=insertend(list,num);
                         break;    
            case 6:list=deletebeg(list);
                         break;
            case 7:printf("Enter pos");
                          scanf("%d",&pos);
                         list=deletemid(list,pos);
                         break;
            case 8:list=deleteend(list);
                        break;                                                  
         }
    }while(ch<9);
}
