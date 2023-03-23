#include<stdio.h>
#include<math.h>

int main(){
double  Rs, Ts, D, Tp, Tp1, temp1, temp2, temp3;
float alpha, rho;

/* temp 1, temp2, temp3 are variables created to hold the intermediate values */

printf("Enter the value of alpha:\n");
scanf("%f", &alpha); //reading the value from the user

printf("Enter the value of rho:\n");
scanf("%f", &rho);

printf("Enter the value of Rs:\n");
scanf("%le", &Rs);

printf("Enter the value of Ts:\n");
scanf("%le", &Ts);

printf("Enter the value of D:\n");
scanf("%le", &D);

temp1 = (1-alpha)/rho;
temp2 = sqrt(temp1);
temp3 = sqrt((Rs*temp2)/(2*D));
Tp = Ts*temp3;

printf("Value of Tp when values are entered by the user is %le \n", Tp);




/* Below we are finding Tp when values are predefined */




double  Rs1 = 6.96e8, Ts1 = 1.365e-11, D1 = 1.496e11;
float alpha1 = 0.306, rho1 = 1.2;

double temp01, temp02, temp03;
 /* temp11, temp22, temp33 are variables to find the intermediate values */
temp01 = (1-alpha1)/rho1;
temp02 = sqrt(temp01);
temp03 = sqrt((Rs1*temp02)/(2*D1));
Tp1 = Ts1*temp03;
printf("Value of Tp when values are predefined %le \n", Tp1);

return 0;

}
