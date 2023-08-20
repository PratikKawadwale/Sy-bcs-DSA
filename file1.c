//dispaly all city name from cities.txt file
#include<stdio.h>
#include<stdlib.h>
int main( )
{
   char cname[20];
   FILE *fp1;
   fp1=fopen("pk1.txt","r");
   if(fp1==NULL)
   {
    printf("file not faund");
    exit(0);
   }
   while(!feof(fp1))
   {
     fscanf(fp1,"%s",&cname);
     printf("\n%s",cname);
   }
   fclose(fp1);
}
