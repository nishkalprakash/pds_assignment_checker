
// Lab 2
// Roll Number - 23CE10065
// Name - Shashank Sahil



#include <stdio.h>
int m;
int n;
int z;
float k;
float l;
float y;
int main (){
  printf(" Enter the first number m\n ");
  scanf("%d",&m);
  printf(" Enter the first number n\n ");
  scanf("%d",&n);
  printf("The sum is %d\n",m+n);
  printf("The difference %d\n", m-n);
  printf("The integer product is %d\n", m*n);
  printf("The integer quotient is %d\n",m/n);
  printf("The integer remainder is %d\n", m%n);
  k = m*1;
  l= n*1;
  z = m+n;
  y = k+l;
  printf("The floating point quotient is %f\n",k/l);
  printf("The sum of their squares is %d\n",m*m + n*n);
  printf("The square of the sum is %d\n", z*z);
  printf(" The average as a floating number %f\n" , y/2);
  printf("The average of sum of squares as a floating point number % f",(k*k + l*l)/2);
  return 0;
     }
  
  
