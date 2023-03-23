/*Write a program to:
Read an integer from the user in an integer variable n.
Compute the sum of the following series in an integer variable S1:
Compute the sum of the following series in a long variable S2:
Compute the sum of the digits of n in an integer variable S3.
Print the value of S1, S2 and S3 as the output.
(Assume: [100 <= n <= 999] i.e. n is a 3-digit number.)
n(n+1)(2n+1)/6
*/
#include <stdio.h>
int main(){
    int n,S1=0,S3=0;
    double S2=0;
    printf("Enter the value of n(should be a 3 digit number) : ");
    scanf("%d",&n);
    S1 = (n*(n+1))/2;
    S2 = (n*(n+1)*(2*n+1))/6.0;
    printf("S1 = %d\n",S1);
    printf("S2 = %.0lf\n",S2);
    S3 = (n%10)+((n/10)%10)+(((n/10)/10)%10);
    printf("S3 = %d",S3);
    return 0;
}
