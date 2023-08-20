//create a random array of n integer accepta value x from user & use  linear search algorithm to check whether the no is present in the array or not & output the position if the no is
#include<stdio.h>
#include<math.h>
int main  ( )
{
int i,n, x,a[100];
int search(int a[100],int n, int x);
printf("enter limit ");
scanf("%d",&n);
for(i=0; i<n; i++)
{
   a[i]=rand( )%100;
}
printf("random no =");
for(i=0; i<n; i++)
{
  printf("%d\t",a[i]);
}
printf("enter number to search");
scanf("%d",&x);
if(search(a,x,n)==n)
printf("no is not faund");
else
printf("no is faund");
}
int search(int a[100], int x, int n)
{
int i;
for(i=0; i<n; i++)
{
if(a[i]==x)
{
   return i;
}
}
return i}
