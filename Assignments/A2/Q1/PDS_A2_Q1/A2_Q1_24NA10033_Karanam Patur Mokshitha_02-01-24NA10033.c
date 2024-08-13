#include<stdio.h>
#include<math.h>
int main() {
    int n,S1,S2,S3;
    printf("Enter the value of n:");
    scanf("%d",&n);
    S1=(n*((n+1)))/2;
    S2=(n*(n+1)*(2*n+1))/6;
    int x,y,z,s;
    x=n%10;
    y=n/10;
    z=y%10;
    s=y/10;
    S3=x+z+s;
    
    printf("\nThe value of S1,S2,S3 is %d,%d,%d",S1,S2,S3);
    
return 0;
}


