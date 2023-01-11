#include<stdio.h>
int main()
{
  char str1[100],str2[100];int i,j,c=0;char *w,*e;int k=0;char *r;int l;int h=0;int flag=0;int t=0;char str3[100];
  printf("Enter two strings");
  scanf("%s %s",str1,str2);
 
  int p,q=0;

  while(str1[p]!='\0')
  {
      c++;
      p++;
  }
  while(str2[q]!='\0')
  {
      k++;
      q++;

  }
  for(i=0;i<k;i++)
  {
      for( j=0;j<c;j++)
      {

      str3[j]=str2[i+j];
      ;

      
      

      }
      str3[j]='\0';
      w=str3;
      e=str1;

for(t=0;t<c;t++)
{
  if(*(w+t)!=*(e+t))
{
flag =1;
break;
}
else flag =0;
if(flag==0)
{
h++;
}
}