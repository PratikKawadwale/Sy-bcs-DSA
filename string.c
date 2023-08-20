#include<stdio.h>
#include<string.h>
#include<ctype.h>
void main ( )
{
 char str1[20],str[20];
 int ch,i;
 printf("\n menu");
 printf("\n1.length");
 printf("\n2.rev");
 printf("\n3.copy");
 printf("\n4.compare");
 printf("\n5.concat");
 printf("\n6.upper");
 printf("\n7.lower");
 printf("\n enter  1st string : :");
 gets (str1);
 printf("\n enter 2nd string : :");
 gets (str2);
 printf("\n enter your choice");
 scanf("%d",&ch);
 switch(ch)
 {
 case 1: printf("\n len of first str:%ld",strlen(str1));
              printf("\n len of second str :%ld",strlen(str2));
              break;
 case 2: for(i=strlen(str1)-1; i>=0; i--)
             {
                printf("%c",str1[i]);
             }             
             break;
 case 3: printf("\n copy:%s",strcpy (str1,str2));
             break;
 case 4: if(strcmp(str1,str2==0))
              {  
                printf("equa");
              }  
             else if(strcmp(str1,str2)>0)
             {
               printf("first is greater");
              }
              else if(strcmp(str1,str2)<0)
              {
               printf("second is greater");
               }    
               break;
 case 5: printf("\n concat:%s",strcat(str1,str2));
              break;
 case 6: for(i=0; str1[i]!='\0'; i++)
              {
              if(islower(str1[i]))
             {
               str1[i]=toupper(str1[i]);
             }                
             }
             printf("\n upper:%s",str1);
             break;
  case 7: for(i=0; str1[i]!='\0'; i++)
              {
                if(isupper (str1[i]))
                {
                 str1[i]=tolower(str[i]);
                 }
              }
              printf("%s",str1);
              default : printf("invalid choice");           
}             
}
