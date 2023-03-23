
#include<stdio.h>
int main(){

    int n , S1 , S3;                //  declaration of  integer n, S1 and S3.    also n is defined as a three digit integer.
    long int S2 ;                    // declaration of long integer S2.
    printf("enter the value of n\n");

    scanf("%d", &n);                 //  reading an integer from user in integer variable n.

    S1 = n*(n + 1)/2 ;               //  we know that (1 + 2 + 3 + .......... + n) = n*(n + 1)/2   ,   so defining S1 as sum of series.

    S2 = n*(n + 1)*(2*n + 1)/6 ;      //  sum of squares of first n integers in n*(n + 1)*(2*n +1)/6 ;

    int a , b , c , d  ;

    a = n%10 ;
    b = n/10 ;

    c = b%10 ;
    d = b/10 ;

    S3 = a + c + d;

    printf("Value of S1 is: %d \n", S1);                   // printing the value of S1, S2 and S3.

    printf("Value of S2 is: %ld \n", S2);

    printf("Value of S3 is: %d \n", S3);

    return 0;




}
