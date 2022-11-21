#include<stdio.h>
#include<math.h>

  int main()
  {
       float c; //c is the speed of light.  
       float mu_not=12.566e-7;
       float epsilon_not=8.85e-12; 
      c = 1/sqrt(mu_not*epsilon_not);
      printf(" speed of light is %f ",c);
      return 0;
  
  
  }
