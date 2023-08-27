//Roll No:23EE30017
//Name:Ranga Kiranmai
#include <stdio.h>
int main()
{
  int x,y;
  float z,i;
  printf("Type the amount being deposited and the period of deposit in years\n");
  scanf("%d %d",&x, &y);
  printf("The amount being deposited=%d\nThe period of deposit in years=%d\n",x,y);
  printf("Type the applicable interest rate\n");
  scanf("%f",&z);
  printf("The applicable interest rate=%f\n",z);
  i=(float)x*y*z/100;
  printf("The total amount payable at the end of the deposit period=%f",i+x);
  return 0;
}
  

  
  
  
