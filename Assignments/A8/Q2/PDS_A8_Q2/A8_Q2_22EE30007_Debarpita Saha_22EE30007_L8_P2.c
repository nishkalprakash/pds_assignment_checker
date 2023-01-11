/*
* Section 14
* Roll No : 22EE30007
* Name : Debarpita Saha
* Assignment No : 8
* Description : Program to find the saddle point of a 2D array
*/
#include <stdio.h>


int main() {

     int i, j, k, ROWS, COLS;
    
     int arr[ROWS][COLS];

     int row_min, col_max, found = 0;

    scanf("%d %d",&ROWS, &COLS);

    printf("Enter the elements of the %dx%d array:\n", ROWS, COLS);

    for (i = 0; i < ROWS; i++) {

        for (j = 0; j < COLS; j++) {

            scanf("%d", &arr[i][j]);

        }

    }


    for (i = 0; i < ROWS; i++) {

        row_min = arr[i][0];

        for (j = 1; j < COLS; j++) {

            if (arr[i][j] < row_min) {

                row_min = arr[i][j];

            }

        }


        for (j = 0; j < COLS; j++) {

            if (arr[i][j] == row_min) {

                col_max = arr[0][j];

                for (k = 1; k < ROWS; k++) {

                    if (arr[k][j] > col_max) {

                        col_max = arr[k][j];

                    }

                }


                if (row_min == col_max) {

                    printf("Saddle point found at position (%d, %d) with value %d\n", i+1, j+1, row_min);

                    found = 1;

                }

            }

        }

    }


    if (!found) {

        printf("No saddle point found\n");

    }


    return 0;

}



