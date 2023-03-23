#include <stdio.h>
int main() {
int n, d, e, f, g;
printf("n=");
scanf("%d", &n);
printf(" S1 = %d", (n * (n+1) / 2));// this is the formula for calculating the sum of n natural numbers
printf(" S2 = %d", (n * (n+1) * ((2*n)+1) / 6)); // this is the formula for calculating the sum of square of n natural numbers
d = n / 100;
e = (n - (d * 100));
f = e / 10;
g = ( e - (f * 10));


printf(" S3 = %d", d + f + g);
return 0;
}

// additional variables  d,e,f,g were taken so as to biuld the logic for sum of digit of n
// all the values of n are 3 digits [100 <= n <= 999]
