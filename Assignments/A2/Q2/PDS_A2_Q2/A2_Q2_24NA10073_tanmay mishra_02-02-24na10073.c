//program to calculate Tp..?
 
//code creator : tanmay mishra
//roll number : 24na10073


#include <stdio.h> 
#include <math.h>
int main()
{
double alpha = 0.306,rho = 1.2,Rs = 6.96e8,Ts = 1.365e-11,D= 1.496e11,Tp;

  Tp = Ts*(sqrt((Rs*sqrt((1-alpha)/rho))/2*D));
  //for predefined values

  printf("when no user input : Tp = %le", Tp);
  
//now for values taken by user

printf("\n write the value of alpha:");
scanf("%lf", &alpha);

printf("write the value of rho :");
scanf("%lf", &rho);

printf("write the value of Rs");
scanf("%le" , &Rs);

printf("write the value of Ts");
scanf("%le" , &Ts );

printf("write the value of D");
scanf("%le" , &D);

               Tp = Ts*(sqrt((Rs*sqrt((1-alpha)/rho))/2*D));
               
   printf(" Tp %le" , Tp);
   
   return 0;
   
   // we can observe tht both the values satisfy each other
   
   }


