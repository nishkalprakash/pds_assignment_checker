#include<stdio.h>
#define N 100

int main()
{
    int n, i, j, t, a[N];
    //n=no. of terms; a[N]= array to store elements

    scanf("%d", &n);

    /* return error if n>100*/

    if(n>100)
        {
        printf("Error: n > 100");
        exit(1);
         }

    /* storing nos. in array*/

    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    /* printing original array */

    printf("\nOriginal Array:");
    for(i=0; i<n; i++)
    {
        printf("%d ", a[i]);

    }

    /*logic: if a negative no.is encounter,
    it then swaps place with the prev element.
    This process is carried out n no. of times
    (outer loop running n times)*/

    for(j=0; j<n; j++)
    {

        for(i=1; i<n; i++)
        {
            if(a[i]==0)
                continue;
            if(a[i]<0)
            {
                t = a[i-1];
                a[i-1]=a[i];
                a[i]=t;
            }

        }
    }

    /* printing rearranged array*/

    printf("\nRearranged Array:");
    for(i=0; i<n; i++)
    {
        printf("%d ", a[i]);

    }
    return 0;
}
