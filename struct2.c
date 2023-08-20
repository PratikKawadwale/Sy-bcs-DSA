#include<stdio.h>
struct student
{
int rno;
char sname[20];
int m1,m2,m3,m4,m5,m6;
}s1;
int main( )
{
int t;
float p;
printf("enter roll no");
scanf("%d",&s1.rno);
printf("enter name");
scanf("%s",&s1.sname);
printf("six sub marks");
scanf("%d%d%d%d%d%d",&s1.m1,&s1.m2,&s1.m3,&s1.m4,&s1.m5,&s1.m6);
t=s1.m1+s1.m2+s1.m3+s1.m4+s1.m5+s1.m6;
p=t/6;
printf("\n rno = %d",s1.rno);
printf("\n name = %s",s1.sname);
printf("\n total marks = %d",t);
printf("\n per = %f",p);
}
