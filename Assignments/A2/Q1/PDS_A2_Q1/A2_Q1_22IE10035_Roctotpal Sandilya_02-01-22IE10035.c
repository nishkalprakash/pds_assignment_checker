#include<stdio.h>

int main(){
int n;
scanf("%d",&n);
int s1 = n*(n+1)/2 ; // getting sum of 1st n numbers
int s2 = n*(n+1)*(2*n+1)/6 ; // getting sum of square of 1st n numbers
int d1 = n%10; // getting 1st digit
int d2 = ((n-d1)/10)%10; // getting 2nd digit
int d3 = (n-d1-10*d2)/100;// getting 3rd digit
int s3 = d1+d2+d3;// sum of digits
printf("S1 = %d ", s1);
printf("S2 = %d ", s2);
printf("S3 = %d ", s3);

return 0;
}
