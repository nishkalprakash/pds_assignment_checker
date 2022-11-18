/*
Name : Souvik Mandal
Roll No. : 21MF10036
Section : 3 
Group : 5
Department : Manufacturing Science And ENGG.
Package : VS Code
Operating System : Windows
*/


#include <stdio.h>
void printSubArrays(int arr[], int start, int end, int size)
{

    // Stop if we have reached the end of the array
    if (end == size)
        return;

    // Increment the end point and start from 0
    else if (start > end)
        printSubArrays(arr, 0, end + 1, size);

    // Print the subarray and increment the starting point
    else {
        printf("[");
        for (int i = start; i < end; i++)
            printf("%d, ", arr[i]);

        // cout << arr[i] << ", ";
        printf("%d]\n", arr[end]);

        // cout << arr[end] << "]" << endl;
        printSubArrays(arr, start + 1, end, size);
    }
    return;
}

int main()
{
    int l;
    printf("Enter the number of element:");
    scanf("%d",&l);
    int a[l];
    printf("Enter the elements:");
    for (int i=0; i<l; i++)
    {
        scanf("%d",&a[i]);
    }
    int n = sizeof(a) / sizeof(a[0]);
    printSubArrays(a, 0, 0, n);
}