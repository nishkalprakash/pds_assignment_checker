#include <stdio.h>

int main ()
{
  int a ,b ,c;
 printf("enter your age in month \n");
 scanf("%d", &a);
 b= a/12;
 if (a%12>0)
   printf(" the age of the person in years %d \n",b+1);
 else
   printf(" the age of the person in year %d\n", b);
  	     
  
  return 0;
}
