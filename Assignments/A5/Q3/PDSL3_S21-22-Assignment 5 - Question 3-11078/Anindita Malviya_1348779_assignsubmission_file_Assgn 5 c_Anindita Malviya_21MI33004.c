/*
Name: Anindita Malviya
Dept:MI
Roll no. : 21MI33004
Package : Code Blocks
Question 3
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int rows, cols;
    printf("Enter no of rows and cols: ");
    scanf("%d%d",&rows, &cols);

    int *ptp=(int)malloc(rows*sizeof(int));

    if  (ptp == NULL)
    {
		  printf ("\nMemory cannot be allocated");
		  exit(0);
	}

	for(int i = 0; i < rows; i++)
    {
        ptp[i]=(int*)malloc(cols*sizeof(int));

        if  (ptp[i] == NULL)
        {
            printf ("Memory cannot be allocated\n");
            exit(0);
        }
    }
    printf("Enter the 2-d array:\n");
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            scanf("%d",&ptp[i][j]);
        }
    }

    printf("\nThe entered 2-d array is:\n");

    int i = 0;
    int j=0;
    while(i<rows)
    {

        while( j<cols)
        {
            printf("%d ",ptp[i][j]);
            j++;
        }
        printf("\n");
        i++;

    }

    int F=0;
    int min=0;
    int max=0;
    int i=0;
    while( i<rows)
    {
        int j=0;
        while(j<cols)
        {
            if(ptp[i][j] < ptp[i][max])
            {
                max=j;
            }
            if(ptp[i][j]>ptp[min][j])
            {
                min=i;
            }
             j++;
        }
        if(ptp[min][max]==ptp[i][max])
        {
            F=1;
        }

        i++;
    }
    if(F)
    {
        printf("\nSaddle point is: %d",ptp[min][max]);
    }
    else
    {
        printf("\nNo saddle points.");
    }

    for(int i=0; i<rows; i++)
    {
        free(ptp[i]);
    }
    free(ptp);
    return 0;
}
