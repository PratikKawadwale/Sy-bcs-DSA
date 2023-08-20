//no faund in binary search using file
#include<stdio.h>
#include<stdlib.h>
int main( )
{
  int  x,flag=0,i=0,n,num,mid,bottom,top,a[100];
  FLIE *fp1;
  fp1=fopen(fp1,"pk.txt","r");
  if(fp1==NULL)
  {
     printf("number is not faund");
     exit(0);
  }
while(!feof(fp1))
{
fscanf(fp1,"%d",&num);
a[i++]=num;
}
n=i;
printf("enter number to search");
scanf("%d",&x);
top=0;
bottom=n-1;
while(top<=bottom)
{
mid=(top+bottom)/2;
if(x==a[mid])
{
   flag=1;
   break;
}
if(x>a[mid])
top=mid+1;
else
bottom=mid-1;
}
if(flag==1)
printf("number is faund");
else
printf("number is not faund");
fclose(fp1);
}
