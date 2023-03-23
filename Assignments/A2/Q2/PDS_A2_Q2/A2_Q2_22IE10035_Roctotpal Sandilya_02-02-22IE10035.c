#include<stdio.h>
#include<math.h>

int main(){
double alpha; double sigma ;double rs; double ts; double d;

printf("Enter value of alpha:");
scanf("%lf", &alpha);
printf("Enter value of sigma:");
scanf("%lf", &sigma);
printf("Enter value of Rs:");
scanf("%lf", &rs);
printf("Enter value of Ts:");
scanf("%lf", &ts);
printf("Enter value of D:");
scanf("%lf", &d);

double tp = ts*sqrt(rs*sqrt((1-alpha)/sigma)/(2*d));
printf("%le", tp);

return 0;

//user input ans = 5.72864e-13
//no user input = 5.74826e-13
}
