#include <stdio.h>
#include <stdlib.h>

/*
Section 14
Roll No : 22NA30011
Name : Dipesh Goel
Assignment No : 6
Description: Merging two sorted arrays
*/

//int* Merge(int size1, int size2, int *ptr1, int *ptr2)

int main()
{
    int size1, size2, *ptr1, *ptr2;
    printf("Enter size : ");
    scanf("%d",&size1);

    int A[size1];

    printf("Enter values : ");
    for (int i=0;i<size1;i++) scanf("%d",&A[i]);

    printf("Enter size : ");
    scanf("%d",&size2);

    int B[size2];

    printf("Enter values : ");
    for (int i=0;i<size2;i++) scanf("%d",&B[i]);

    printf("A = ");
    for (int i=0;i<size1;i++) printf(" %d",A[i]);

    printf("\n");

    printf("B = ");
    for (int i=0;i<size2;i++) printf(" %d",B[i]);

    printf("\n");

    int size3=size1+size2;
    int C[size3];

    if (size1>=size2)
    {
        int k=0;
        for (int i=0;i<size1;i++)
        {
            if (i<size2)
            {
                if (A[i]<=B[i])
                {
                    C[k]=A[i];
                    C[k+1]=B[i];
                    k=k+2;
                }
            }
        }
    }
    /*else
    {
        for (int i=0;i<size2;i=i+2)
        {
            for (int j=0;j<size1,j++)
            {

            }
        }
    }


    int l1, l2;
    (size1<size2) ? l1=size1, l2=size2 : l2=size1, l1=size2;

    for (int i=0;i<l1;i++)
    {
        C[i] = A[i]<B[i] ? A[i] : B[i];
        //C[i] = A[i]>B[i] ? B[i] : A[i];
    }

    for (int i=l1;i<l2;i++)
    {
        C[i] = A[i]<B[i] ? A[i] : B[i];
        //C[i] = A[i]>B[i] ? B[i] : A[i];
    }
*/
    printf("C = ");
    for (int i=0;i<size3;i++) printf(" %d",C[i]);

}