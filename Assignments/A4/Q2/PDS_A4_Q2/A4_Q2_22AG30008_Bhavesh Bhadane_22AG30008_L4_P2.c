#include<stdio.h>
#include<math.h>


int main ()
{
  int m,n,p;
 printf("Enter the number :");
 scanf("%d ",&m);
 while(m!=0)
{ 
  p=p/10;
  n=n+p;
  printf("The sum of digits is: ",n);
}
  return 0;
}
