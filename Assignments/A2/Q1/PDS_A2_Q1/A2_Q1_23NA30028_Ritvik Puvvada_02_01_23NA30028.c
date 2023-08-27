//Roll no:23NA30028//
//Name:Ritvik Puvvada//

#include<stdio.h>
int main()  
{
  float a,c;  //a and c are float as they have decimal points
  int b;      //b is an integral value
  printf("Enter a number: ");  //input 
  scanf("%f",&a);
  b=(int)a;  //typecasting float to int
  c=a-b;     //no.-int=decimal part i.e., remainder
  printf("Integral part = %d\n",b);
  printf("Fractional part = %f\n",c);
  return 0;
}
  
