#include<stdio.h>
#include<math.h>
int main()
{
   double alpha,sigma,Rs,Ts,D;
 //  alpha=0.306,sigma=1.2,Rs=6.96e8,Ts=1.3654e-11,D=1.496e11;
   printf("Enter alpha : \n");
   scanf("%le",&alpha);
   printf("Enter sigma : \n");
   scanf("%le",&sigma);
    printf("Enter Rs : \n");
   scanf("%le",&Rs);
   printf("Enter Ts : \n");
   scanf("%le",&Ts);
   printf("Enter D: \n");
   scanf("%le",&D);
   printf("value of Tp is : %le",Ts*sqrt(Rs*sqrt((1-alpha)/sigma)/2*D));   //8.591320e-02 is direct value of Tp when value is given to variable in program itself

}

