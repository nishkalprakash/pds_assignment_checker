/*
Name: Anindita Malviya
Dept:MI
Roll no. : 21MI33004
Package : Code Blocks
Question 2
*/

#include <stdio.h>
#include <stdlib.h>

int max_array(int R[],int m);
void sort(int R[],int m,int r1, int r2);

int main()
{
    int n;
    printf("Enter the number of array elements: ");              //Prompting user for array
    scanf("%d",&n);
    int A[n];
    printf("Enter the array elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&A[i]);
    }
    int bins;
    printf("Enter the number of bins: ");              // Prompting user to get no. of bins
    scanf("%d",&bins);

    int Max = max_array(A,n);                    // Finding Maximum element in the array to find ranges of the bins

    int Range[bins];
    Range[0] = 1;
    for (int i = 1; i <= bins; i++)
    {
        Range[i] = (i)*Max/bins;
        printf("bin %d -> ",i);
        sort(A,n,Range[i-1]+1, Range[i]);       // Sorting in respective bins
    }


}

int max_array(int R[],int m)      //Function to find max
{
    int max = R[0];

    for(int i = 0; i < m; i++)
    {
        if (max <= R[i])
        {
            max = R[i];
        }
    }
    return max;
}

void sort(int R[],int m,int r1, int r2)        //Sorting elements from max array into bin of range r1 - r2
{
    int count=0;
    int S[m];
    for(int i = 0; i < m; i++)
    {

        if (R[i] > r1 && R[i] <= r2)
        {
            count++;
            S[i] = R[i];                   //Making another array and storing elements if belong in the r1 - r2 range
        }
        else
        {
            S[i] = 1000000;               // If it doesn't contain, 1000000 is stored in place of an element
        }
    }
    int N[count];
    for (int i = 0; i < m; i++)
    {
     for (int j = 0; j < count; j++)
    {
        if (S[i] != 1000000)                 //Changing dimension of S array by eliminating 10000000 elements
        {
            N[j] = S[i];                     // New array containing only specific elements
        }
    }
    }
    for (int j = 0; j < count; j++)
    {
    printf("%d, ",N[j]);
    }
    printf("In range %d - %d  ",r1,r2);
     printf( "Number of elements in bin: %d\n",count);
}
