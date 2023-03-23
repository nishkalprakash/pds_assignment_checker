#include<stdio.h>

int main()
{

 int n, S1, S3;
 int long S2;
 int q1, q2, q3;
 printf("Enter a number = \n");
 scanf("%d", &n);
 S1 = (n * (n + 1)) / 2 ;
 S2 = (n * (n + 1) * (2 * n + 1)) / 6 ;
 printf("The value of S1 is : %d \n", S1);
 printf("The value of S2 is : %ld \n", S2);
 q1 = (n%10);
 q2 = (n/10)%10;
 q3 = (n/100);
 S3 = q1 + q2 + q3;
 printf("The sum of the digits = %d \n", S3);

 return 0;

}
