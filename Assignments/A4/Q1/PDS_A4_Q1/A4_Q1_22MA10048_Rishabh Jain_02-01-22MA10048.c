#include <stdio.h>


int main()
{
    int n,S1,S3;
    long S2;
    int units_digit,tens_digit,hundreds_digit;
    printf("enter a number:");
    scanf("%d",&n);

    S1=(n*(n+1))/2;    /*formula for sum of n consecutive integers*/
    S2=(n*(n+1)*(2*n+1))/6;  /*formula for sum of squares of n consecutive integers*/

    units_digit=n%10;  /*remainder on division by 10 gives units digit*/
    tens_digit=((n%100)-(n%10))/10;  /*remainder on division by 100 gives last 2 digits */
    hundreds_digit=(n-(n%100))/100;  /*last 2 digits subtracted from number and divided by 100 to give hundreds digit*/
    S3=units_digit + tens_digit + hundreds_digit;
    printf("S1=%d\nS2=%d\nS3=%d\n",S1,S2,S3);
    return 0;

}
