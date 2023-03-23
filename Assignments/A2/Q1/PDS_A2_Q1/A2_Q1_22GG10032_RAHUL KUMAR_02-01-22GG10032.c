#include<stdio.h>
int main()
{
    int x, y,z;
    printf("enter x");
    printf("enter y");
    printf("enter Z");
    scanf("%d",&x);
    scanf("%d",&y);
    scanf("%d",&z);
    int n=((100*x)+(10*y)+z);
    printf("the value of n is %d",n);

    int S1=(n*(n+1))/2;
    printf("the value of S1 is %d",S1);
    int S2=(n*(n+1)*(2*n+1))/6;
    printf("the value of S2 is %d",S2);
    int S3=x+y+z;
    printf("the value of S3 is %d",S3);
    return 0;
}
