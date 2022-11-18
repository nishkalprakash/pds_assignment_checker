/*
Name : Divya Raj
Roll : 21MT10017
Dept : Metallurgy
Package : CodeBlocks
*/

#include<stdio.h>
#include<stdlib.h>

//recursion function to mark all connected components
//replace them by respective unique label
void recurr(int **binary, int **flag, int i, int j, int row, int col, int res)
{
    if (i < 0 || j < 0 || i >= row || j >= col)
        return;
    if (flag[i][j] == 1 || binary[i][j] == 0)
        return;
    flag[i][j] = 1;
    binary[i][j] = res;
    recurr(binary, flag, i-1, j-1, row, col, res);
    recurr(binary, flag, i-1, j, row, col, res);
    recurr(binary, flag, i-1, j+1, row, col, res);
    recurr(binary, flag, i, j-1, row, col, res);
    recurr(binary, flag, i, j+1, row, col, res);
    recurr(binary, flag, i+1, j-1, row, col, res);
    recurr(binary, flag, i+1, j, row, col, res);
    recurr(binary, flag, i+1, j+1, row, col, res);
}

int main(){
    int row, col, res = 0;
    printf("Enter the image size: ");
    scanf("%d %d", &row, &col);
    int **binary = (int**)malloc(sizeof(int*) * row);
    int **flag = (int**)malloc(sizeof(int*) * row);
    
    //taking input of image from user
    for(int i=0; i<row; i++){
        binary[i] = (int*)malloc(sizeof(int) * col);
        flag[i] = (int*)malloc(sizeof(int) * col);
        for(int j=0; j<col; j++){
            scanf("%d", &binary[i][j]);
            flag[i][j] = 0;
        }
    }

    //converting it into a new matrix using
    //labelling by calling the recursive function
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (binary[i][j] == 1 && flag[i][j] == 0) {
                res++;
                recurr(binary, flag, i, j, row, col, res);
            }
        }
    }

    //printing the new matrix using the labelling
    printf("Output image with labelled connected components:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d ", binary[i][j]);
        }
        printf("\n");
        free(binary[i]);
    }
    free(binary);
    printf("\n");
    printf("Number of connected components = %d\n", res);
    
    return 0;
}