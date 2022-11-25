// a program to evaluate the value of the speed of light and print the evaluated value //
#include<stdio.h>
#include<math.h>
int main()
{
float mu,epsiln,c;
printf("please enter the value of mu-");
scanf("%f",&mu);//read mu
printf("please enter the value of epsiln-");
scanf("%f",&epsiln);//read epsiln
c=1/sqrt(mu*epsiln);
printf("the evaluated value of speed of light is %f\n",c);//print the value of speed of light 
return 0;
}
