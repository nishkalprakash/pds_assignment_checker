/*name: Birru Lavanya
roll no.: 21HS10018*/
#include<stdio.h>
#include<string.h>
int main()
{ char s[20]; //assuming string size to be less than 20 characters
int i,j,k=0;
  printf("enter string");
  scanf("%s",s);
  while(k<=(strlen(s))/2){
  for ( i = 0; s[i]!='\0'; i++)
  {
     if ('s[i+1]'=='s[i]'+2 &&('s[i]'==91 || 's[i]'==123)) //using the ASCII values to check whether the given parenthesis pair or not
     {
         for ( j = 0; s[j]!='\0' ; j++)
         {
            s[j]=s[j+2];
         }
         s[j-2]=='\0';
     }
      if ('s[i+1]'=='s[i]'+1 &&('s[i]'==29))
     {
         for ( j = 0; s[j]!='\0' ; j++)
         {
            s[j]=s[j+2]; //removing the matched parenthesis
         }
         s[j-2]=='\0'; //to free the removed parenthesis
         s[j-1]=='\0';
     }
  }    k++;}
  if (s[0]=='\0')
  {
    printf("matched parenthesis");
  }
  else
  printf("unmatched parenthesis");
return(0);
}
