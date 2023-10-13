#include<stdio.h>
#include<stdlib.h>

void check(char string[])
{
  int i, strlen = 0, counter = 0;
  while(string[i] != '\0') strlen++, i++; //Finding the length of string
  if(strlen <= 20)
    {
      for(i = 0; i < strlen - 2; i++)
	{
	  if(string[i] + 1 == string[i+2]) counter++; //Checking for the given condition in the problem
	}
        printf("%s : %d\n",string, counter);
    }
  else
    {
      printf("String exceeds 20 characters\n");
    }

  
}

void encode1(char string[])
{
  char encode1[21];
  int i, strlen = 0;

  //Encoding the string and storing it in encode1
  for(i = 0; string[i] != '\0'; i++)
    {
      if(string[i] <= 'x')
	{
	  encode1[i] = string[i] + 2;
	}
      else
	{
	  encode1[i] = string[i] - 'y' + 'a';
	}
    }

  if(i <= 20)
    {
      encode1[i] = '\0';
      printf("%s\n",encode1);
    }
  else
    printf("String exceeds 20 characters\n");
}

void encode2(char string[])
{
  char encode2[41];
  int i=0, strlen = 0;
  while(string[i] != '\0') strlen++, i++; //Finding string length
  if(strlen <= 20)
    {
      //Encoding the string with the given condition in the problem and storing it in encode2
      for(i = 0; i < 2*strlen; i++)
	{
	  encode2[i] = 'a';
	}
      encode2[i] = '\0';
      for(i = 0; i < strlen; i ++ )
	{
	  encode2[2*i+1] = string[i];
	}
      printf("%s\n",encode2);
    }
  else
    printf("String exceeds 20 characters\n");
}

int main()
{
  char string[21];
  printf("Enter a string : ");
  scanf("%s",string);
  check(string);
  encode1(string);
  encode2(string);
  printf("%s\n",string); //Printing the string again
  return 0;
}
