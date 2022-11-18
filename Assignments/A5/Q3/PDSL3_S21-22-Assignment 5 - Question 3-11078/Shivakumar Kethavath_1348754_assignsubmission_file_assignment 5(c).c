/* kethavath shivakumar
  21MI31013   */

  #include<stdio.h>
#include<stdlib.h>

void findSaddlePoint(int** arr,int x, int y)
{

    for (int i = 0;
     i < y; i++)
    {// search the smallest element of row i.
    // and search column index of the smallest element
        int min_row = arr[i][0], col_ind = 0;
        for (int j = 1; j < y; j++)
        {
            if (min_row > arr[i][j])
            {
                min_row = arr[i][j];
                col_ind = j;
            }
        }
 /*Verify if the smallest element of row is also
 the highest element of column or not*/
        int n;
        for (n = 0; n < y; n++)

            // Note that col_ind is fixed
            if (min_row < arr[n][col_ind])
                break;

        /* print the saddle point found in this row*/
        if (n == y)
        {
           printf("Saddle Point is (%d, %d) :  %d",n-1, col_ind, min_row);
           return;
        }
    }
    printf("\nno saddle point exists.");

}

void main()
{
    printf("put the number of rows    : ");
    int x;
    scanf("%d", &x);

    printf("Enter no. columns : ");
    int y;
    scanf("%d", &y);


    int** arr = (int*)calloc(x,sizeof(int));
    for(int i=0; i<x; i++)
        arr[i] = (int*)calloc(y,sizeof(int));

    printf("Enter the array elemets one row at a time\n");
    for(int i=0; i<x; i++)
    {
        for(int j=0; j<y; j++)
         scanf("%d", &arr[i][j]);
    }

    findSaddlePoint(arr, x, y);


}
