/*
Tushar Kumar
21CH30035
Chemical Engineering
Section 3
Code Blocks
Windows 10
*/
#include <stdio.h>

int main() {                       // main function

    int row;                                 //declaring row and column as variable so that we can take input of and create matrix
    int col;
    printf("Enter the dimension of the input image matrix: ");
    scanf("%d",&row);                                      //taking user inputs
    scanf("%d",&col);                              //taking user inputs
    printf("Enter elements of matrix: ");
    int mat[row][col];                // 2d array
    for(int i=0;i<row;i++){            //taking the enteries
    for(int j=0;j<col;j++){
        scanf("%d",&mat[i][j]);
    }
    }
    int k;                     //variable for kernel
    printf("Enter the kernel size");
    scanf("%d",&k);
    int kernel[k][k];
    for(int i=0;i<k;i++){
    for(int j=0;j<k;j++){
        scanf("%d",&kernel[i][j]);
    }
    }
    int rowout=row%k+row/k;
    int colout=col%k+col/k;
    int output[rowout][colout];
    int i=0;
    while(i<row-k)
    {
        int j=0;
        while(j<col-k)
        {
            for(int m=0;m<k;m++)
            {
                for(int n=0;n<k;n++)
                {
                    output[i%k+i/k][j%k+j/k]+=mat[i+m][j+n]*kernel[m][n];
                }
            }
            j+=1;
        }
        i+=1;
    }
    printf("output");
    for(int i=0;i<rowout;i++)
    {
        for(int j=0;j<colout;j++)
        {
            printf("%d",output[i][j]);
        }
        printf("%n");
    }
}
