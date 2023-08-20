//create a structure student (rno,name,per,class) accept n student information & display
#include<stdio.h>
struct student
{
 int rno;
 char name[20];
 float per;
 char sclass[20];
 }s1[100];
 int main( )
 {
 int i,n;
 printf("enter limit");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  printf("enter rno name per class");
  scanf("%d%s%f%s",&s1[i].rno,&s1[i].name,&s1[i].per,&s1[i].sclass);
 }
 for(i=0;i<n;i++)
 {
 printf("\nrno=%d",s1[i].rno);
 printf("\nname=%s",s1[i].name);
 printf("\nper=%f",s1[i].per);
 printf("\nclass=%s",s1[i].sclass);
 }
 }
