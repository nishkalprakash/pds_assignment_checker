/*
PRANJAL SINGH
Roll:21EC10051
Electronics and Electrical Communication engineering
codeblocks
Assignment class:6
*/
#include<stdio.h>
int main()
{
    int t;
    float a,b,d,u;
    printf("Enter value of initial position :- ");
    scanf("%f",&a);
    printf("\n");
     printf("Enter value of initial velocity :- ");
    scanf("%f",&u);
    printf("\n");
    printf("Enter value of acceleration:- ");
    scanf("%f",&b);
    printf("\n");
    printf("Enter time:- ");
    scanf("%d",&t);
    printf("\n");

    d = 0.5*b*t*t + a + u*t;

    printf("Final distance is :- %f",d);


}
