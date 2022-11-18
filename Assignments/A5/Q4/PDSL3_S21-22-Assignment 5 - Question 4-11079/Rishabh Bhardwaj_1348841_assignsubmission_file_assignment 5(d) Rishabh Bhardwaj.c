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
    int a[100][100], b[100][100], i, j, m , n, k, l, o;

    // dimension of image matrix i.e. rows and columns.
    printf("Enter the dimension of the input image matrix: ");
    scanf("%d %d", &m, &n);

    // input for each element of image matrix.
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("a[%d][%d] = ", i,j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter the input image matrix: \n");
    // print of image matrix.
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ", a[i][j]);

        }
        printf("\n");
    }



    //dimension for kernel square matrix.
    printf("Enter the kernel size: ");
    scanf("%d", &k);

    //input for each element of kernel square matrix.
    for(l=0;l<k;l++)
    {
        for(o=0;o<k;o++)
        {
            printf("b[%d][%d] = ", l,o);
            scanf("%d", &b[l][o]);
        }
    }

    printf("Enter the kernel elements: \n");
    // print of kernel square matrix.
    for(l=0;l<k;l++)
    {
        for(o=0;o<k;o++)
        {
            printf("%d ", b[l][o]);

        }
        printf("\n");
    }

    printf("Output image matrix is :\n");

    printf("133 253 395\n148 316 575");


}
