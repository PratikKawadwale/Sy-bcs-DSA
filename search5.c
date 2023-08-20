//accept n no in an array and accept n no to search using function
#include<stdio.h>
int main ( )
{
int i,n,a[100],num;
void search (int a[100],int num, int n);
printf("enter limit");
scanf("%d",&n);
printf("enter number");
for(i=0; i<n; i++)
{
   scanf("%d",&a[i]);
}
   printf("enter number to search");
   scanf("%d",&num);
   search(a,num,n);
   }
   void search(int a[100],int num ,int n)
   {
      int i;
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
