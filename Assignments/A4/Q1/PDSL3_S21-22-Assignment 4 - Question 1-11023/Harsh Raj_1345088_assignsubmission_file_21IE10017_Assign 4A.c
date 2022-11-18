#include <stdio.h>

/*  Name : Harsh Raj
    Roll : 21IE10017  */

void subsets(int ar[], int data[], int front, int rear, int start, int l)           /* Recursive Function  */
{
    if (start == l)
    {
        for (int j=0; j<l; j++)
            printf("%d ", data[j]);
        printf("\n");
        return;
    }

    for (int i=front; i<=rear && rear+1 >= l-start; i++)                             /* Trying various Combinations */
    {
        data[start] = ar[i];                                                         /* Replacing Start */
        subsets(ar, data, 0, rear, start+1, l);
    }
}

void combinations(int ar[], int n, int l)                                             /* Main Function  */
{
    int data[l];

    subsets(ar, data, 0, n-1, 0, l);
}

int main()
{

    int l,n,j;

    printf("enter number of elements in the array: ");                      /* Taking the no. of elements */
    scanf("%d",&n);

    int ar[n];

    printf("enter the elements of the array:\n");                           /* Taking the elements  */
    for(j=0;j<n;j++)
        scanf("%d",&ar[j]);

    printf("enter length of Sub arrays : ");                                /* Taking the length  */
    scanf("%d",&l);

    combinations(ar, n, l);                                                 /* Calling the function  */
}
