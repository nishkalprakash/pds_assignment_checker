#include<stdio.h>
#include<stdlib.h>

int sum(int *a, int n)
{
    int val = a[n-1];
    if(n==1)
    {
        return val;
    }
    n--;
    return val + sum(a, n);
}

float mean(int *a, int n)
{
    float temp = n;
    //Here we have used indirect recursion
    return sum(a, n)/temp;
}

int main()
{
    int n;
    scanf("%d", &n);

    int *a;
    a = (int*)malloc(n*sizeof(int));

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Mean : %0.2f ", mean(a, n));

    return0;
}
