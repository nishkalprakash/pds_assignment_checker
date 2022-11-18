/*
RAKESH TARENDRA
21MT30031
*/
#include <stdio.h>
#include <stdlib.h>

// dynamic space allocation function
void spaceFunc(int *ptr, int r, int c)
{
    // dynamically alloting space using malloc function
    ptr = (int *)malloc((r * c) * sizeof(int));

    return;
}

// saddle point checking function
void saddleFinder(int *ptr, int r, int c)
{
    // declaring arrays for min of rows, max of rows, min of cols, max of cols
    int rMax[r], rMin[r], cMax[c], cMin[c];

    // max and min of each row
    int Rmax, Rmin;
    for (int i = 0; i < r; i++)
    {
        Rmax = *(ptr + (i * c));
        Rmin = *(ptr + (i * c));

        for (int j = 0; j < c; j++)
        {
            if (*(ptr + (i * c) + j) > Rmax)
            {
                Rmax = *(ptr + (i * c) + j);
            }
            if (*(ptr + (i * c) + j) < Rmin)
            {
                Rmin = *(ptr + (i * c) + j);
            }
        }
        rMax[i] = Rmax;
        rMin[i] = Rmin;
    }

    // max and min of each col
    int Cmax, Cmin;
    int j = 0;
    for (int i = 0; i < c; i++)
    {
        Cmax = *(ptr + (j * r));
        Cmin = *(ptr + (j * r));

        for (j = 0; j < r; j++)
        {
            if (*(ptr + (j * c) + i) > Cmax)
            {
                Cmax = *(ptr + (j * c) + i);
            }
            if (*(ptr + (j * c) + i) < Cmin)
            {
                Cmin = *(ptr + (j * c) + i);
            }
        }
        cMax[i] = Cmax;
        cMin[i] = Cmin;
    }

    // checking for saddle points and printing them
    int saddleStat = 0;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if ( (*(ptr + (i * c) + j) == rMax[i]) && (*(ptr + (i *c) + j) == cMin[j]) || (*(ptr + (i * c) + j) == rMin[i]) && (*(ptr + (i *c) + j) == cMax[j]) ) {
                printf("\nSaddle point is a[%d][%d] = %d", i, j, *(ptr + (i * c) + j));
                saddleStat = 1;
            }
        }
    }

    if (saddleStat == 0) {
        printf("\nNo saddle point exists for the given input matrix.\n");
    }

    return;
}

// main function code
int main()
{
    // declaring the pointer to 2D integer array
    int *a;

    // reading num of rows and columns
    printf("Enter number rows and columns: ");
    int numofRows, numOfCols;
    scanf("%d %d", &numofRows, &numOfCols);

    // calling back function to allocate space to 2d array
    spaceFunc(a, numofRows, numOfCols);

    // reading elements of the array
    printf("\nEnter the array (one row at a time):\n");
    for (int i = 0; i < numofRows; i++)
    {
        for (int j = 0; j < numOfCols; j++)
        {
            scanf("%d", (a + (i * numOfCols) + j));
        }
    }

    // calling back saddle finding function
    saddleFinder(a, numofRows, numOfCols);

    // finishing program by returning 0
    return 0;
}
