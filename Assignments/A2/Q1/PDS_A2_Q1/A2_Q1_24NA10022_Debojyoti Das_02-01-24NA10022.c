//program to calculate sum of series
//code creater: Debojyoti Das
//roll no: 24NA10022

#include<stdio.h>
int main()
   {
     int n;
     long S1,S2,S3,a,b;
     printf("enter any three digit number:");
     scanf("%d", &n);
     S1=n*(n+1)/2;
     S2=n*(n+1)*(2*n+1)/6;
     a=n/100;
     n=n-(a*100);
     b=n/10;
     n=n-(b*10);
     S3=a+b+n;
     printf("S1=%ld\n",S1);
     printf("S2=%ld\n",S2);
     printf("S3=%ld\n",S3);
    }
