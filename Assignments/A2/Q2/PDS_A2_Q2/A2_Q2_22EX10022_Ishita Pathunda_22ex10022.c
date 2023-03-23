#include<stdio.h>
#include<math.h>
int main(){
    float a,b,R,T,D,Tp;
    printf("value of a:\n");
    scanf("%f\n",&a);
    printf("value of b:\n");
    scanf("%f\n",&b);
    printf("value of R:\n");
    scanf("%f\n",&R);
    printf("value of T:");
    scanf("%f\n",&T);
    printf("value of D");
    scanf("%f\n",&D);
    Tp=T*(sqrt(R*sqrt((1-a)/b)/2*D));
    printf("the value of T is:%f",Tp);
    return 0;
}


