/*
Name: Sadique Amin
Roll Number: 21CE30027
Department: Civil Engineering
Package used: <stdio.h>
Assignment Class: 6
*/

#include <stdio.h>
int arr[100];       // Declaring a Global Variable

void CombinationRepetitionUtil(int chosen[], int arr[], int index, int r, int start, int end);
void CombinationRepetition(int arr[], int n, int r);

void CombinationRepetitionUtil(int chosen[], int arr[], int index, int r, int start, int end)
//Prints the possible combination with repetition
{
    if (index == r)
    {
        for (int i = 0; i < r; i++)
            printf("%d ", arr[chosen[i]]);
        printf("\n");
        return;
    }
 
    for (int i = start; i <= end; i++)
    {
        chosen[index] = i;
        CombinationRepetitionUtil(chosen, arr, index + 1,r, i, end);
    }
    return;
}
void CombinationRepetition(int arr[], int n, int r)
{
    // Allocate memory
    int chosen[r+1];
 
    // Call the recursive function
    CombinationRepetitionUtil(chosen, arr, 0, r, 0, n-1);
}

int main()
{
    int r,n;
    printf("Enter the length of required combination of array elements:");
    scanf("%d",&r);
    printf("Enter the length of array:");
    scanf("%d",&n);
    printf("Enter the array elements:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    CombinationRepetition(arr,n,r);
}