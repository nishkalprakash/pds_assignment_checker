#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int a,u,alpha;
    float t;
    printf("Enter the value of a, u, alpha in order: ");
    scanf("%d%d%d",&a,&u,&alpha);
    printf("Enter the time = ");
    scanf("%f",&t);
    printf("\n");
    printf("Distance = %f",a+(u*t)+(0.5*alpha*t*t));
    return 0;
}
