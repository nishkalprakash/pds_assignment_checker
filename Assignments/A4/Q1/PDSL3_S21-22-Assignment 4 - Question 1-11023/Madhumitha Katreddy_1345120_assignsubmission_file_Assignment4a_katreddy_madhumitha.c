#include <stdio.h>
void combirep(int chosen[], int arr[], int index, int r, int start, int end)
{
    // Since index has become r, current combination is
    // ready to be printed, print
    if (index == r)
    {
        for (int i = 0; i < r; i++)
            printf("%d ", arr[chosen[i]]);
        printf("\n");
        return;
    }

    // One by one choose all elements (without considering
    // the fact whether element is already chosen or not)
    // and recur
    for (int i = start; i <= end; i++)
    {
        chosen[index] = i;
        combirep(chosen, arr, index + 1,
                 r, i, end);
    }
    return;
}

// The main function that prints all combinations of size r
// in arr[] of size n with repetitions. This function mainly
// uses combirep()
void CombinationRepetition(int arr[], int n, int r)
{
    // creating an array of size r+1
    int chosen[r + 1];

    // Call the recursive function
    combirep(chosen, arr, 0, r, 0, n - 1);
}
int main()
{
    int l, n;
    printf("Enter the size of array : "); // entering size of array from user
    scanf("%d", &n);                      // input size of array
    int arr[n];
    printf("Enter array elements : ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]); // input array elements
    printf("Enter the length l : ");
    scanf("%d", &l);                  // input size of combinations need to taken
    CombinationRepetition(arr, n, l); // printing the possibilities
    return 0;
}






