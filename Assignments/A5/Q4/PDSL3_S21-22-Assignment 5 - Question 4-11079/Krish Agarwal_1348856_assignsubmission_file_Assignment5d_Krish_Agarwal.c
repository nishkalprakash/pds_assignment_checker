/*Name- Krish Agarwal
Roll No.- 21NA10018
Department- Ocean Engineering and Naval Architecture
Section- 3
IDE-VS Code
*/
#include <stdio.h>
#include <stdlib.h>
int sum_pixel(int ksize, int **a, int **b)
{
    int sum = 0;
    for (int i = 0; i < ksize; i++)
    {
        for (int j = 0; j < ksize; j++)
        {
            sum += a[i][j] * b[i][j];//calculating the pixel for output matrix
    
        }
    }
    return sum;
}
int **match(int i,int j,int ks,int **arr,int **temp)
{
    for(int row=i;row<i+ks;row++)
    {
        for(int column=j;column<j+ks;column++)
        {
            temp[row-i][column-j]=arr[row][column];//finding image matrix
        }
    }
    return temp;
}
int main()
{
    int m,n;
    printf("Enter the dimension of the input image matrix: "); // taking dimension of input matrix
    scanf("%d", &m);
    scanf("%d", &n);
    int **a;
    a = (int **)malloc(m * sizeof(int *)); // dynamic allocation for 2d array
    for (int i = 0; i < m; i++)
    {
        a[i] = (int *)malloc(n * sizeof(int));
    }

    printf("\nEnter the input image matrix:\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]); // Takimg input image matrix
        }
    }
    printf("\nEntered Matrix:-\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d\t", a[i][j]); // printing the matrix
        }
        printf("\n");
    }
    int kernel_size, **kernel_mat;
    printf("\nEnter the kernel size: ");
    scanf("%d", &kernel_size);//Taking kernel size
    kernel_mat = (int **)malloc(kernel_size * sizeof(int *));//dynamic allocation of 2 d array
    for (int i = 0; i < kernel_size; i++)
    {
        kernel_mat[i] = (int *)malloc(kernel_size * sizeof(int));
    }
    printf("Enter the kernel elements:\n");// taking kernel elements
    for (int i = 0; i < kernel_size; i++)
    {
        for (int j=0;j<kernel_size; j++)
        {
            scanf("%d", &kernel_mat[i][j]);
        }
    }

    int **img,row=m-kernel_size+1,column=n-kernel_size+1;
    img=(int **)malloc(row*sizeof(int *));//dynamic alocation for 2d array
    for (int i = 0; i < row; i++)
    {
        img[i] = (int *)malloc(column * sizeof(int));
    }
    int **t;
    t=(int **)malloc(kernel_size*sizeof(int *));//dynamic alocation for 2d array
    for(int i=0;i<kernel_size;i++)
    {
        t[i]=(int *)malloc(kernel_size*sizeof(int));
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            t = match(i, j, kernel_size, a, t);//function call to check match
            img[i][j] = sum_pixel(kernel_size, t, kernel_mat);//function call to get the sum
        }
    }
    printf("\n\nOutput image matrix is:\n");
    for (int i = 0; i < row; i++)
    {
        for(int j=0;j<column;j++)
        {
            printf("%d  ", img[i][j]);//displaying the resultant matrix
        }
        printf("\n");
    }
    //freeing up the allocated memory space
    for(int i=0;i<kernel_size;i++)
       {
            free(t[i]);
            free(kernel_mat[i]);
       }
    free(t);
    free(kernel_mat);
    //freeing up the allocated memory space
    for(int i=0;i<row;i++)
        free(img[i]);
    free(img);
    return 0;
}
