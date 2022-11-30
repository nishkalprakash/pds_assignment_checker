/*
Section 14
Roll No.:22AG10021
Name: Mahin Hussain
Assignment No.:4
Description: Program to print approximate root of a cubic polynomial.
*/ 

#include<stdio.h>
#include<math.h>
int x0,x1,x2,x3;
double a=-5.0,b=5.0,pa,pb,m,c,pc;
int main()
{
printf("The coeffecient should be in the range [-5,5] and coeffecient of x^3 should be non zero \n");
printf("Enter coeffecient of x^0: ");
scanf("%d",&x0);
printf("\n");
printf("Enter coeffecient of x^1: ");
scanf("%d",&x1);
printf("\n");
printf("Enter coeffecient of x^2: ");
scanf("%d",&x2);
printf("\n");
printf("Enter coeffecient of x^3: ");         //inputting the values
scanf("%d",&x3);
printf("\n");
for(int i=1;;i++)    //infinite loop which stops when answer is printed
{
pa=x3*pow(a,3)+x2*(a,2)+x1*a+x0;
pb=x3*pow(b,3)+x2*(b,2)+x1*b+x0;
m=(pb-pa)/(b-a);               //stores slope
c=(m*b-pb)/m;             //finding c
pc=x3*pow(c,3)+x2*(c,2)+x1*c+x0;
if(pc<0.001&&pc>-0.001)      //checking condition
{
printf("Root of the polynomial: %lf",c);
break;
}
else if((pa>0&&pc>0)||(pa<0&&pc<0))
a=c;
else if((pb>0&&pc>0)||(pb<0&&pc<0)) 
b=c;                         //updation as given
}                                      
return 0;
}

















