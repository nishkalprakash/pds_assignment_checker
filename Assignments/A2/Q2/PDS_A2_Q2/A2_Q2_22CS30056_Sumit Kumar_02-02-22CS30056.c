#include<stdio.h>
#include<math.h>
int main()
{
   double alpha=0.306,sigma=1.2,radius=6.96e8,time=1.3654e-11,diameter=1.496e11,answer;
   answer=time*(sqrt((radius*sqrt((1-alpha)/sigma))/2*diameter));
   double answer_new;
   printf("the user input is: %le\n",answer);
   printf("Enter the value of aplha:");
   scanf("%lf",&alpha);
   printf("Enter the value of sigma:");
   scanf("%lf",&sigma);
   printf("Enter the value of radius:");
   scanf("%lf",&radius);
   printf("Enter the value of time:");
   scanf("%lf",&time);
   printf("Enter the value of diameter:");
   scanf("%lf",&diameter);
   answer_new=time*(sqrt((radius*sqrt((1-alpha)/sigma))/2*diameter));
   printf("THe value of T is %le:\n",answer_new);

   return 0;


}
//the  no user input value is 8.591320e-02   while the user input value is 8.591320e-02
