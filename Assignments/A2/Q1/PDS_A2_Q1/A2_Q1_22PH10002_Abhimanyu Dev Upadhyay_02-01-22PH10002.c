#include <stdio.h>

int main(){
    //Taking input
    int n;                  // Declaring variable n to store input integer
    scanf("%d", &n);        // scanning the input number and storing in variable n

    //Defining output variables
    int s1, s3;             // Declaring variable s1 , s3 as integer variables
    long int s2;            // Declaring variable s2 as a long variable

    // Calculation of s1 and s2
    // s1 and s2 are calculated using basic arithmetic formulae
    s1 = n*(n+1)/2;             // Sum of numbers up to n
    s2 = n*(n+1)*(2*n +1)/6;    // Sum of squares of numbers up to n

    //Calculation of s3
    //Writing code to separate all the 3 digits into 3 different variables
    int a,b,c;          // Declaring variables to store the 3 digits
    a = n%10;           // Storing units digit as n%10 gives the remainder which is  the unit digit
    n = n/10;           // Dividing n by 10 and storing that data
                    // We store it as an integer because as we no longer need the unit digit which would go into the decimal place and hence can be rejected
    b = n%10;           // Storing tens digit using similar approach as units place
    c = n/10;           // Storing hundreds digit as now n/10 causes the tens digit to go into the decimal place and be discarded
                    // Repeating n = n/10 would provide the hundreds digit and storing one digit in variable c will be a redundant line of code
                    // Hence we can directly store the hundreds digit as an integer in variable c
    s3 = a + b + c;     // summing up the digits into variable s3

    //Printing
    printf("S1 = %d\nS2 = %ld\nS3 = %d", s1, s2, s3);             // printing variables s1, s2, s3 according to the output format
    return 0;
}
