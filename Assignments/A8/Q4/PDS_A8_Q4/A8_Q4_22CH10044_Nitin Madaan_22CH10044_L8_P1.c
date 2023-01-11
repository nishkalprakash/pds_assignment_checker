#include<stdio.h>


int main()
{
   int q,p,m=0,t=0,j;
   char s1[100];
   printf("Enter string 1:-\n");
    scanf("%s",s1);
    char s2[100];
   printf("Enter string 2:-\n");
    scanf("%s",s2);
for(int i=0;s1[i]!='\0';i++)
{
  p=i+1;
}

for(int i=0;s2[i]!='\0';i++)
{
  q=i+1;
}

for(int i=0;i<=q-p;i++)
{
 for(int k=i,j=0;k<p+i,j<p;k++,j++)
{
  if(s2[k]==s1[j]);
{
  m++;
}
}
if(m==p)
{
  t++;
}
m=0;
}
printf("%d",t);
return 0;
}


  


