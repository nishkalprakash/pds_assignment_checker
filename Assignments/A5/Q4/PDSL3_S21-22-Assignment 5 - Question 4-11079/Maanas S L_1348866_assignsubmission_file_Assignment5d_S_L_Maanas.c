/*
Name : S L Maanas
Roll No : 21CH10055
Department : Chemical Engineering
Package : VS Code
Assignment : Assignment 5(d)
*/

#include <stdio.h>
#include <stdlib.h>


// Function to allocate memory for an nXm matrix and return its pointer
int ** allocMem(int n, int m) 
{
    int ** arr = (int**)malloc(n*sizeof(int*));                                                                 // Allocating memory for n rows
    for (int i = 0; i < n; i++) arr[i] = (int*)malloc(m*sizeof(int));                                           // Allocating memory for m elements of each row
    return arr;
}

// Function to read the elements of nXm matrix
void readMatrix(int ** arr, int n, int m) 
{
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < m; j++) 
        {
            scanf("%d", &arr[i][j]);
        }
    }
}


/*Function to filter the image (nXm) according to a kernel(kXk) provided.
Number of rows of the filtered image will be n-k+1
Number of columns of the filtered image will be m-k+1   */
int ** filter(int ** mat, int n, int m, int ** ker, int k) 
{
    int ** filtered = allocMem(n-k+1, m-k+1);                                                                   // Allocating space for the resultant image matrix
    for (int i = 0; i < n-k+1; i++) 
    {
        for (int j = 0; j < m-k+1; j++) 
        {
            int result = 0;

            // Traversing through the image matrix starting at element [i][j] and tracing according to kernel size
            for (int k_x = i; k_x < i + k; k_x++) 
            {
                for(int k_y = j; k_y < j + k; k_y++) 
                {
                    result += ker[k_x-i][k_y-j]*mat[k_x][k_y];
                }
            }
            filtered[i][j] = result;                                                                            // Storing the resultant value into resultant image matrix
        }
    }
    return filtered;
}

int main() 
{

    // INPUT
    printf("Enter the dimension of the input matrix: ");
    int n, m;
    scanf("%d %d", &n, &m);
    printf("Enter the input image matrix:\n");
    // Allocate and read image matrix
    int ** matrix = allocMem(n, m);
    readMatrix(matrix, n, m);
    printf("\n\nEnter the kernel size: ");
    int k;
    scanf("%d", &k);
    printf("Enter the kernel elements:\n");
    //Allocate and read kernel matrix
    int ** kernel = allocMem(k, k);
    readMatrix(kernel, k, k);



    // OUTPUT
    printf("\n\n\nOutput image matrix is:\n");
    int ** result = filter(matrix, n, m, kernel, k);                                                        // Filtering algorithm
    //Printing resultant image matrix
    for(int i = 0; i < n-k+1; i++) 
    {
        for(int j = 0; j < m-k+1; j++) 
        {
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }
    return 0;
}