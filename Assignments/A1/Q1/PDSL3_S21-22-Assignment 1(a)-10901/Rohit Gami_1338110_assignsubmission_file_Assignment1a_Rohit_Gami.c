#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,u,alpha;
    float t,d;
    printf("Enter the values of a, u, alpha in order\n");
    scanf("%d%d%d",&a,&u,&alpha);
    printf("Enter the time\n");
    scanf("%f",&t);
    d= a+u*t+0.5*alpha*t*t;
    printf("The distance traveled after time %f is %f ",t,d);
    return 0;
}
