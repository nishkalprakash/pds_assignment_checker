#include<stdio.h>

int main()
{
    float a,u,alpha,t;
    printf("Enter the values of a,u,alpha in order:");
    scanf("%f %f %f", &a,&u,&alpha);
    printf("\nEnter the time:");
    scanf("%f",&t);

    float dist = a + u*t + 0.5*alpha*t*t;
    printf("Distance = %f",dist);
    return 0;
}
