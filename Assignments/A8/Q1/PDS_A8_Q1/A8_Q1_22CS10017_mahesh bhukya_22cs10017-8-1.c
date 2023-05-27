#include<stdio.h>

struct complex{
int real;
float img;


}z1,z2,z3,result;
int main()
{
    float x;

    printf("enter 1st complex no\n");
    printf("enter real part : ");
    scanf("%d", &z1.real);
    printf("enter img no : ");
    scanf("%f", &z1.img);

    printf("enter 2nd complex no\n");
    printf("enter real part : ");
    scanf("%d", &z2.real);
    printf("enter img no : ");
    scanf("%f", &z2.img);

    printf("enter 3rd complex no\n");
    printf("enter real part : ");
    scanf("%d", &z3.real);
    printf("enter img no : ");
    scanf("%f", &z3.img);

    result.real=z1.real+z2.real;
    result.img=z1.img+z2.img;
    printf("\n sum of complex no is : %d+i%f", result.real,result.img);



    result.real=z1.real-z2.real;
    result.img=z1.img-z2.img;
    printf("\n substraction of complex no is : %d-i%f", result.real,result.img);


    result.real=z1.real*z2.real;
    result.img=z1.img*z2.img;
    printf("\n multiplication of complex no is : %d*i%f", result.real,result.img);


    x=((z1.real*z2.real)+i(z1.real*z2.img))/sqrt((z2.real*z2.real)+(z2.img*z2.img));
    printf("value of x is : %f",x);



    return 0;

}

