#include <stdio.h>
int main()
{
    int a;
    long int S1,S2,S3;                       //Program only for 3 digit number.
    printf("Enter a three digit number =");  //Please enter 3 digit number only.
    scanf("%d",&a);                          //Asking user for to give a 3 digit number.
    S1=a*(a+1)/2;                            //S1 = sum upto n numbers.
    S2=a*(a+1)*(2*a+1)/6;                    //S2 = sum of squares upto n numbers.
    S3=a%10;                                 //using percentile to get remainder.
    a=a/10;
    S3+=a%10;
    a=a/10;
    S3+=a%10;                                //S3 is the sum of digits in the number
    printf("S1 = %d\n",S1);
    printf("S2 = %d\n",S2);
    printf("S3 = %d",S3);                   //showing all S1,S2,S3
    return 0;
}
