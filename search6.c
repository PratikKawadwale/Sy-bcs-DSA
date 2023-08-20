//accept n number in an array & accept number to search no is faund then return position other wise -1
#include<stdio.h>
int main( )
{
int i,n,a[100],num,p;
int search(int a[100],int num,int n);
printf("enter limit");
scanf("%d",&n);
printf("enter number");
for(i=0; i<n; i++)
{
     scanf("%d",&a[i]);
}
printf("enter number to search");
scanf("%d",&num);
p=search(a,num,n);
if(p==1)
printf("number is faund");
else
printf("number is not faund=%d",n);
}
int search(int a[100], int num,int n)
{
  int i;
  for(i=0; i<n; i++)
  {
  if(a[i]==num)
  {
  return i;
  }
  }
  if(i==n)
  {
     return -1;
  }
  }
  
