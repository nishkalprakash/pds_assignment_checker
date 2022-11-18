// NAME- SATYAJIT BEHERA
// ROLL NO-21AG10034
// DEPT- AGRICULTURE AND FOOD ENGINEERING
// SECTION-03
// SOFTWARE- code block
#include <stdio.h>
#include <stdlib.h>

int main()
{
     // initializing the value
    int row, col, f = 1, p, sm, large,count=0;
    // taking the user input
    printf("Enter number of rows and columns : ");
    scanf("%d %d", &row, &col);

    int *ptr[row];

    for (int i = 0; i < row; i++)
        ptr[i] = (int *)malloc(col * sizeof(int));
// taking the array from the user
    printf("\nEnter elements of the matrix :\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("Row %d Column %d : ", i + 1, j + 1);
            scanf("%d", &ptr[i][j]);
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", ptr[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < row; i++)
    {
        // finding the saddle point
        p = 0;
        sm = ptr[i][0];
        for (int j = 0; j < col; j++)
        {
            if (sm > ptr[i][j])
            {
                sm = ptr[i][j];
                p = j;
            }
        }

        large = 0;
        for (int j = 0; j < row; j++)
        {
            if (large < ptr[j][p])
            {
                large = ptr[j][p];
            }
        }
        if (sm == large)
        {
            printf("\nValue of saddle point:%d", sm);
            f = 0;
        }
    }

    if (f > 0)
        printf("\nNo saddle point");

    return 0;
}
