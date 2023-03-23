#include<stdio.h>
int main()//starting of program
{
    int n,S1,S2,S3;
    scanf("%d", &n);
    S1=(n*(n+1))/2;//we know the formula of sum of first natural numbers
    S2=((n*(n+1)*(2*n+1)))/6//we know the formula of sum of square of square of natural numbers
    S3=((n/100)+((n%100)/10)+((n%100)%10));//adding the digits by taking modulus by 100
    printf("S1 is %d\n",S1);
    printf("S2 is %d\n",S2);
    printf("S3 is %d\n",S3);
    return 0;//end of program

}
