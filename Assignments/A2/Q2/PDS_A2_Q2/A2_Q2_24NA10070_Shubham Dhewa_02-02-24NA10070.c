#include <stdio.h>
#include <math.h>
int main()
{
  float alpha, rho, Rs, Ts, D ;
  
  alpha = 30.6e-2 ;
  rho = 12.0e-1 ;
  Rs = 69.6e7 ;
  Ts = 1365.4e-14 ;
  D = 149.6e9 ;
  
  scanf("%f, %f, %f, %f, %f", &alpha, &rho, &Rs, &Ts, &D) ;
  
  float Tp ;
  
  Tp = Ts*(sqrt((Rs*sqrt((1-alpha)/rho)))/2*D) ;
  printf("Tp is %f", Tp) ;
  
return 0 ;
}
