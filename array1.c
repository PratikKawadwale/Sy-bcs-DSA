#include<stdio.h>
int main ( )
{
int n,a[100],i,s=0;
printf("enter limit");
scanf("%d",&n);
printf("enter number");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
 s=s+a[i];
}
printf("sum of number=%d",s);
}
