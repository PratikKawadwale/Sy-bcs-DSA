//singly linked list change header file
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *create(struct node *list)
{
     int i,n;
     struct node *newnode,*temp;
     printf("enter limit");
     scanf("%d",&n);
     for(i=0;i<n;i++)
     {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("enter value");
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
            temp=newnode;
        }
     }return list;
}
void display(struct node *list)
{
    struct node *temp;
    for(temp=list;temp!=NULL;temp=temp->next)
    {
        printf("%d\t",temp->data);
    }
}
struct node *insertbeg(struct node *list,int num)
{
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=num;
    newnode->next=list;
    list=newnode;
    return list;
}
struct node *insertend(struct node *list,int num)
{
    struct node *newnode,*temp;
    newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=num;
    newnode->next=NULL;
    for(temp=list;temp->next!=NULL;temp=temp->next);
    temp->next=newnode;
    return list;  
}
struct node *insertmid(struct node *list,int num,int pos)
{
     struct node *newnode,*temp;
     int i;
     newnode=(struct node *)malloc(sizeof(struct node));
     newnode->data=num;
     for(i=1,temp=list;i<pos-1 && temp->next!=NULL;i++,temp=temp->next);
     newnode->next=temp->next;
     temp->next=newnode;
     return list;
}
struct node *deletebeg(struct node *list)
{
   struct node *temp;
   temp=list;
   list=list->next;
   free(temp);
   return list;
}
struct node *deleteend(struct node *list)
{
    struct node *temp,*temp1;
    for(temp=list;temp->next->next!=NULL;temp=temp->next);
    temp1=temp->next;
    temp->next=NULL;
    free(temp1);
    return list;  
}
struct node *delmid(struct node *list,int pos)
{     
      int i;
     struct node *temp,*temp1;
     for(i=1,temp=list;i<pos-1 && temp->next!=NULL;i++,temp=temp->next);
     temp1=temp->next;
     temp->next=temp1->next;
     free(temp1);
     return list;
}
struct node *search(struct node *list,int num)
{
   struct node *temp;
   for(temp=list;temp!=NULL;temp=temp->next)
   {
       if ( temp->data=num)
       {
          return temp;
        }
   }return temp;
}
