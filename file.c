//display all no of numbers.txt file
#include<stdio.h>
#include<stdlib.h>
int main( )
{
     FILE *fp1;
     int num;
     fp1= fopen("pk.txt","r");
     if(fp1==NULL)
     {
       printf("file notfaund");
       exit(0);
     }
     while(!feof(fp1))
     {
      fscanf(fp1,"%d",&num);
      printf("\n %d",num);
     }
     fclose(fp1);
}
