#include<stdio.h>
int main()
{
int a, S4, S5, S6, S7, S8;
printf("Write the natural number sum till which you want the sum to be evaluated \n");    //
scanf("%d", &a);
printf("S1 = %d\n", ((a+1)*a)/2, "\n");
printf("S2 = %d\n", ((2*a+1)*(a+1)*a)/6);
S4 = a%10;
S5 = a/10;
S6 = S5%10;
S7 = a/100;
S8 = S7;

printf("The value of S3 is %d", S4+S6+S8);



return 0;
}
