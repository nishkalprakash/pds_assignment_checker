#include <stdio.h>
int main(){
    int n,s1,s2,s3=0,H,o,t1,t;
    printf("enter a three digit integer n :\n");
    scanf("%d",&n);
    s1=(n*(n+1))/2;
    s2=(n*(n+1)*(2*n+1))/6;
    H=n/100;
    o=n%10;
    t1=n%100;
    t=t1/10;
    s3=o+t+H;
    printf("S1=");
    printf("%d",s1);
    printf("\n");
    printf("S2=");
    printf("%d",s2);
    printf("\n");
    printf("S3=");
    printf("%d",s3);
    
    
    return 0;
    }

