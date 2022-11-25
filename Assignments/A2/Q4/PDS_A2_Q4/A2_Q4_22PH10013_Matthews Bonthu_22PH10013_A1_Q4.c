#include <stdio.h>
#include <math.h>

int main( )
{
  double  myu,epsilon,P,C;
  printf("please enter the values of Myu and epsilon");
  scanf(" %lf %lf",&myu,&epsilon);
  
  P= sqrt(myu*epsilon);
  C= 1/P;
  
  printf("hence the speed of the light is %lf",C);

return 0;
}
  
  


