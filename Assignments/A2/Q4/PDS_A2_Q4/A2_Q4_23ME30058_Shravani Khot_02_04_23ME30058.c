//Roll no.: 23ME30058
//Name: Shravani Khot

#include <stdio.h>
#include <math.h>

int main()
{
  int m;
  int n;
  printf("Enter two integers m and n \n");
  scanf("%d%d",&m,&n);
  

  printf("The sum of the two integers is %d \n",m+n);
  printf("The difference between the two integers is %d \n", m-n);
  printf("The product of the two integers is %d \n", m*n);
  printf("The integer part of quotient is %d \n", m/n);
  printf("The integer remainder is %d \n", m%n);
  printf("The quotient is %f \n",(double)m/n);
  printf("The sum of their squares is %d \n", (m*m)+(n*n) );
  printf("The square of their sum is %d \n", (m+n)*(m+n) );
  printf("The average of the integers is %f \n",(double)(m+n)/2 );
  printf("The average of the sum of their squares is %f \n",(double)((m*m)+(n*n))/2 );

}
    
