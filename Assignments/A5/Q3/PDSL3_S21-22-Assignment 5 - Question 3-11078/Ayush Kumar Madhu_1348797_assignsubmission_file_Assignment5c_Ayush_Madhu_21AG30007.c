// NAME - AYUSH KUMAR MADHU
// ROLL NO. - 21AG30007
// SECTION - 03
// DEPT - AGRICULTURAL AND FOOD ENGINEERING

#include <stdio.h>
#include <stdlib.h>

// Main function - The program starts from here
int main()
{
    // Defining variables and taking inputs
    int row, col;
    int temp = 1, x, low, high;
    printf("Enter number of rows and columns : ");
    scanf("%d %d", &row, &col);

    int *ptr[row];

    for (int i = 0; i < row; i++)
        ptr[i] = (int *)malloc(col * sizeof(int));

    printf("\nEnter elements of the matrix :\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("Row %d Column %d : ", i + 1, j + 1);
            scanf("%d", &ptr[i][j]);
        }
    }

    // Loop for printing the matrix
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", ptr[i][j]);
        }
        printf("\n");
    }

    // Loop for finding the saddle point
    for (int i = 0; i < row; i++)
    {
        x = 0;
        low = ptr[i][0];
        for (int j = 0; j < col; j++)
        {
            if (low > ptr[i][j])
            {
                low = ptr[i][j];
                x = j;
            }
        }

        high = 0;
        for (int j = 0; j < row; j++)
        {
            if (high < ptr[j][x])
            {
                high = ptr[j][x];
            }
        }
        if (low == high)
        {
            printf("\nValue of saddle point : %d", low);
            temp = 0;
        }
    }

    if (temp > 0)
        printf("\nNo saddle point found");

    return 0;
}