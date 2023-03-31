/*
Section-2
Roll no.- 22EC10087
Name- Vedant Katole
Assignment No- 4
Description- Loops
*/

#include<stdio.h>

void main()
{
    int ROWS, COLS, i, cols, currentcol;
    printf("Enter the number of rows: ");
    scanf("%d", &ROWS);   //taking the height as the input
    COLS = (2*ROWS) -1;     //total no of columns

    for(int rows=1; rows<=ROWS; rows++)
    {
        cols= 2*rows-1;    //no of cols filled up in that column
        i = rows;
        for(currentcol=1; currentcol<= (COLS-rows)/2; currentcol++)
        {
            printf(" ");   //printing space for 1st half of the row
        }
        for(currentcol=(COLS-rows)/2 + 1  ; currentcol <= (COLS+1)/2; currentcol++)
        {
            printf("%d", i);
            i++;         //printing increasing numbers
        }i = i -1;
        for(currentcol = (COLS+1)/2 + 1 ; currentcol<= (COLS+cols)/2  ; currentcol++)
        {
            i--;
            printf("%d", i);   //printing decreasing order in the numbers
        }
        for( ; currentcol<= COLS ; currentcol++)
        {
            printf(" ");      //printing space for last half
        }

        printf("\n");
    }
}
