/*
  Shramitha Boligarla
   Roll no: 21ME10024
   Section 3
   Assignment 4- Question 3
*/

#include <stdio.h>
void CombinationRepUntil(int chosen[], int arr[],
                    int index, int l, int start, int end) //a[]= array of elements
                                                          //l= length
{

    if (index == l)
    {
        for (int i = 0; i < l; i++)
            printf("%d ", arr[chosen[i]]);
        printf("\n");
        return;
    }

    // Choosing elements(with repetition)
    // and recur
    for (int i = start; i <= end; i++)
    {
        chosen[index] = i;
       CombinationRepUntil(chosen, arr, index + 1,
                                               l, i, end);
    }
    return;
}


void CombinationRepetition(int arr[], int n, int l)
{

    int chosen[l+1];

    // Call the recursive function
   CombinationRepUntil(chosen, arr, 0, l, 0, n-1);
}


int main()
{
    int arr[] = {5, 7, 12, 3}; //Array of elements
    int n = sizeof(arr)/sizeof(arr[0]);
    int l = 3; //"l"=length
    CombinationRepetition(arr, n, l);
    return 0;
}

