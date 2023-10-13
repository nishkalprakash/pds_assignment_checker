//Name: Swaraj Dian
//Roll: 23EC30056
#include<stdio.h>

void check(char string[],int length) //Question1 check()
{
  int i,count=0;
  for(i=0;i<length-2;i++)
    {
      if(string[i+2]-string[i]==1)
	count++; //Counting
    }
  printf("Input String: ");
  for(i=0;string[i]!='\0';i++)
    printf("%c",string[i]);
  printf("\nOutput of Check= %d\n\n",count); //Output of check()
}

void encode1(char string[],int length) //Q2 encode1
{
  char str2[20];
  int i;
  for(i=0;i<=length;i++)
    str2[i]=string[i];
  for(i=0;i<length;i++)//Encoding as given
    {
      if (str2[i]=='y')
	str2[i]='a';
      else if(str2[i]=='z')
	str2[i]='b';
      else
	str2[i]=str2[i]+2;
    }
  printf("Output String after encode1: "); //printing output
  for(i=0;i<length;i++)
    printf("%c",str2[i]);
  printf("\n\n");
}

void encode2(char string[],int length)//Q3 encode2()
{
  char str2[20], str3[40];
  int i;
  for(i=0;i<=length;i++)//copying to new array
    str2[i]=string[i];
  for(i=0;i<length;i++)//
    {
      str3[2*i+1]=str2[i];
      str3[2*i]='a';
    }
  printf("Input String: ");//input string original
  for(i=0;string[i]!='\0';i++)
    printf("%c",string[i]);
  printf("\n");
  printf("Output String after encode2: ");//output of encode2()
  for(i=0;i<2*length;i++)
    printf("%c",str3[i]);
  printf("\n\n");
}

int main() //main fn
{
  char str[20];
  int i,len=0;
  printf("Enter a string: ");
  scanf("%s",str);//reading string
  printf("Input String: ");
  for(i=0;str[i]!='\0';i++)
    printf("%c",str[i]);
  for(i=0;str[i]!='\0';i++)
    len++;
  printf("\n\n");
  check(str,len);
  encode1(str,len);
  encode2(str,len);
  printf("Original String: ");
  for(i=0;str[i]!='\0';i++)
    printf("%c",str[i]);
}
