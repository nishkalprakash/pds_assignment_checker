#include <stdio.h>//header files
int main()
{
    int n,S1,S3,d1,d2,d3;//extra variables for extracting each digit
    long int S2;

    printf("Enter an integer");//taking input
    scanf("%d",&n);
    S1=(n*(n+1))/2;//formula for summation of first n natural numbers
    S2=(n*(n+1)*((2*n)+1))/6;//formula of summation of squares of first n natural numbers
    d1=n%10;//last digit
    n=n/10;
    d2=n%10;//second digit
    n=n/10;
    d3=n%10;//first digit
    S3=d1+d2+d3;//computing the sum of digits
    printf("S1 = %d\n",S1);
    printf("S2 =%d\n",S2);
    printf("S3 =%d\n",S3);//printing part done
    return 0;


}

