/*
Name: Sadique Amin
Roll Number: 21CE30027
Department: Civil Engineering
Package used: <stdio.h>,<stdlib.h>
Assignment Class: 6
*/
#include <stdio.h>
#include <stdlib.h> //STUCK IN DYNAMIC INITAILIZATION OF VARIABLE NAME LIKE BIN1, BIN2 ETC
                    //DYNAMIC VARIABLE NAME INITIALIZATION IS NOT SUPPORTED IN C LANGUAGE.
int main()
{
    int n, i, b, max = 0, num;
    int *element;
    printf("Enter the numner of array elements: ");
    scanf("%d", &n);
    printf("Enter the array elements: ");     // Enter the array elements with spaces.
    element = (int *)malloc(n * sizeof(int)); // Dynamic Memory Allocation
    if (element == NULL)
    {
        printf(" No memory is allocated.");
        exit(0);
    }
    printf("\n");
    for (i = 0; i < n; ++i)
    {
        printf(" Number %d: ", i + 1);
        scanf("%d", element + i);
        if (*(element + i) > max)
        {
            max = *(element + i);
        }
    }
    printf("Enter the number of bins: ");
    scanf("%d", &b);
    num = max / b; // Assuming here there is no loss of fractional part during division.
    /*for(i=1;i<b;i++)
    {
        int *(bin+i);
        bin+i=(int *)malloc()
    }*/
    int *arr;
    arr = (int *)malloc(b * sizeof(int));
    for (i = 0; i < b; i++)
    {
        *(arr + i) = 0;
    }
    for (i = 0; i < n; i++)
    {
        int f = *(element + i) / num;
        if (*(element + i) % num != 0)
        {
            *(arr + f) = *(arr + f) + 1;
        }
        else
        {
            *(arr + f - 1) = *(arr + f - 1) + 1;
        }
    }
    printf("Number of elements in each bin:\n");
    for (i = 0; i < b; i++) // PRINTING THE NUMBER OF ELEMENTS IN EACH BIN
    {
        printf("%d\n", arr[i]);
    }
}
