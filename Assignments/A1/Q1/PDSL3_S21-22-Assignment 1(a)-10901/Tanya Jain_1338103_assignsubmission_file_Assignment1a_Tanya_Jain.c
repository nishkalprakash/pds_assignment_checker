// question 1
// speed distance time

#include <stdio.h>
int main()
{
    float a, u, alpha, t, dis;
    printf("Enter the value of a, u, alpha in order: ");
    scanf("%f %f %f",&a,&u,&alpha);
    printf("Enter the time: ");
    scanf("%f",&t);
    dis=a+u*t+(0.5*alpha*t*t);
    printf("Distance = %f",dis);
    return 0;
}
