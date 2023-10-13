#include<stdio.h>
int count;

  void check(char s[])
{
  printf("count:%d\n",count);
  int c=0;
  int j;
  int temp1,temp2;
  
  for( j = 0;j<count-1;j++);
  {
    printf("%c < %c \n",s[j],s[j+2]);
       if(s[j]<s[j+2])
      {
      	
      c++;
     
      }
        
    
  }
  printf("%d\n",c);
  return ;
}


void encode1(char s[20])
{
 for(int a=0;a<=count-1;a++)
    {
      
      s[a]=s[a]+2;
     }
 printf("\noutput 2: ");
 for(int b=0;b<=count-1;b++)
   {
     printf("%c",s[b]);
   }
 return;
}

     //part c
 void encode2(char str[20])
 {
   printf("\nexpected output3: ");
   for(int c=0;c<=count-1;c++)
     {
       printf("a%c",str[c]);
     }
   return;
 }

int main()
{
  char str[20];
   count = 0;
   printf("enter the characters: \n ");
   scanf("%[^\n]s",str);
   for(int i=0;str[i]!='\0';i++)
    {
      count ++;
     
      //scanf("%[^\n]s",str);
    }
  printf("the input is: %s\n",str);
  printf("expected output: ");
   check(str);
   encode1(str);
   encode2(str);
  return 0;
}
  
