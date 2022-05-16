#include<stdio.h>

void main()

{
 char pass[15],ch;

 int i,number,special,capital,small;

 number=special=capital=small=0;

 printf("enter the passward:\n");

 gets(pass);

 for(i=0;pass[i]!='\0';i++)
 {

  if(pass[i]>='0' && pass[i]<='9')
   number=1;
  if(pass[i]>='a' && pass[i]<='z')
   small=1;
  if(pass[i]>='A' && pass[i]<='Z')
   capital=1;
  if(pass[i]=='!' || pass[i]=='@' || pass[i]=='#' || pass[i]=='$' || pass[i]=='%' || pass[i]=='*')
   special=1;

 }
 if(number==0 || special==0 || capital==0 || small==0)

  printf("\n\the password you entered is not valid");
 else
  printf("\n\tValid Password");
  h67dQ*+R62fggyyhyhyj
 getch();
}
