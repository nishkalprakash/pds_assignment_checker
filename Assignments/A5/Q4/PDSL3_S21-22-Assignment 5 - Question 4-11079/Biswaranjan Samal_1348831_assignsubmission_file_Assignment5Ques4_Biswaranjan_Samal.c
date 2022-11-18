
/*
Name:Biswaranjan Samal
Roll no: 21IM10011
Dept: Industrial and Systems Engineering
Package: Codeblocks
Assignment: 5 ,Question: 4
*/
#include <stdio.h>
#include <stdlib.h> //dynamic allocation

void print(int **matrix,int rows,int cols)
{
    int i,j;
    for(i = 0; i < rows; i++)     //function which prints in matrix form the elemenets stored in the row major form
    {
        for(j = 0; j < cols; j++)
            printf("%d ",matrix[i][j]);
        printf("\n");
    }
}

void matrixInput(int **matrix,int rows,int cols)
{
    int i,j;
    for(i = 0; i < rows; i++)                 //functip=on which takes the input of thr matrix
    {
        matrix[i] = (int*)malloc(cols*sizeof(int));
        for(j = 0; j < cols; j++)
            scanf("%d",&matrix[i][j]);
    }
}

void outputImage(int **output,int** image,int** kernel,int rows,int cols,int krows,int kcols)
{
    //the  matrix is scanned and match row wise and
    //This kernel is then slid over the original image matrix elemetn by element over the entire image matrix
    // and multiply the corresponding elements and then add them up to get a new  matrix

    int i,j,k,l;
    for(i = 0; i < rows-krows+1; i++)
    {
        output[i] = (int*)malloc((cols-kcols+1)*sizeof(int));
        for(j = 0; j < cols-kcols+1; j++)
        {
            output[i][j] = 0;
            for(k = 0; k < krows; k++)
            {
                for(l = 0; l < kcols; l++)
                {
                    output[i][j] += image[i+k][j+l]*kernel[k][l];
                }
            }
        }
    }
}

int main()
{
    //image array specifications


    int rows,cols;
    printf("Number of Rows of image:");
    scanf("%d",&rows);
    printf("Number of Columns of image:");
    scanf("%d",&cols);
    int** image = (int**)malloc(rows*sizeof(int*));
    printf("Enter Image Array:\n");
    matrixInput(image,rows,cols);  //scanning the elements of  the image array


    int krows,kcols; //we are entering the specifications of the kerner array
    printf("Number of Rows of kernel:");
    scanf("%d",&krows);
    printf("Number of Columns of kernel:");
    scanf("%d",&kcols);
    int** kernel = (int**)malloc(krows*sizeof(int*)); //memory is allocated for the dynamic array
    printf("Enter Kernel Array:\n");
    matrixInput(kernel,krows,kcols);

    int **output = (int**)malloc((rows-krows+1)*sizeof(int*));
    outputImage(output,image,kernel,rows,cols,krows,kcols);  //output image matrix is called
    printf("\n\nOutput Image:\n");
    print(output,rows-krows+1,cols-kcols+1); //printing matrix funtion is called
}
