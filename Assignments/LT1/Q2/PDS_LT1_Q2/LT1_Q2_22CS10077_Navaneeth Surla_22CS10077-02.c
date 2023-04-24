/*
Section 2
Roll No : 22CS10077
Name: Surla Navaneeth
Problem no : 2
*/
#include<stdio.h>
int main()
{
    int N,a1,a2,a3,a4,A1,A2,A3,A4,r,R,R1,D,D1,m1,m2,n1;
    printf("Enter the integer : ");
    scanf("%d",&N);
    r = N%2;
    a1 = N/10000;
    A1 = N%10000;
    a2 = A1/1000;
    A2 = A1%1000;
    a3 = A2/100;
    A3 = A2%100;
    a4 = A3/10;
    A4 = A3%10;
    m1 = N/100;
    m2 = N/10;
    n1 = N/1000;
    R = A4*1000 + a4*100 + a3*10 + a2;
    R1 = A4*10000 + a4*1000 + a3*100 + a2*10 + a1;
    D = R-N;
    D1 = N-R1;
    if ( r == 0 && a1 == 0 && a2 != 0)
    {
        printf("Most significant digits to least significant digits:\n");
        printf("%d,%d,%d,%d\n",a2,m1,m2,N);
        printf("Reverse number = %d\n",R);
        printf("Difference between Reverse and original number = %d",D);
    }
    else if ( r == 1 && a1 == 0 && a2 != 0)
    {
        printf("Least significant digits to most significant digits:\n");
        printf("%d,%d,%d,%d\n",N,A2,A3,A4);
        printf("Reverse number = %d\n",R);
        printf("Difference between Reverse and original number = %d",D);
    }
    else if ( r == 1 && a1 ==0 && a2 == 0 && a3 == 0 && a4 == 0)
    {
        printf("Least significant digits to most significant digits:\n");
        printf("%d\n",N);
        printf("Reverse number = %d\n",N);
        printf("Difference between Reverse and original number = 0");
    }
    else if ( r == 0 && a1 != 0)
    {
        printf("Most significant digits to least significant digits:\n");
        printf("%d %d %d %d %d\n",a1,n1,m1,m2,N);
        printf("Reverse number = %d\n",R1);
        printf("Difference between Reverse and original number = %d",D1);
    }



}
