
/*
*Section 2
*Roll no- 22AE10042
*Name- Ullash Chandra Modi
*Assignment no- 1
*Description-
*/
#include <stdio.h>
#define N 100
int main ()
{
    int n,i,j,k,a;
    int A[N];
    printf("Enter the number of elements you want to enter in array : ");
    scanf("%d",&n);
    if (n>N)
    {
        printf("Error: n>100");
    }
    else
    {
        for (i=0;i<n;i++)
        {
            scanf("%d",&A[i]);
        }

        printf("Original Array : ");
        for (i=0;i<n;i++)
        {
            printf("%d ",A[i]);
        }

        j=0;
        for (i=0;i<n;i++)
        {
           if (A[i]<0)
           {
               a=A[i];
               for (k=i;k>j;k--)
               {
                   A[k]=A[k-1];
               }
               A[j]=a;
               j++;
           }
        }

        printf("\nRearranged Array : ");
        for (i=0;i<n;i++)
        {
            printf("%d ",A[i]);
        }
    }
    return 0;
}
