#include <stdio.h>
int main()
{
    int n,S1,S3;
    long S2;        //declaring variables
    printf("Enter the value of n(100<=n<=999):");   //Asking user for input
    scanf("%d",&n);      //Takes input from user
    S1=(n*(n+1))/2;      //Calculates sum of numbers from 1 to n
    S2=((long)n*(long)(n+1)*(long)((2*n)+1))/6;  //Calculates sum of squares of numbers from 1 to n
    S3= (n%10)+((n/10)%10)+(n/100);    //Calculates sum of digits
    printf("\nS1=%d",S1);
    printf("\nS2=%lu",S2);
    printf("\nS3=%d",S3);  //prints S1,S2 and S3
    return 0;

}
