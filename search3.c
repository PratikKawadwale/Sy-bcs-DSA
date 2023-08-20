//writer a program to accept n city name & accept a city to search.
#include<stdio.h>
#include<string.h>
int main( )
{
     char s1[100] [100],name[100];
     int i,n;
     printf("enter limit");
     scanf("%d",&n);
     printf("enter n city name");
     for(i=0; i<n; i++)
     {
        scanf("%s",&s1[i]);
     }
     printf("enter city name to search");
     scanf("%s",&name);
     for(i=0; i<n; i++)
     {
       if(strcmp(s1[i],name)==0)
       {
          break;
       }
     }
     if(i==n)
     printf("number is not faund");
     else
     printf("number is faund");
     
}
