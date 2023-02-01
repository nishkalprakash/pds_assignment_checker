#include <stdio.h>


float sum(float n) {

if(n==1) {
return 1;
}

float sumnm1 = sum(n-1);
float sumn ;

sumn = sumnm1 + (1.0/n);
float x = sumn;

return x;
}


int main() {
float n;

printf("enter the value of n :");
scanf("%f",&n);

sum(n);
printf("%f \n",sum(n));
return 0;
}
