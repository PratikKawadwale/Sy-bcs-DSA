//read the data from file sorted city counting sorted names of file of cities & their std code accept a name of the city from user and use binary search algorithm to check whether the name is present in the file and output  the std code otherwise output city not in the list
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct cities
{
   char cname[20];
   int scode;
}c1[100];
int main( )
{
   FILE *fp1;
  int code,i=0,n,top,bottom,mid,flag=0;
  char name[20],x[20];
  fp1=fopen("scities.txt","r");
  if(fp1==NULL)
  {
    printf("file not faund");
    exit(0);
  }
  while(!feof(fp1))
  {
      fscanf(fp1,"%s%d",&name,&code);
      strcpy(c1[i].cname,name);
      c1[i].scode=code;
      i++;
  }
  n=i;
  printf("\nenter city name to search");
  scanf("%s",&x);
  top=0;
  bottom=n-1;
  while(top<=bottom)
  {
   mid=(top+bottom)/2;
   if(strcmp(c1[mid].cname,x)==0)
   {
      flag=1;
      break;
   }
   if(strcmp(c1[mid].cname,x)>0)
   top=mid+1;
   else
   bottom=mid-1;
   }
   if(flag==1)
   printf("std code=%d",c1[mid].scode);
   else
   printf("city not in the list");
   fclose(fp1);
}
