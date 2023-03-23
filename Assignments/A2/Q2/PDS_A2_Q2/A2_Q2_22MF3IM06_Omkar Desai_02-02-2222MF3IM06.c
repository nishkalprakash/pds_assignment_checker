#include<stdio.h>
#include<math.h>
int main(){
double rho, alpha, R,T,D,Tp;
printf("Enter the value of rho, alpha, R, T, D with space between them\n");
scanf("%lf%lf%le%le%le", &rho, &alpha, &R, &T,&D);
Tp= T*sqrt((R*sqrt((1-alpha)/rho)/2*D));


printf("Ts=%le",Tp);

return 0;
}
// from user input the program is giving 8.5913e-2 aas the answer//
/*double rho=1.2, alpha=0.306, R=6.96e8,T=1.3654e-11,D=1.496e11,Tp;
Tp= T*sqrt((R*sqrt((1-alpha)/rho)/2*D));


printf("Tp=%le",Tp);

return 0;
}*/
/* Tp=8.5913e-2(from predefined)
therefore both the values are same*/
