//read the data from file 'cities.txt' conting names of cities & their std code. accept a name of city user& use linear search algorithm to check whether the name is present in the file & output the std code o.w output "city not in list".
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main( )
{ 
    FILE *fp1;
    int flag=0,scode;
   char cname[20],s1[20];
   
   fp1=fopen("pk1.txt","r");
   if(fp1==NULL)
   {
     printf("file not faund");
     exit(0);
   }
   printf("enter city name to search");
   scanf("%s",&s1);
   while(!feof(fp1))
   {
     fscanf(fp1,"%s%d",&cname,&scode);
     if(strcmp(cname,s1)==0)
     {
       flag=1;
       break;
     }
   }
   if(flag==1)
   printf("city faund std code=%d",scode);
   else
     printf("city not in the list");
     fclose(fp1);
     
}
