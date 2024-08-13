#include<stdio.h>
int main()
{
//code creator-mohd zaid
//roll no 24NA10041
//scanning an integer,finding sum of first n natural numbers and finding the sum of squares// 
//ASSUMING 100<=n<=999,n is a 3digit integer//
     int n,S1,S2,S3,x,y,z;
    
     scanf("%d",&n);
    S1=(n*(n+1))/2;
    S2=(n*(n+1)*(2*n+1))/6;
    S3=n/100+n%10+(n%100)/10;
    printf("%d,%d,%d",S1,S2,S3);
    return 0;
 }
