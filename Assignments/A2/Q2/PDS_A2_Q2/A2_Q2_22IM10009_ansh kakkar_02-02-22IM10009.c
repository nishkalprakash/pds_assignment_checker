#include<stdio.h>
#include<math.h>
int main()
{
   double alpha,rho,rs,ts,D,Tp;
   printf("enter the value of alpha\n");
   scanf("%le",&alpha);
   printf("enter the value of rho\n");
   scanf("%le",&rho);
   printf("enter the value of rs\n");
   scanf("%le",&rs);
   printf("enter the value of ts\n");
   scanf("%le",&ts);
   printf("enter the value of D\n");
   scanf("%le",&D);
   double temp = sqrt((1-alpha)/rho);
   Tp=ts*sqrt(rs*temp/(2*D));
   printf("%le",Tp);
   return 0;
   //here the value of Tp with user input and with predefined input are same.
   //with user input Tp=5.742861e-13
   //with predefined input Tp=5.742861e-13



}
