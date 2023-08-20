//search no without  flag
#include<stdio.h>
int main( )
{
 int i,n,a[100],num;
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
      break;
     }
 }
   if(i==n)
   printf("number is not faund");
   else
   printf("number is faund");
   }
