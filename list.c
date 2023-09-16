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
struct node *delmid(struct node *list,int pos)
{     
      int i;
     struct node *temp,*temp1;
     for(i=1,temp=list;i<pos-1 && temp->next!=NULL;i++,temp=temp->next);
     temp1=temp->next;
     temp->next=temp->next;
     free(temp1);
     return list;
}
int main( )
{
    int ch,num,pos,temp;
    struct node *list=NULL;
    do
    {
        printf("\n1-create \n2-display \n3-deletemid:");
        printf("\nenter choice");
        scanf("%d",&ch);
        switch(ch)
       {
           case 1:list=create(NULL);
                       break;           
           case 2:display(list);
                       break;
           case 3:list=delmid(list,pos);
                       break;                            
     }
    }while(ch<4);
}
