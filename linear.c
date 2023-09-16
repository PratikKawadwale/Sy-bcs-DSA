//create a random array of n integers. accept a value x from user and use linear search algorithm to check whether the number is present in the array or not and output the position if the number is present
#include<stdio.h>
void accept(int a[  ], int n)
{
  int i;
  printf("enter the element\n");
   for(i=0;i<n;i++)
   {
      scanf("%d",&a[i]);
   }
}
void display(int a[ ],int n)
{
     int i;
     printf("enter n element\n");
     for(i=0;i<n;i++)
     {
        printf("%d\t",a[i]);
     }
}
int linear(int a[ ],int n)
{
   int i,key;
   printf("enter key");
   scanf("%d",&key);
   for(i=0;i<n;i++)
   {
       if(a[i]==key)
       {
       return i;              
       }
   }return-1;
}
int main( )
{
    int i,n,pos,key,a[100];
    printf("enter limit");
    scanf("%d",&n);
    
    accept(a,n);
    display(a,n);
    pos=linear(a,n);
    if(pos==-1)
      printf("number is not not faund");
    else
       printf("number is faund %d ",pos);
       }   
    
