/*
  Shramitha Boligarla
   Roll no: 21ME10024
   Section 3
   Assignment 4- Question 3
*/

#include <stdio.h>


void myHostelChangingTrips(int chosen[], int arr[],
                    int index, int k, int start, int end)
{

    if (index == k)
    {
        for (int i = 0; i < k; i++)
            printf("%d ", arr[chosen[i]]);
        printf("\n");
        return;
    }

    // Choosing elements one by one(with repetition)
    // and recur
    for (int i = start; i <= end; i++)
    {
        chosen[index] = i;
       myHostelChangingTrips(chosen, arr, index + 1,
                                               k, i, end);
    }
    return;
}


void CombinationRepetition(int arr[], int n, int k)
{

    int chosen[k+1];

    // Call the recursive function
   myHostelChangingTrips(chosen, arr, 0, k, 0, n-1);
}


int main()
{
    int arr[] = {5, 7, 12, 3};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 3;
    CombinationRepetition(arr, n, k);
    return 0;
}
