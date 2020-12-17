#include <stdio.h>
#include <math.h>
int main(){
    double a, b, c, D, x, y;
    printf("The coefficients of the equation are:\n");
    scanf("%lf%lf%lf",&a,&b,&c);
    D= pow(b,2) - 4*a*c;
    if (D<0)
        printf("The roots of the equation are complex.");
    else if(D>=0){
        x= (-b + sqrt(D) )/(2*a);
        y= (-b - sqrt(D) )/(2*a);
        printf("The roots of the equation are:%lf,%lf\n",x,y);
        if(D==0)
            printf("The roots are equal");
    }
}
