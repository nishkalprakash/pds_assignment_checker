/* Name- Rishi Dhoble
Roll no- 21ME30053
Sec-3
Package- Code Blocks
Q5c
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int rows, cols;
    printf("Enter dimensions of array (rows and cols): ");
    scanf("%d%d", &rows, &cols);

    int **pointer_to_pointer=(int**)malloc(rows*sizeof(int*));

    //if system is unable to allocate memory, then exit
    if  (pointer_to_pointer == NULL)
    {
		  printf ("\nMemory cannot be allocated");
		  exit(0);
	}

    //allocating memory for each row of 2-d array
	for(int i=0;i<rows;i++)
    {
        pointer_to_pointer[i]=(int*)malloc(cols*sizeof(int));

        //if system is unable to allocate memory, then exit
        if  (pointer_to_pointer[i] == NULL)
        {
            printf ("\nMemory cannot be allocated");
            exit(0);
        }
    }

    //reading the 2-d array from the user
    printf("\nEnter the 2-d array:\n");
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<cols; j++)
        {
            scanf("%d",&pointer_to_pointer[i][j]);
        }
    }

    printf("\nThe entered 2-d array is:\n");
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<cols; j++)
        {
            printf("%d ",pointer_to_pointer[i][j]);
        }
        printf("\n");
    }

    int flag=0;
    int minrow_indx=0;
    int maxcol_indx=0;

    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<cols; j++)
        {
            if(pointer_to_pointer[i][j]<pointer_to_pointer[i][maxcol_indx])
            {
                maxcol_indx=j;
            }
            if(pointer_to_pointer[i][j]>pointer_to_pointer[minrow_indx][j])
            {
                minrow_indx=i;
            }
        }
        if(pointer_to_pointer[minrow_indx][maxcol_indx]==pointer_to_pointer[i][maxcol_indx])
        {
            flag=1;
        }
    }
    if(flag)
    {
        printf("\nSaddle point is: %d",pointer_to_pointer[minrow_indx][maxcol_indx]);
    }
    else
    {
        printf("\nNo saddle points.");
    }

    for(int i=0; i<rows; i++)
    {
        free(pointer_to_pointer[i]);
    }
    free(pointer_to_pointer);
    return 0;
}
