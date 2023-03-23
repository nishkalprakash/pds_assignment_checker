#include <stdio.h>

int main()
{
    int n , S1 , S2 , S3 , d1,d2,d3 ;
    printf("Enter A 3 digit number :");
    scanf("%d", &n);/*Reading the input*/
    S1= n*(n+1)/2;/*summation of natural numbers until n */
    S2= n*(n+1)*((2*n)+1)/6;/*summation of squares of natural numbers until n */
    d1= n%10;/*d1 is units digit */
    d2= n/10;/*here d2 gives tens and hundreds digit together */
    d2= d2%10;/*d2 takes the value of tens digit */
    d3= n/100;/*d3 takes the hundreds digit*/
    S3 = d1+d2+d3;
    printf("S1 : %d\n", S1);
    printf("S2 : %d\n", S2);
    printf("S3 : %d\n", S3);
    return 0 ;


}
