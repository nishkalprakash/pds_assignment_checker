/*section: 14
  name:harsh
  roll no :22MT30016
  lab :8
  question no:4
  description: substring   */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
  char a[100];
   char b[100];
    
    printf("enter substring:");
    scanf("%s",a);
    printf("enter string:");
    scanf("%s",b);
    int i=0;
    int flag=0;
    int count =0;
    while(b[i]='\0')
    {
      if(b[i]==a[0])
        {
          for(int j=1;a[j]!='\0';j++)
    {
       if(b[i+j]=a[j])
     {
      flag=0;
      break;
     }
      else
     {
      flag=1;
     }
   }
}
    if(flag==1)
  {
   count++;}
  }
  i++;
  printf("count:%d\n",count);
  return 0;
}
   

