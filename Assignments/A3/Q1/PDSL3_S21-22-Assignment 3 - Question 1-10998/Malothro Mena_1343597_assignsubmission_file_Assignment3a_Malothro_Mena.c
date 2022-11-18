#include<stdio.h>
void main()
{
 char pass[25],ch,name[25];
 int i,no,special,upper,lower;
 no=special=upper=lower=0;
 printf("enter the user name\n");
 gets(name);

 printf("enter the password \n");
 gets(pass);
 for(i=0;pass[i]!='\0';i++)
 {if(pass[i]==name[i])
   ch=0;

  if(pass[i]>='0' && pass[i]<='9')
   no=1;

  if(pass[i]>='a' && pass[i]<='z')
   lower=1;

  if(pass[i]>='A' && pass[i]<='Z')
   upper=1;

  if(pass[i]=='!' || pass[i]=='@' || pass[i]=='#' || pass[i]=='$' || pass[i]=='%' || pass[i]=='*')
   special=1;

 }
 if(no==0 || special==0 || upper==0 || lower==0 || ch==0)
  printf("not acceptable");
 else
  printf("Valid password");
}
