#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int n,k=1;
    float x,x1,e;
    printf("Enter the value of x\n");
    scanf("%f",&x);
    printf("Enter the value of  tolerance limit\n");
    scanf("%f",&e);
    printf("Enter the maximum number of iterations\n");
    scanf("%d",&n);
    x1=x-(pow(x,3)-25)/(3*pow(x,2));
    while(x-x1>e && k<n)
    {
        printf("%d %f %f %f\n",k,x,x1,x-x1);
        x=x1;
        x1=x-(pow(x,3)-25)/(3*pow(x,2));
        k++;
    }
    printf("square root=%f",x1);
    return 0;
}
