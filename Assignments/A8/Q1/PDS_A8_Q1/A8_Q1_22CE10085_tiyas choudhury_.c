#include<stdio.h>int main()
{
    int row, col, i, j;
    printf("Number of elements in one row = ");
    scanf("%d", &row);
    col = row;
    int arr[row][col];
    printf("Enter elements in row-major order: ");
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("Column Major Order: ");
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("%d ", arr[j][i]);
        }
    }
    printf("\n");
    return 0;
}