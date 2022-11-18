/*
Name: Shubham Singh
Roll No: 21EX10032
Department: Geology and Geophysics
Package: Codeblocks
Assignment Class: 4(a)
*/

#include <stdio.h>
void printcombination(int a[], int n, int i); // declration of functions//
void recursive(int a[], int d[], int start, int end, int index, int i);
int main()
{
    int i, size;
    printf("Enter the size of array a: ");
    scanf("%d", &size);
    int a[size];
    printf("\nEnter the element of array a: ");
    for (int j = 0; j < size; j++)
    {
        scanf("%d", &a[j]); // taking element of a from the user//
    }
    printf("Enter i: ");
    scanf("%d", &i);
    int n = sizeof(a) / sizeof(a[0]);
    printcombination(a, n, i); // calling printcombination function for print the combinations//
    return 0;
}
void recursive(int a[], int d[], int start, int end, int index, int i)
{
    // Current combination is ready to be printed, print it
    if (index == i)
    {
        for (int j = 0; j < i; j++)
        {
            printf("%d ", a[d[j]]);
        }
        printf("\n");
        return;
    }
    // One by one choose all elements (without considering
    // the fact whether element is already chosen or not)
    // and recur
    for (int k = start; k <= end; k++)
    {
        d[index] = k;
        recursive(a, d, k, end, index + 1, i);
    }
}
void printcombination(int a[], int n, int i)
{
    // Allocate memory
    int d[i + 1];
    // Call the recursive function
    recursive(a, d, 0, n - 1, 0, i);
}
