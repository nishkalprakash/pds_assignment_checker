#include<stdio.h>
int main(){
    int n,s1,s2,s3;
    printf("enter the number");
    scanf("%d",&n);
    s1=(n*(n+1))/2;
    s2=(n*(n+1)*(2*n+1))/6;
    s3=n%10+(n/10)%10+(n/100)%10;
    printf("S1=%d\nS2=%d\nS3=%d",s1,s2,s3);

return 0;
}
