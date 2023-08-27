// Roll No.: 23ME10044
//Name: Lalit Karthikeyan M A
#include<stdio.h>
int main(){
  
  float  a, fractionalpart;
  int integralpart;
  
  printf("Enter the number: ");
  scanf("%f",&a);
  
  integralpart = int(a);
  
  fractionalpart = a - integralpart;
  
  printf("Integral part= %d \n", integralpart);
  
  printf("Fractional part= %0.5f \n", fractionalpart);

  return 0;
  
}
    
