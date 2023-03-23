#include<stdio.h>
#include<math.h>
int main(){
    double alpha=0.306, sigma=1.2, Rs=6.96e8, Ts=1.3654e-11, D=1.496e11;
    double Tp;
    double A=sqrt((1-alpha)/sigma);   //defining new variables to simplify the calculation of Tp
    double B=(Rs*A)/(2*D);
    Tp=Ts*sqrt(B);
    printf(" Tp = %le \n",Tp);

    // now finding the value of Tp (new variable as Tp1 by the data given by user
    double alpha1, sigma1, Rs1, Ts1, D1;
        printf("enter value of alpha1 \n");
        scanf("%lf",&alpha1);
        printf("enter value of sigma1 \n");
        scanf("%lf",&sigma1);
        printf("enter value of Rs1 \n");
        scanf("%lf",&Rs1);
        printf("enter value of Ts1 \n");
        scanf("%le",&Ts1);
        printf("enter value of D1 \n");
        scanf("%le",&D1);
    double Tp1;
    double A1=sqrt((1-alpha1)/sigma1);   //defining new variables to simplify the calculation of Tp
    double B1=(Rs1*A1)/(2*D1);
    Tp1=Ts1*sqrt(B1);
    printf(" Tp1 = %le \n",Tp1);
    //comparing Tp and Tp1 both are coming equal


return 0;
}
