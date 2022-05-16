#include<stdio.h>
int main () {
    float a,u,b,t;
    printf("enter the value of a\n");
    scanf("%f",&a);
    printf("enter the value of u\n");
    scanf("%f",&u);
    printf("enter the value of b\n");
    scanf("%f",&b);
    printf("enter the time\n");
    scanf("%f", &t);
    printf("distance travelled d=%f\n", (a+(u*t)+0.5*t*t*b));
    return 0;
}