#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    srand(time(NULL));
    int n,k;
    printf("n = ");
    scanf("%d",&n);
    printf("k = ");
    scanf("%d",&k);
    float D=0;
    for(int i=1;i<=k;i++)
    {
        int d=0;
        for(int j=1;j<=n;j++)
        {
            int p;
            p=(rand()%2);
            if(p==0) p--;
            d+=p;
        }
        D+=d*d;
    }
    float De;
    De=sqrt(D/k);
    printf("%f",De);
    return 0;
}