/*
Name- Krish Agarwal
Roll No.- 21NA10018
Department- Ocean Engineering and Naval Architecture
Section- 3
*/
#include <stdio.h>
int main()
{
    float a,u,alpha,t,d;
    printf("Enter the location of the body : ");
    scanf("%f",&a);
    printf("Enter the initial speed of the body : ");
    scanf("%f",&u);
    printf("Enter the acceleration of the body : ");
    scanf("%f",&alpha);
    printf("Enter the time travelled by the body : ");
    scanf("%f",&t);
    d=a+u*t+0.5*alpha*t*t;
    printf("The distance travelled by the body from the origin : %f",d);
    return 0;
}
