#include<stdio.h>
#include<math.h>

int main()
{
   double alpha1, rho1 , Rs1, Ts1, D1, Tp1 ;
   printf("Enter the value of alpha1 = ");
   scanf("%le",&alpha1);
   printf("Enter the value of rho1 = ");
   scanf("%le",&rho1);
   printf("Enter the value of Rs1 = ");
   scanf("%le",&Rs1);
   printf("Enter the value of Ts1 = ");
   scanf("%le",&Ts1);
   printf("Enter the value of D1 = ");
   scanf("%le",&Ts1);
   
   Tp1 = Ts1*sqrt(Rs1*sqrt(1 - alpha1/rho1)/2*D1);
   
   printf("The value of Tp1 = %le\n",  Tp1);
   
   // With user output the progam is over
   
   
   double alpha2 = 0.306, rho2 = 1.2 , Rs2 = 6.96e8, Ts2 = 1.3654e-11, D2 = 1.496e11, Tp2;
   Tp2 = Ts2*sqrt(Rs2*sqrt(1 - alpha2/rho2)/2*D2);
   
   printf("the value of Tp2 = %le",Tp2);
   
   // Without user input
   return 0;
}
