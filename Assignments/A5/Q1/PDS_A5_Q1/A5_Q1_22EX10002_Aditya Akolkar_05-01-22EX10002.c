#include<stdio.h>
#define N 100

int main()
{
    int i, j, k, l, n;
    int a[N];
    printf("Enter number n: ");
    scanf("%d", &n);

    if(n>100)
    {
        printf("Error: n > 100");
    }


    else
    {
        for(i=0; i<n; i++)
        {
            scanf("%d", &a[i]);
        }

        printf("Orignal array:");

        for(l=0; l<n; l++)
        {
            printf(" %d ", a[l]);
        }
        printf("\n");

        printf("Rearranged numbers: ");

        for(j=0; j<n; j++)
        {
            if(a[j]<0)
            {
                printf(" %d ", a[j]);
            }
        }

        for(k=0; k<n; k++)
        {
            if(a[k]>=0)
            {
                printf(" %d ", a[k]);
            }
        }
    }

}

