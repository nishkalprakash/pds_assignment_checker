//Roll no:23CH10026
//Name:Disha Mukherjee

#include <stdio.h>
#include <string.h>

void check(char str[])
{
  int i=0,count=0;
  char c;
  while(i!=strlen(str))
    {
      c=(char)((int)str[i]+1);  //storing the next character
      if(str[i+2]==c)        
	count++;
      i++;
    }
  printf("Expected output:%d\n",count);
}

void encode1(char str[])
{
  int i;
  char st1[21];
  for(i=0;i<strlen(str);i++) //encoding every character
    {
      if(str[i]=='y')
	st1[i]='a';
      else if(str[i]=='z')
	st1[i]='b';
      else
	st1[i]=(char)((int)str[i]+2);
    }
  for(i=0;i<strlen(str);i++) //displaying the string
    printf("%c",st1[i]);
  printf("\n");
}

void encode2(char str[])
{
  int i,n,j=0;
  char st[42];
  n=strlen(str);
  for(i=0;i<n*2;i++) 
    {
      if(i%2==0)      //modifying string by putting a at even indices
	st[i]='a';
      else
	{
	  st[i]=str[j];
	  j++;
	}
    }
  for(i=0;i<n*2;i++) //displaying the string
    printf("%c",st[i]);
  printf("\n");
}


int main()
{
  char str[21];
  printf("\nenter a string of atmost 20 characters"); //input the string
  scanf("%s",str);
  check(str);
  encode1(str);
  encode2(str);
  return 0;
}
