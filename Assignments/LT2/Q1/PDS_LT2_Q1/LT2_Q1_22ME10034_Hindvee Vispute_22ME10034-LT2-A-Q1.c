/*
Hindvee Vispute
22ME10034
Section 2
lab Test 2
Q1 : Finding mean using recursive function
*/
#include<stdio.h>

//recursive function for calculating mean

float mean(int *a, int n)
{
    static float m = 0;
    static int i=0;
    if(i==n)
    {
        m = m/(float)n;

        return m;
    }
    else
    {
        m = m+a[i];
        i++;

        mean(a, n);
        }
}

int main()
{
    int i, n;
    float z; //variable declared to store mean

    int *arr;
    scanf("%d", &n);

    arr = (int *)calloc(n, sizeof(int));//dynamic analysis of array arr

    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\nList = [");
    for(i=0; i<n; i++)
    {
        if(i==n-1)
        {
            printf("%d]", arr[i]);

        }
        else
        {
            printf("%d, ", arr[i]);
        }
    }

    z = mean(arr, n);
    printf("\nMean = %f", z);
    return 0;
};


