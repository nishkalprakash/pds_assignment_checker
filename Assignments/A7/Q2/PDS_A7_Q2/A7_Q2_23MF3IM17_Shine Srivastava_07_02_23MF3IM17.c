//nmae Shine srivastava
//Roll no. 23MF3IM17

#include<stdio.h>
#include<string.h>

void encode1(char a[])
{
  for(int i=0;a[i]!='\0';i++)
    {
      if(a[i]!='y' && a[i]!='z')
	{
          a[i]=a[i]+2;
	}
      else if(a[i]=='y')
	{
	  a[i]='a';
	}
      else if(a[i]=='z')
	{
	  a[i]='b';
	}
    }
  for(int i=0;a[i]!='\0';i++)
    {
      printf("%c",a[i]);
    }
  printf("\n");
  return;
}

void encode2(char a[])
{
  char b[40];
  for(int i=0;a[i]!='\0';i++)
    {
      b[(2*i)+1]=a[i];
       b[2*i]='a';
    }
      printf("%s\n",b);
    
  return;
}

void check(char a[])
{
  int count=0;
  int len;
   for(int i=0;a[i]!='\0';i++)
    {
      len++;
    }
  for(int i=0;a[i]!='\0';i++)
    {
      if(i!=len || i!=len-1){
      if(a[i+2]-a[i]=='b'-'a')
	{
	  count++;
	}
      }
	    
    }
  printf("%d\n",count);
  return;
}
  
int main()
{
  char str[20];
  printf("Enter a string:\n");
  scanf("%s",str);
  printf("String : %s\n",str);
  printf("Check:\n");
  check(str);
  printf("Encoded1 = \n");
  encode1(str);
  printf("Encoded2 = \n");
  encode2(str);
}
