#include <stdio.h>
#include <string.h>
int check(char str[20]);
int encode1(char str [20]);
int encode2(char str[20]);
int main()
{
  char str[20];
  printf("Enter the character array\n");
    scanf("%s",str);
    check(str);
    encode1(str);
    encode2(str);
}
int check(char str[20])
{
  int count=0,l;
  l=strlen(str);
  for(int i=0;i<l;i++)
    {
      if(str[i]<str[i+1])
	{
	  count++;
	}
      
    }
  printf("%d\n",count);
}
int encode1(char str[20])
{int l=strlen(str);
  for(int i=0;i<l;i++)
    {
  if(str[i]<121)
    {
      str[i]=str[i]+2;
    }
  else
    {
      str[i]=str[i]-24;
    }
    }
  for(int i=0;i<l;i++)
    {
      printf("%c",str[i]);
    }
}
int encode2(char str[20])
{
  char str1[40];
  int l=strlen(str);
  printf("%s",str1);
  
}
