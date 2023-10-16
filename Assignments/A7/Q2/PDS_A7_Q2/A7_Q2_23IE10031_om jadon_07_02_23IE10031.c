// Roll - 23IE10031
// Name - Om singh Jadon

#include <stdio.h>
#include <stdlib.h>


int check(char str[21]);
int encode1(char str[21]);
int encode2(char str[21]);


int main()
{
  char str[21];
  printf("Type the string: ");
  scanf("%s", str);
  
  check(str);
  printf("\n");
  
  encode1(str);
  printf("\n");
  
  encode2(str);
  printf("\n");
  
}

int check(char str[21])
{
  int count = 0;
  for (int i=0; i<18; i++)
    {
      if (str[i+2] - str[i] == 1) count++;
    }
  printf("%d", count);
}


int encode1(char str[21])
{
  for (int i=0; str[i]!='\0';i++)
    {
      
      if (str[i] == 'y') printf("%c", 'a');
      else if (str[i] == 'z') printf("%c", 'b');
      else printf("%c", str[i]+2);
    }
}

int encode2(char str[21])
{
  char nstr[40];
  
  int j=0;
  for (int i=0; str[i]!='\0';i++)
    {
      nstr[2*i] = 'a';
      nstr[2*i + 1] = str[i];
      j++;
    }
  nstr[2*j] = '\0';
  printf("%s",nstr);
}
