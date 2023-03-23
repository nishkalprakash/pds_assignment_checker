#include<stdio.h>

int main(){
int n, S1, S3;
long S2;
printf("Enter the integer");
scanf("%d", &n);
S1 = n * (n+1) / 2;
S2 = (n) * (n + 1) * (2*n + 1)/6;
S3 = (n % 10) + (n % 100 - n % 10)/10 + (n - n %100)/100;
printf(" S1 = %d\n S2 = %lu\n S3 = %d\n", S1, S2, S3);
return 0;
}
