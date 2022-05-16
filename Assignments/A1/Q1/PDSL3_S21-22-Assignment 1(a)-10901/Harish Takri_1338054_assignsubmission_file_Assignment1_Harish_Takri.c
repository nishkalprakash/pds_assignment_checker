/*
Name - Harish Takri
Dept - Chemistry
Roll no - 21CY10016
Package - Code Blocks
Operating System - Windows
*/
#include<stdio.h>
#include<math.h>
int main()

{
    printf("Calculate the Distance from origin \n");
    float a,u,t,d,x;
    float m;
    printf("Enter the X-coordinate of initial position  \n");
    scanf("%f",&a);
    printf("Enter the initial speed... \n");
    scanf("%f",&u);
    printf("Enter the acceleration \n");
    scanf("%f",&x);
    printf("Enter the Time travelled \n");
    scanf("%f",&t);
    m=(u*t)+((x*t*t)/2);
    d=a+m;
    printf("The Distance from Origin is %f \n",d);
    return 0;

}
