//search given number from file numbers.txt using linear search
#include<stdlib.h>
#include<stdio.h>
int main( )
{ 
    int num,x,flag=0;
    FILE *fp1;
    
    fp1=fopen("pk.txt","r");
    if(fp1==NULL)
     {
     printf("file not faund");
     exit(0);
     }
     printf("enter number to search");
     scanf("%d",&x);
     while(!feof(fp1))
     {
       fscanf(fp1,"%d",&num);
     
     if(num==x)
     {
       flag=1;
       break;
     }
     }
     if(flag==1)
     printf("number is faund");
     else
     printf("number is not faund");
     fclose(fp1);
     
}
