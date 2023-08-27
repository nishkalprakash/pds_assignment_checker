//Roll no. : 23EE10056//
//Name : Ritwik Suresh//
#include<stdio.h>
int main()
{
  double  a,b ;
  int  c ;
  printf("Enter the value of the floating point no. :\n");
  scanf("%lf",&a);
  c = a;  //'c' is of int data type so 'a' which is a float value will be stored as   int//
  b = a-c ;
  printf("The integral part of %lf = %d\n",a,c);
  printf("the fractional part of %lf = %lf\n",a,b);
  return 0;
}
  
