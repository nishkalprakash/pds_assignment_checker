#include<stdio.h>
#include<math.h>
int main()
{
  double alpha,rho,Rs,Ts,D,Tp;
  printf("\n alpha=\n");
  printf(" rho=\n");
  printf(" Rs=\n");
  printf(" Ts=\n");
  printf(" D =\n");
  scanf("%le%le%le%le%le", &alpha,&rho,&Rs,&Ts,&D);
  Tp=Ts*sqrt(Rs*sqrt(1-alpha/rho)/D+D);
  printf("Tp=%le",Tp);
  getchar();
  return 0;
 }
  
