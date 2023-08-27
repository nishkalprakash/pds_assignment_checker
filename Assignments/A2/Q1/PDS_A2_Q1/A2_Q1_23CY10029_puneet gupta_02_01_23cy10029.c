#include <stdio.h>

int main ()
{
 float a,b ;
 int c;
 printf("enter a  number \n");
 scanf("%f", &a);
 c=(int)a; 
b= a-c;
 printf(" the integer number is %d \n",c);
  printf(" the decimal number is %f",b);	     
  
  return 0;
}
