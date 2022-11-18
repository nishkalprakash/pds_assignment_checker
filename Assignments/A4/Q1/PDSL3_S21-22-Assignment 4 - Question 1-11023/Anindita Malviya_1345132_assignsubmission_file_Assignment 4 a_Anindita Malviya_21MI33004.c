/*
Name: Anindita Malviya
Dept:MI
Roll no. : 21MI33004
Package : Code Blocks
Question : Assgn 4 a
*/


#include <stdio.h>

void CombiRep(int arr[], int n, int l);
void CombinationRepetitionUtil(int chosen[], int arr[], int index, int l, int start, int end);

int main()
{
    int p;
    printf("Enter size of array: ");     //Prompting user for array
    scanf("%d",&p);
    int a[p];
    printf("Enter an array with size %d: ",p);
    for(int i = 0; i < p; i++)scanf("%d",&a[i]);
    int l;
    printf("Enter size of the new arrays: ");      //For size of arrays to be Printed
    scanf("%d",&l);
    int n = sizeof(a)/sizeof(a[0]);
    CombiRep(a, n, l);
}

void CombiRep(int arr[], int n, int l)
{
    int chosen[l+1];      // Allocate memory

    CombinationRepetitionUtil(chosen, arr, 0, l, 0, n-1);       // Call the recursive function
}


void CombinationRepetitionUtil(int chosen[], int arr[], int index, int l, int start, int end)
{
    if (index == l)
    {
        for (int i = 0; i < l; i++)
        {
            printf("%d ", arr[chosen[i]]);
        }
        printf("\n");
        return;
    }

    for (int i = start; i <= end; i++)               //Choosing all elements with repetition allowed
    {
        chosen[index] = i;
        CombinationRepetitionUtil(chosen, arr, index + 1,l, i, end);     //Recursion
    }
    return;
}

