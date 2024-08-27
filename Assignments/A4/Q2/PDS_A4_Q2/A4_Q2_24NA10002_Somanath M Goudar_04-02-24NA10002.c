#include <stdio.h>
int main() {
double max1, max2 = 0.0, next;
printf("Enter positive numbers only, end with a negative number:");
scanf("%lf",&next);
while (next>0) {
if(next>max1) max1 = next;
if(next>max2 && next<max1) max2 = next;
if(next=0) printf("Value not entered");
scanf("%lf",&next);
}
printf("The laargest number is %lf\n" ,max1);
printf("The second largest number is %lf\n",max2);
return 0;
}
