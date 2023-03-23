#include<stdio.h>
#include<math.h>

void main(){
    double alpha=0.306,user_alpha;
    double sigma=1.2,user_sigma;
    double Rs=6.96e8,user_Rs;
    double Ts=1.3654e-11,user_Ts;
    double D=1.496e11,user_D;

   /* printf("%lf",alpha);
    printf("\n%lf",sigma);
    printf("\n%le",Rs);
    printf("\n%le",Ts);
    printf("\n%le",D);
    */

    double Tp=(Ts)*(sqrt((Rs*sqrt((1-alpha)/sigma))/(2*D)));
    double calculated_Tp;

    printf("Predefined value of Tp is: %le",Tp);

    printf("\n");

    //Taking input from user
    printf("Enter the values below:");

    printf("\nAlpha = ");
    scanf("%lf",&user_alpha);

    printf("Rho = ");
    scanf("%lf",&user_sigma);

    printf("Rs = ");
    scanf("%le",&user_Rs);

    printf("Ts = ");
    scanf("%le",&user_Ts);

    printf("D = ");
    scanf("%le",&user_D);

    calculated_Tp=(user_Ts)*(sqrt((user_Rs*sqrt((1-user_alpha)/user_sigma))/(2*user_D)));

    printf("\nThe calculated value of Tp is: %le",calculated_Tp);

}


/* I am getting the value of Tp as  same irrespective of whether the values are predefined or entred by user
*/
