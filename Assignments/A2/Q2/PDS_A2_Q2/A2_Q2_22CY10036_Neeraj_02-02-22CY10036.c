#include<stdio.h>
#include<math.h>
    int main(){
     double alpha = 0.306, sigma =1.2 , radius = 6.96e8, time = 1.3654e-11, diameter = 1.496e11, result, answer;
      result = time*sqrt(radius*sqrt((1-alpha)/sigma)/2*diameter);
      printf("result is %le\n", result);
      printf("enter the value of alpha;");
      scanf("%lf", &alpha);
      printf("enter the value of sigma;");
      scanf("%lf", &sigma);
      printf("enter the value of radius;");
      scanf("%lf",&radius);
      printf("enter the value of time;");
      scanf("%lf",&time);
      printf("enter the value of diameter;");
      scanf("%lf",&diameter);

      printf("result is %le", result);
     return 0;






    }
