//singly linked list
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
       if ( temp->data==num)
       {
          return temp;
        }
   }return temp;
}
int main( )
{
    int ch,num,pos,temp;
    struct node *list=NULL;
    do
    {
        printf("\n1-create \n2-display \n3-insertbegining\n4-insertend\n5-insertmid\n6-deletebeg\n7-deleteend\n8-deletemid\n9-search:");
        printf("\nenter choice");
        scanf("%d",&ch);
        switch(ch)
        {
           case 1:list=create(NULL);
                       break;           
           case 2:display(list);
                       break;
           case 3:printf("enter number");
                       scanf("%d",&num);
                       list=insertbeg(list,num);
                       break;
           case 4:printf("enter number");
                        scanf("%d",&num);
                        list=insertend(list,num);
                        break;
           case 5:printf("enter number");
                       scanf("%d",&num);
                       printf("enter pos");
                       scanf("%d",&pos);
                       list=insertmid(list,num,pos);
                       break;          
          case 6:list=deletebeg(list);
                      break; 
          case 7:list=deleteend(list);
                      break;
          case 8:printf("enter pos");
                      scanf("%d",&pos);
                      list=delmid(list,pos);
                      break;                            
        case 9:printf("enter number");
                     scanf("%d",&num);
                     if (search(list,num)!=NULL)
                         printf("\nnumber is faund");
                     else
                         printf("number is not faund");
                       break;
     }
    }while(ch<10);
}
