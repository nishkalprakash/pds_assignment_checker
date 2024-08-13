//Program to compute the sum of the series
//Code Creator: Arjun Agarwal
//Roll No: 24NA10018
#include <stdio.h>

int main(){

int n,x,y,z;

printf("type an 3 digit integer\n");
scanf("%d",&n);

int S1= n*(n+1)/2;
int S2= n*(n+1)*(2*n+1)/6;
x=n%1000;
z=n%100;
y=n%10;
int S3=x+y+z;

printf("S1=%d\n", S1);//value of S1
printf("S2=%d\n", S2);//value of S2
printf("S3=%d\n", S3);//value of S3

return 0;
}
