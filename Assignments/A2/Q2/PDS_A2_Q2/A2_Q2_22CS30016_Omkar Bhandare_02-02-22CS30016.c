#include<stdio.h>
#include<math.h>

int main()
{
  //double alpha, rho, Rs, Ts, D;

  double alpha = 0.306, rho = 1.2, Rs = 6.96e8, Ts = 1.3654e-11, D = 1.496e11, Tp;

  double rt, rt1, rt2;

  //printf("Enter alpha : \n");
  //scanf("%lf", &alpha);
  //printf("Enter rho: \n");
  //scanf("%lf", &rho);
  //printf("Enter Rs : \n");
  //scanf("%lf", &Rs);
  //printf("Enter Ts : \n");
  //scanf("%lf", &Ts);
  //printf("Enter D : \n");
  //scanf("%lf", &D);

  rt = sqrt ((1 - alpha) / rho);
  rt1 = sqrt ((Rs * rt) / (2 * D));
  rt2 = Ts * rt1;

  printf("The value of Tp is : %le \n", rt2);

  return 0;

   //In the first case we took input from the user to calculate the required value while in the second case we assigned the values to the variables during declaration itself in both of the cases the values entered or the values assigned were the same
   //The output obtained in both the cases was the same. Since we did not change the input type nor did we change the input values the output has remained the same.
  //The answer in both cases was 5.742861e-13
}
