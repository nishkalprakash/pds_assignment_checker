// a program to evaluate the total distance travelled by a ball when it touches the ground for the nth time//
#include<stdio.h>
#include<math.h>
int main()
{
float Y,n,d;
printf("enter the height from which the ball is released-");
scanf("%f",&Y);//read the value of height
printf("if it touches the ground for nth time ,write n-");
scanf("%f",&n);// read the value of n
d=Y+(2*Y*(1-pow(0.25,n-1))/3);
printf("the total distance travelled after nth time is %f\n",d);//print the total distance
return 0;
}
