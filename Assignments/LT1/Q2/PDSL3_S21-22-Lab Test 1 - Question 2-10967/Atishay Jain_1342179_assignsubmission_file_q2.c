#include<stdio.h>
main()
{
float a[100];
int i=1,k,j;
    float e;
    printf("enter a no.");
    scanf("%f",&a[0]);
    printf("enter e=");
    scanf("%f",&e);
    printf("max. iteration=");
    scanf("%d",&k);
    do
    {
        a[i]=a[i-1]-(a[i-1]*a[i-1]*a[i-1]-25)/(3*a[i-1]*a[i-1]);
        i++;
    }
    while((a[i-2]-a[i-1])>e&&(i-1)<k);
    printf("ITERATION  X0  x  error\n");
    for(j=0;j<i;j++)
    {

        printf( "\n %d         %f  %f   %f",j+1,a[j],a[j+1],a[j]-a[j+1]);
    }
    printf("\nthe square root is %d",a[i-1]);
    getch();
}
