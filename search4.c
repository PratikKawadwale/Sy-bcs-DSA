//search city name using function
#include<stdio.h>
#include<string.h>
int main( )
{
int i,n;
char name[100],s1[100] [100];
  void search(char s1[100] [100],char name[20], int n);
  printf("enter limit");
  scanf("%d",&n);
  printf("enter city name");
  for(i=0; i<n; i++)
  {
    scanf("%s",&s1[i]);
  }
  
  printf("enter city name to serach");
  scanf("%s",&name);
  search(s1,name, n);
}
void search(char s1[100] [100],char name[20],int n)
{int i;
for(i=0; i<n; i++)
{
   if(strcmp(s1[i],name)==0)
   {
    break;
   }
   }
   if(i==n)
        printf("city is not faund");
   else
          printf("city is faund");
   }
