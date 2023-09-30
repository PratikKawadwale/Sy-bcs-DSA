//write a program that merges two oreder linked list into third new list where two lists are merged the data in the resulting list are also orderd the two orignal lists should be new one use linked implementation
#include<stdio.h>
#include<stdlib.h>
typedef struct node{
   int data;
   struct node *next;
} node;
node *create(struct node *list)
{
  int i,n;
   node *newnode,*temp;
   printf("enter limit");
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
     newnode=(node*)malloc(sizeof (node));
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
        }
        return list;
}
void disp(node *list)
{
   node *temp;
   for(temp=list;temp!=NULL;temp=temp->next)
   {
      printf("%d\t",temp->data);
    }
  }
  node *append(node *list,int num)
  {
      node *newnode,*temp;
      newnode=(node *)malloc(sizeof(node));
      newnode->data=num;
      newnode->next=NULL;
      if(list==NULL)
      {
        return newnode;
      }
      else
      {
         for(temp=list; temp->next=NULL;temp=temp->next);
         temp->next=newnode;
         return list;
      }
  }
  node *merge(node *list1,node *list2)
  {
     node *temp1=list1,*temp2=list2,*list3=NULL;
     while(temp1!=NULL && temp2!=NULL)
  {
     if(temp1->data<temp2->data)
     {
       list3=append(list3,temp1->data);
       temp1=temp1->next;
     }
  else
  {
     list3=append(list3,temp2->data);
     temp2=temp2->next;
  }
  }
  while(temp1!=NULL)
  {
      list3=append(list3,temp1->data);
      temp1=temp1->next;
  }
  while(temp2!=NULL)
  {
    list3=append(list3,temp2->data);
    temp2=temp2->next;
  }
  return list3;
    }
   int main( )
   {
       node *list1=NULL,*list2=NULL,*list3=NULL;
       list1=create(list1);
       list2=create(list2);
       list3=merge(list1,list2);
       disp(list3);
   }
