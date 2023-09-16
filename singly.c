//singly linked list change header file
#include"singly.h"
int main( )
{
    int ch,num,pos,temp;
    struct node *list=NULL;
    do
    {
       printf("\n 1-create \n 2-disp \n 3-insert beginning \n 4-insertend \n 5-insertmid \n6-deletebeg\n7-deleteend\n8-deletemid\n9-search :");
       printf("enter choice:");
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
