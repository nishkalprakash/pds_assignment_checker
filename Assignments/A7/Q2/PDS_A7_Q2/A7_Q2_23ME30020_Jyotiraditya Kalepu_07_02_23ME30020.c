//Roll No: 23ME30020
//Name: Kalepu Jyotiraditya

#include <stdio.h>
#include <string.h>

void check(char str[], int len);
void encode1( char str[], int len);
void encode2( char str[], int len);

int main()   // Declaring Main
{
  char str[20];
  int len = 0;
  printf("Enter a string : ");
  scanf("%s", str);
  len = strlen(str);
  check(str,len);
  encode1(str,len);
  encode2(str,len);
}

void check(char str[], int len)  // Declaring Check
{
  int count = 0;
  for(int i =2; i < len; i++)
    {
      if(str[i]-str[i-2] == 1) count++;
    }
  printf("Output of Check : %d\n",count);
}

void encode1( char str[], int len)  // Declaring encode1
{
  int c;
  printf("Output of Encode1 : ");
  for(int i = 0; i < len; i++)
    {
      if(str[i] == 'y') c = 'a';
      else if(str[i] == 'z') c = 'b';
      else c = str[i] + 2;
      printf("%c",c);
    }
  printf("\n");
}

void encode2( char str[], int len)  // Declaring encode2
{
  printf("Output of Encode2 : ");
  for(int i = 0; i < len; i++)
    {
      printf("a%c",str[i]);
    }
  printf("\n");
}
