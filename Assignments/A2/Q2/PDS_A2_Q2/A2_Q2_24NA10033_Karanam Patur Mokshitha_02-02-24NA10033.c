#include <stdio.h>
#include<math.h>
int main ()  {
      float alpha=0.306,rho=1.2,Rs=6.96e8,Ts=1.3654e-11,D=1.496e11, Tp;
      Tp=Ts*(sqrt((Rs*(sqrt(1-alpha)/rho)))/2*D);
      //scanf("%f",&Tp);
      printf("The value of Tp without user input is%f",Tp);
     
      printf("\nThe value of alpha:");
      scanf("%f",&alpha);
      printf("\nThe value of rho:");
      scanf("%f",&rho);
      printf("\nThe value of Rs:");
      scanf("%f",&Rs);
      printf("\nThe value of Ts:");
      scanf("%f",&Ts);
      printf("\nThe value of D:");
      scanf("%f",&D);
      
      Tp=Ts*(sqrt((Rs*(sqrt(1-alpha)/rho)))/2*D);
      //scanf("%f",&Tp);
      printf("The value of Tp is%f",Tp);
     
       return 0;
       /*
      The value of Tp without user input is22449.947266
	The value of alpha:0.306

	The value of rho:1.2

	The value of Rs:6.96e8

	The value of Ts:1.3654e-11

	The value of D:1.496e11
	The value of Tp is22449.947266
	*/
}    
      
      
      
     
