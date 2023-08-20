
#include<stdio.h>
#include<string.h>
struct student
{
int rno;
char name[20];
float per;
char sclass[20];
}s1[100];
int main( )
{

int i,n,ch;
printf("enter limit");
scanf("%d",&n);

for(i=0;i<n;i++)
{
printf("enter rno name per sclass");
scanf("%d%s%f%s",&s1[i].rno,&s1[i].name,&s1[i].per,&s1[i].sclass);
}
for(i=0 ;i<n; i++)
{
if(strcmp(s1[i] sclass,"sy")==0)
{
 printf("rno=%d",s1[i].rno);
 printf("name=%s",s1[i].name);
 printf("per=%f",s1[i].per);
 printf("class=%s",s1[i].sclass);
 }
 }}
 
