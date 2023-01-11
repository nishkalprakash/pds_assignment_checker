#include<stdio.h>
int main()
{
 int c=0;
 int n,i,j,k;
 char s[100];
 printf("Enter the string:\n");
 scanf("%s",s);
 printf("%s",s);
 for(int i=0;s[i]!='\0';i++)
 {
  n=i+1;
 }
 printf("\n%d",n);
 for(i=0;i<n;i++)
 {
  for(j=i;j<n;j++)
  {


   for(k=0;k<=j-i+1-1;k++)
   {
    if(s[k+i]==s[j-i+1-1-k+i])
    c++;
   }
   if(c==j-i+1&&c>1)
   {
    for(int k=i;k<=j;k++)
    {
     printf("%c",s[k]);
    }
   printf(" ");
   }
  }
 }

 return 0;
}
    
