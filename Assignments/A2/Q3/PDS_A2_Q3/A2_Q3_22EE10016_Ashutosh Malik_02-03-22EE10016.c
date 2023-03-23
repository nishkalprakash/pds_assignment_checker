#include<stdio.h>
#include<math.h>
int main()
{
double x, y, u,  theta  , a , t;
printf("write the value of x0 \n");
scanf("%lf", &x);
printf("write the value of y0 \n");
scanf("%lf", &y);
printf("write the value of u \n");
scanf("%lf", &u);
printf("write the value of θ \n");
scanf("%lf", &theta);
printf("write the value of  α \n");
scanf("%lf", &a);
printf("write the value of  t \n");
scanf("%lf", &t);
printf("xt = %lf", u*t*cos((theta*3.14)/180) + 0.5*a*t*t*cos((theta*3.14)/180));
printf("yt = %lf", u*t*sin((theta*3.14)/180) + 0.5*a*t*t*sin((theta*3.14)/180));

return 0;
}
