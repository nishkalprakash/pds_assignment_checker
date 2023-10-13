#include <stdio.h>
#include <string.h>
void check(char str[]);
void encode1(char str[]);
void encode2(char str[]);
//PART (A)

int main()
{
  char str[20],ch,i=0,len=0;
  int c=0;
    printf("enter the string :\n");
  do
    {
      ch=getchar();
      str[c]=ch;
      c++;
    }
  while (str[c-1]!='\n');
  c=c-1;
  str[c]='\0';
  
  printf("String entered : %s\n",str);
  check(str);
  encode1(str);
  encode2(str);
  printf("Original string after function calls : %s\n",str);
}
void check(char str[20])
{
  int i=0,len=0,count=0;
  while (str[i])
    {
      len++;
      i++;
    }
  for (i=0;i<=len-2;i++)
    {
      if (str[i]==str[i+2]-1)
 {
   count++;
 }
    }
  printf("No. of total counts = %d\n",count);
}

//PART (B)

void encode1(char str[])
{
  char enc1[20];
  int i=0,len=0;
  while (str[i])
    {
      len++;
      i++;
    }
  
  for (i=0;i<len;i++)
    {
      enc1[i]=str[i];
    }
  enc1[i]='\0';
  for (i=0;i<len;i++)
    {
      if (str[i]=='y') enc1[i]='a';
      else  if (str[i]=='z') enc1[i]='b';
      else enc1[i]=str[i]+2;
    }
  printf("First encoded string = %s\n",enc1);
      
}

//PART (C)

void encode2(char str[])
{
  char enc2[40],i=0,j,len=0;
   while (str[i])
    {
      len++;
      i++;
    }
  for (i=0,j=1;i<len;i++,j=j+2)
    {
      enc2[j]=str[i];
      enc2[j-1]='a';
    }
  printf("Second encoded string = %s\n",enc2);
}