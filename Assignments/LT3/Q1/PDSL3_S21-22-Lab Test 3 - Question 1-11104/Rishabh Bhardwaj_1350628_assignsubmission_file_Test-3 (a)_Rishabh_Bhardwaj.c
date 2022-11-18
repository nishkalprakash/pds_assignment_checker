/*
Rishabh Bhardwaj
21CE10052
Civil
sec-3
CodeBlock
windows
*/
#include<stdio.h>

int main()
{
    int i , j ,a[100][100], row, col, com=0;// defining i , i, row, col, as integers and a as 2D array and declearing com is equal to 0.

    printf("Enter the image size: ");// input for the size of image / matrix.
    scanf("%d %d", &row, &col);


    printf("Enter the image: \n")// input for each element of image/matrix.
    for (i=1;i<=row; i++)
    {
        for(j=1; j<=col;j++)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }


    // operation for  connected components.
    for(i=1;i<=row;i++)
    {
        for(j=1;j<=col;j++)
        {
            if(a[i][j]==a[i][j+1] && a[i][j]==a[i][j+2])
            {
                if (a[i][j] != 0)
                {
                    com++;
                    a[i][j]+=com;
                    a[i][j+1]+=com;
                    a[i][j+2]+=com;
                }
            }
            if (a[i][j]==a[i+1][j] && a[i][j]== a[i+2][j])
            {
                if( a[i][j] != 0)
                {
                    com++;
                    a[i][j]+=com;
                    a[i+1][j]+=com;
                    a[i+2][j]+=com;
                }
            }
        }
    }

    printf("Output image with labeled connected components: \n");// output for the final image with connected components.
    for (i=1;i<=row;i++)
    {
        for(j=1;j<=col;j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    printf("Number of connected components = %d", com);// output for number of connected components.
    return 0;
}
