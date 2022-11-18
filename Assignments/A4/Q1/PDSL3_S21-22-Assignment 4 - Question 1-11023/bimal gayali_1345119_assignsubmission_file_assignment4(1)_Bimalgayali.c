/*
Name-Bimal Gayali
roll-21MA10017
questions no-01
 */
#include <stdio.h>

//  Function to generate combination
void combination(int a[], int data[], int start, int end, int index, int l)
{
    int j, i;
    // Current combination is ready to be printed, print it
    if (index == l)
    {
        for (j =0; j < l; j++)
            printf("%d ", data[j]);
        printf("\n");
        return;
    }

    for (i = start; i<=end && end-i +1>=l- index; i++)
    {
        data[index] = a[i];
        combination(a, data, i+1, end,index +1,l);
    }
}
// End of combination

// Function to print the combination
void printCombination(int a[], int n, int l)
{
    int data[l];
   combination(  a, data, 0,n-1,0,l);
}
// End of printCombination

//  The main() begin
int main()
{
    int a[20], l, n, i;
    printf("Enter the number of input");
    scanf("%d", &n);
    printf("Enter the integers\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (l = 1; l <= 5; l++)
        printCombination(a, n, l);
}
