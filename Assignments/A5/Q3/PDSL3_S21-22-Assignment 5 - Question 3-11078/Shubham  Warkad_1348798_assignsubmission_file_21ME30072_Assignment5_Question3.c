// Name:-Shubham Gajanan Warkad
// Roll No. 21ME30072
// Lab Assignment-5       Question-3
#include <stdio.h>

int main()
{
    int n, m, i, j, k, a[20][20], max, maxj;
    int flag = 0;
    printf("\nEnter the rows and column : ");
    scanf("%d %d", &n, &m);

    //input the elements of the matrix
    printf("\nEnter the elements of matrix : ");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
            scanf("%d", &a[i][j]);
    }
    //printing the matrix
    printf("\nGiven matrix is : \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
    //finding the saddle points in the matrix
    for (i = 0; i < n; i++)
    {
        max = a[i][0], maxj = 0;
        for (j = 0; j < m; j++)
        {
            if (a[i][j] > max)
            {
                max = a[i][j];
                maxj = j;
            }
        }
        flag = 1;
        // After determining the column we compare with the entire column
        for (k = 0; k < n; k++)
        {
            if (max > a[k][maxj])
            {
                flag = 0;
                continue;
            }
        }
        if (flag)
        {
            printf("\nSaddle point found at a[%d][%d] = %d", i, maxj, max);
            break;
        }
    }
    if (flag == 0)
        printf("\nNo Saddle Point Found in Above Array");
    return 0;
}
