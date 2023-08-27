#include<stdio.h>

int main() {
float num,frac_part;
int int_part;
printf("Enter your number\n");
scanf("%f",&num);
int_part = (int)num;
frac_part = num - int_part;
printf("Integral part = %d\n",int_part);
printf("Fractional part = %f\n",frac_part);
return 0;
}

