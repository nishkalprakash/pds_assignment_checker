#include <stdio.h>
int main ( ) 
{
  long number,m;
  printf("please enter the number");
  scanf("%ld",&number);
  
  while (number!=0)
{ 
  m=number%10;
  switch(m)
{
  case 0 : printf(" zero");
           break;
  case 1: printf(" one");
           break;
  case 2:  printf(" two");
           break;
  case 3: printf(" three");
           break;
  case 4: printf(" four");
           break;
  case 5: printf(" five");
           break;
  case 6 : printf(" six");
           break;
  case 7: printf(" seven");
     break;
  case 8 : printf(" eight");
           break;
  case 9: printf(" nine");
           break;
}
number=number/10;
  }
  return 0;
}
