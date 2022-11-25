#include<stdio.h>
#include<math.h>


int main()
{
double a;                                      //taking double for huge numbers
double b;
double c;                       
printf("enter value of mu and epsilon \n");
scanf("%lf %lf", &a,&b);                         
c=(1)/sqrt(a*b);

printf("%e",c);                             // to print in format: '123exyz'where e refers to power of 10




return 0;


}
