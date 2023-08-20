#include<stdio.h>
int main( )
{
  int n,i,key,a[100];
  printf("enter limit");
  scanf("%d",&n);
   printf("enter n number=");
   for(i=0;i<n;i++)
   scanf("%d",&a[i]);
   printf("enter key");
   scanf("%d",&key);
   binary(a,n,key);
}
int binary(int a[ ],int n, int key)
{   int top=0,bottom=n-1,mid,flag=0;
   while(top<=bottom)
   {
      mid=(top+bottom)/2;
      if(key==a[mid])
      {
          flag=1;
          break;
      }
      if(key>a[mid])
      top=mid+1;
      else
      bottom=mid-1;
   }
   if(flag==1)
   printf("number is faund");
   else
   printf("number is not faund");
}
