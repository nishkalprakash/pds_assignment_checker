#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

int main()
{
    int n,k;
    float D;
    int i,j;
    int x=0;

    printf("Enter the value of n: ");
    scanf("%d",&n);
    printf("Enter the value of k: ");
    scanf("%d",&k);

    for(i=0,x=0;i<k;i++)
    {
        for(j=0;j<n;j++)
    {
        x=x+ (rand() & 1? -1:1);
    }

    D=D+x*x;

    }

    D=D/k;
    D=pow(D,0.5);

    printf("%f",D);


}