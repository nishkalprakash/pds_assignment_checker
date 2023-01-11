/*
 *Sec           : 14
 *Name          : Tejasree Sai
 *Roll no       : 22CS10009
 *Assignment no : 8
 *Description   : counting
 */

#include<stdio.h>
#include<string.h>
int len(char a[])
{
  int i,c=0;
 for(i=0;a[i]!='\0';i++)
 {
   
 }
 return i;
}

int wor(char a[])
{
  int i,w=0;
for(i=0;a[i]!='\0';i++)
{
  if(a[i]==' '||a[i]=='\n'||a[i]=='\t')
    w++;
}
 return w;
}
int sen(char a[])
{
 int i,s=1;
for(i=0;a[i]!='\0';i++)
{
  if(a[i]=='.')
    s++;
}
 return s;
}
int vow(char a[],char b[])
{
 int i,j,c=0;
 for(i=0;a[i]!='\0';i++)
  {
    for(j=0;j<5;j++)
    {
      if(a[i]==b[j])
       c++;
     }
   }
 return c;
}
        

int main ()
{
 char a[100],b[]={'a','e','i','o','u','\0'};
 int i,c,w,s,n;
 printf("Enter the input");

 scanf("%[^\n]",a);
 
 c=len(a);
 printf("The length of the message is %d\n ",c);
 printf("strlen(a)=%ld",strlen(a));
 w=wor(a);
 printf("The number of words = %d\n",w);
 s=sen(a);
 printf("The number of sentences = %d\n",s);
 n=vow(a,b);
 printf("The number of vowels = %d\n",n);
 return 0;
}
