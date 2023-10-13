#include<stdio.h>
int check(char str[20], int len)
{

}
int encode1(char str[20], int len)
{char str2[20];
  int i,l=len;
  for(i=0;i<l;i++)
    { if(str[i]=='y')
	str2[i]='a';
      else if(str[i]=='z')
	str2[i]='b';
      else
        str2[i]=str[i]+2;
    }
  for(i=0;i<l;i++)
    printf("%c",str2[i]);
}
int encode2(char str[20], int len)
{
  int i,l=len,m;
  m=l*2;
  char str2[m];
  for(i=0;i<m;i+=2)
    {
      str2[i]='a';
    }
  for(i=1;i<m;i+=2)
    {
      str2[i]
    }
}






int main()
{ char str[20],len;
  printf("Enter a string: ");
  scanf("%s",str);
  for(i=0;i<20;i++)
    {
      if(str[i]=='\0')
	break;
      printf("%c",str);
    }
  len=i+1;
    check(str,len);
    encode1(str,len);
    encode2(str,len);
}
