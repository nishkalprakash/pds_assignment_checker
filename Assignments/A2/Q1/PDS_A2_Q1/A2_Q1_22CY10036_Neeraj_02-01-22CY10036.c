#include<stdio.h>
    int main(){
    int n, S1, a, b ,c,S3;
    long S2;
    printf("Enter an Integer:");
    scanf("%d",&n);
    S1 = n*(n+1)/2;
    S2 = n*(n+1)*(2*n+1)/6;
    a = n%10;
    b = n%100/10;
    c = n%1000/100;
    S3 = a + b +c;

    printf("Sum of Series 1 is %d\n",S1);
    printf("Sum of Series 2 is %d\n",S2);
    printf("Sum of Series 3 is %d\n",S3);
    return 0;

    }
