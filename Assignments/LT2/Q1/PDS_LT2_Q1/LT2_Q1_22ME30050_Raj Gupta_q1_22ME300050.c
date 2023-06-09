#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float mean(int *a,int n)
{

    return mean(int *a,int n/2)+;
}

int main()
{
    int n;
    float m;
    scanf("%d",&n);
    int* arr;
    arr=(int*)calloc(n,sizeof(int));
    for (int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    m=mean(arr,n);

    printf("\nList = [ ");

    for (int i=0;i<n;i++)
    {
        printf("%d, ",&arr[i]);
    }

    printf("]");

    printf("\nMean = %.2f",m);




}
