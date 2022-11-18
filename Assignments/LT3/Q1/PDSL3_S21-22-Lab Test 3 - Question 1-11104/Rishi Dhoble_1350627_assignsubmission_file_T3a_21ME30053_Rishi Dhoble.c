/*
Name- Rishi Dhoble
Roll no- 21ME30053
Sec-3
Package- Code blocks
T3a*/

#include<stdio.h>
#include<string.h>

int main() {

    int row, col;                                  //rows and columns

    printf("enter dimensions of photo matrix (rows and columns):");
    scanf("%d %d", &row,&col);

    int **arr=(int**)malloc(row * sizeof(int*));

                                                            //if system is unable to allocate memory, then exit
        if  (arr == NULL){
		  printf ("\nError");
		  exit(0);
        }

                                                              //allocating memory for each row of 2-d array
        for(int i=0;i < row;i++){
        arr[i]=(int*)malloc(col*sizeof(int));

                                                               //if system is unable to allocate memory, then exit
        if  (arr[i] == NULL){
            printf ("\nMemory cannot be allocated");
            exit(0);
        }
    }

                                                                   //reading the 2-d array from the user
    printf("\nEnter the photo matrix (in 0s and 1s):\n");
    for(int i=0; i < row; i++)
    {
        for(int j=0; j < col; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }


    printf("\nThe entered photo matrix is:\n");
    for(int i=0; i < row; i++){
        for(int j=0; j < col; j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    int i,j;

    for (i=0; i<row; i++) {
        int count=0;
        for (j=0; j<col; j++){
            if (arr[i][j] == arr[i-1][j-1] || arr[i][j] == arr[i-1][j] || arr[i][j] == arr[i-1][j+1] ||
                arr[i][j] == arr[i][j-1] || arr[i][j] == arr[i][j+1] || arr[i][j] == arr[i+1][j-1] ||
                arr[i][j] == arr[i+1][j] || arr[i][j] == arr[i+1][j+1]){

                count++;
                }
        arr[i][j] = count;
        }
    }


    printf("\nThe grouped photo matrix is:\n");
    for( i=0; i < row; i++){
        for( j=0; j < col; j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}
