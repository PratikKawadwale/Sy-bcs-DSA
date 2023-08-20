//number is faund msg display inside the loop
#include<stdio.h>
int main ( )
{
   int i,n,num,a[100];
   printf("enter limit");
   scanf("%d",&n);
   printf("enter n number");
   for(i=0; i<n; i++)
   {
       scanf("%d",&a[i]);
   }
   printf("enter number to search");
   scanf("%d",&num);
   for(i=0; i<n; i++)
   {
       if(a[i]==num)
       {
       printf("number is faund");
       break;
        }
   }
       if(i==n)
       printf("number is not faund");
       
   }

