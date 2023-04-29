/*
Section 2
Roll No. - 22CS30016
Name - Omkar Vijay Bhandare
Assignment No. - 05
Description - Rearrange array such that negatives at left and positives at right
*/
#include<stdio.h>
#define N 100
int main()
{
    int a[N],n,tras;
    scanf("%d", &n);
    if(n>100) printf("Error : n > 100");
    else
    {
        for(int i=0; i<n; i++)
        {
            scanf("%d", &a[i]);
        }
        printf("Original Array : ");
        for(int i=0; i<n; i++)
        {
            printf("%d ", a[i]);
        }
        printf("\n");
        for(int i=0; i<n; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                if(a[i]>=0 && a[j]<0)
                {
                    tras = a[j];
                    for(int k=j; k>i; k--)
                    {
                        a[k]=a[k-1];
                    }
                    a[i]=tras;
                }
            }
        }
        printf("Rearranged Array : ");
        for(int i=0; i<n; i++)
        {
            printf("%d ",a[i]);
        }
        return 0;
    }
}
