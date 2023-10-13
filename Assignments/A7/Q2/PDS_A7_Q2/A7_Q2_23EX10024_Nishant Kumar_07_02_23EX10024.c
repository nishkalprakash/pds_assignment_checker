//ROLL 23EX10024
//NAME NISHANT KUMAR
#include<stdio.h>
void check(char str[])
{
  int count = 0;
  int count1=0;
  for(int i=0;i<20;i++)
    {
      if(str[i] != '\0')
	{
	  count ++;
	}
      else
	{
	  break;
	}
    }
  for(int i=0;i<count-2;i++)
    {
      if(str[i]==str[i+2]-1)
	{
	  count1 ++;
	}
    }
  printf("\n");
  printf("The check pattern is followed %d times \n",count1);
}
void encode1(char str[])
{
  int count = 0;
   for(int i=0;i<20;i++)
    {
      if(str[i] != '\0')
	{
	  count ++;
	}
      else
	{
	  break;
	}
    }
   for(int i=0;i<count;i++)
     {
       if(str[i] == 'y')
	 {
	   str[i]='a';
	 }
       else if(str[i]=='z')
	 {
	   str[i]='b';
	 }
       else
	 {
	   str[i]=str[i]+2;
	 }
     }
   printf("The encode1 string is:\n");
    for(int i=0;i<count;i++)
    {
      printf("%c",str[i]);
    }
    printf("\n");
}
void encode2(char str[])

{
   int count = 0;
   for(int i=0;i<20;i++)
    {
      if(str[i] != '\0')
	{
	  count ++;
	}
      else
	{
	  break;
	}
    }
   char str1[2*count - 1];
   for(int i = count - 1;i>=0;i--)
     {
       str1[i*2 + 1 ] = str[i];
     }
   for(int i=0;i<2*count-1;i++)
     {
       str1[2*i]='a';
     }
   printf("The encode2 string is:\n");
   for(int i=0;i<2*count -1 ;i++){
     printf("%c",str1[i]);
   }
  
}
int main()
{
  char str[20];
  int count =0;
  printf("Enter a series of letters less than 20:\n");
  scanf("%s",str);
  for(int i=0;i<20;i++)
    {
      if(str[i] != '\0')
	{
	  count ++;
	}
      else
	{
	  break;
	}
    }
  for(int i=0;i<count;i++)
    {
      printf("%c",str[i]);
    }
  check(str);
  encode1(str);
  encode2(str);
  return 0;
}
