//accept n number and sort using selection sort method
#include<stdio.h>
int main( )
{
   int a[100],i,j,n,min,index,t;
   printf("enter limit");
   scanf("%d",&n);
   printf("enter n number");
   for(i=0; i<n; i++)
   {
      scanf("%d",&a[i]);
   }
   for(i=0; i<n; i++)
   {
     min=a[i];
     index=i;
     for(j=i+1;j<n;j++)
     {
        if(a[j]<min)
        {
          min=a[j];
          index=j;
        }
     }
     t=a[i];
     a[i]=a[index];
     a[index]=t;
   }
   printf("sorted number");
   for(i=0;i<n;i++)
   {
     printf("%d\t",a[i]);
   }
}
