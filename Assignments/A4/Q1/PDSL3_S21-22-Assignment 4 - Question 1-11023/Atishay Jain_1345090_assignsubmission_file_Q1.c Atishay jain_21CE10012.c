#include <stdio.h>

/* arr[]  ---> Input Array
  chosen[] ---> Temporary array to store indices of
                   current combination
   start & end ---> Starting and Ending indexes in arr[]
   r ---> Size of a combination to be printed */
void CombinationRepetitionUtil(int chosen[], int arr[],
                    int index, int r, int start, int end)
{
    // Since index has become r, current combination is
    // ready to be printed, print
    if (index == r)// Since index has become r, current combination is ready to be printed
    {
        int i=0;
        while(i<r)
        {
            printf("%d ", arr[chosen[i]]);
            i++;
        }
        printf("\n");
        return;
    }


    for (int i = start; i <= end; i++) // One by one choose all elements (without considering the fact whether element is already chosen or not)and recur
    {
        chosen[index] = i;
        CombinationRepetitionUtil(chosen, arr, index + 1,
                                               r, i, end);
    }
    return;
}


void printallComb(int arr[], int n, int r)// The main function that prints all combinations of size r in arr[] of size n with repetitions. This function mainly uses CombinationRepetitionUtil()
{
    // Allocate memory
    int chosen[r+1];

    // Call the recursive function
    CombinationRepetitionUtil(chosen, arr, 0, r, 0, n-1);
}



int main()  // main function to take input
{

    int r,n,j;

    printf("enter number of elements in the array: ");
    scanf("%d",&n);

    int arr[n];

    printf("enter the elements of the array:\n");
    for(j=0;j<n;j++)
        scanf("%d",&arr[j]);

    printf("enter r: ");
    scanf("%d",&r);


    printallComb(arr, n, r);
}
