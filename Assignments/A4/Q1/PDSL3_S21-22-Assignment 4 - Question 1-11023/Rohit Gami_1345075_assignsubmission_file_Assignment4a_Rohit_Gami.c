#include <stdio.h>
void combinationUtil(int a[], int data[], int start, int end,
                     int index, int i);

// The main function that prints all combinations of size i
// in a[] of size n. This function mainly uses combinationUtil()
void printCombination(int a[], int n, int i)
{
    // A temporary array to store all combination one by one
    int data[i];

    // Print all combination using temporary array 'data[]'
    combinationUtil(a, data, 0, n-1, 0, i);
}

/* data[] ---> Temporary array to store current combination
   start & end ---> Starting and Ending indexes in a[]
   index  ---> Current index in data[]
   i ---> Size of a combination to be printed */
void combinationUtil(int a[], int data[], int start, int end,
                     int index, int i)
{
    // Current combination
    if (index == i)
    {
        for (int j=0; j<i; j++)
            printf("%d ", data[j]);
        printf("\n");
        return;
    }
    for (int r=start; r<=end && end-r+1 >= i-index; r++)
    {
        data[index] = a[r];
        combinationUtil(a, data, r+1, end, index+1, i);
    }
}
int main()
{
    int a[] = {3,5,7,12};
    int i = 3;
    int n = sizeof(a)/sizeof(a[0]);
    printCombination(a, n, i);
}
