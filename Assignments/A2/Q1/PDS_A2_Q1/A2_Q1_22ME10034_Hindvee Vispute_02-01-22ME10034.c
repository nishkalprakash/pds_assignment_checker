#include<stdio.h>

int main(){

int n, n1, n2, n3, s1, s2, s3; /*declaring variable types*/
printf("Enter an inger\n"); /*getting value of n*/
scanf("%d", &n);
s1 = n*(n+1)/2;

s2 = n*(n+1)*((2*n)+1)/6;

n1 = n%10; //calculating the value of digit at ones place
n2 = (n%100 - n1)/10; //calculating the value of digit at tens place
n3 = (n - n2)/100; //calculating the value of digit at hundreds place
s3 = n1 + n2 + n3;
printf("Value of s1 is %d\n", s1); /*printing values of s1, s2, s3*/
printf("Value of s2 is %d\n", s2);
printf("Value of s3 is %d\n", s3);

return 0;
}
