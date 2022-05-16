/*
PRANJAL SINGH
Roll:21EC10051
Electronics and Electrical Communication engineering
codeblocks
Assignment class:6
*/
#include <stdio.h>

void main()
{
    //assigned length 15
 char username[15];
 char pass[15],ch;
 int i,number,special,upper,lower;
 number=special=upper=lower=0;

 printf("Enter User name\n");
 gets(username);
 printf("Enter Password>> ");
 gets(pass);
 for(i=0;pass[i]!='\0';i++)
 { // using if statement we can follow if password is contains necessary characters
  if(pass[i]>='0' && pass[i]<='9')
   number=1;
  if(pass[i]>='a' && pass[i]<='z')
   lower=1;
  if(pass[i]>='A' && pass[i]<='Z')
   upper=1;
  if(pass[i]=='!' || pass[i]=='@' || pass[i]=='#' || pass[i]=='$' || pass[i]=='%' || pass[i]=='*')
   special=2;

 }

if(number==0 || special==0 || upper==0 || lower==0 )

    printf("\n\t  Not Acceptable Password ");
 else
    printf("\n\t Acceptable Password");
 return ;
}
