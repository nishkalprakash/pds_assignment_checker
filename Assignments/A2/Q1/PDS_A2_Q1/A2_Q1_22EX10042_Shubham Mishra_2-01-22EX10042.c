#include<stdio.h>
int main()
 {
     int n,s1,s3;
     long s2;
     printf("the value of n is");
     scanf("%d",&n);
     s1 = n*(n+1)/2 ;
     s2 = n*(n+1)*(2*n+1)/6;
     s3 = (n%10)+(n/10%10)+(n/100%10);
     printf("the value of s1 ,s2, s3:%d,%ld,%d",s1,s2,s3);
     return 0;
 }
