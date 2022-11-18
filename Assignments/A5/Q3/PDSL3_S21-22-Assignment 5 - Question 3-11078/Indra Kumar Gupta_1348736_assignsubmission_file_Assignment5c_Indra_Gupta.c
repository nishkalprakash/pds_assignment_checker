/*
Name: Indra Kumar Gupta
Roll: 21AE10043
Department: Aerospace Engineering
Package: CodeBlocks
Operating system: Windows
*/

//Assignment 5(c)

#include <stdio.h>
#include <stdlib.h>
//function for finding saddle points
int findsaddle(int row, int column, int **arr, int sd[], int sdi[], int sdj[])
{
    int i,j,k,l,max,min;
    int sd_count=0;
//row maximum and column minimum
    for(i=0; i<row; i++)
    {
        for(j=0; j<column; j++)
        {
            max=0;
            min=0;
            for(k=0; k<row; k++)
            {
                if(k!=i)
                {
                    if(arr[k][j]>=arr[i][j])
                    {
                        max=0;
                        break;
                    }
                    else
                    {
                        max+=1;
                    }

                }
            }
            for(k=0; k<column; k++)
            {
                if(k!=j)
                {
                    if(arr[i][k]<=arr[i][j])
                    {
                        min=0;
                        break;
                    }
                    else
                    {
                        min+=1;
                    }

                }
                if(max>1&&min>1)
                {
                    sd[sd_count]=arr[i][j];
                    sdi[sd_count]=i;
                    sdj[sd_count]=j;
                    sd_count+=1;

                    //printf("%d\n", arr[i][j]);
                }
            }

        }
    }

//row minimum and column maximum
    for(i=0; i<row; i++)
    {
        for(j=0; j<column; j++)
        {
            max=0;
            min=0;
            for(k=0; k<row; k++)
            {
                if(k!=i)
                {
                    if(arr[k][j]<=arr[i][j])
                    {
                        max=0;
                        break;
                    }
                    else
                    {
                        max+=1;
                    }

                }
            }
            for(k=0; k<column; k++)
            {
                if(k!=j)
                {
                    if(arr[i][k]>=arr[i][j])
                    {
                        min=0;
                        break;
                    }
                    else
                    {
                        min+=1;
                    }

                }
                if(max>1&&min>1)
                {
                    sd[sd_count]=arr[i][j];
                    sdi[sd_count]=i;
                    sdj[sd_count]=j;
                    sd_count+=1;
                    //printf("%d\n", arr[i][j]);
                }
            }

        }
    }

    return sd_count;

}
int main()
{
    int row, column,i,j,k,l;
    printf("Enter no of rows: ");
    scanf("%d", &row);
    printf("Enter no of columns: ");
    scanf("%d", &column);
//dynamic allocation
    int **arr = (int**) malloc(row*sizeof(int*));
    for(i=0; i<row; i++)
    {
        arr[i] = (int*)malloc(column*sizeof(int));
    }
//taking input
    for(i=0; i<row; i++)
    {
        for(j=0; j<column; j++)
        {
            printf("Enter Array[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    //printing required matrix
    printf("\n\n the required matrix:\n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<column; j++)
        {

            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }

    int sp_count=0, max, min, saddle[row*column], sdi[row*column], sdj[row*column];

    sp_count=findsaddle(row, column, arr, saddle, sdi, sdj);
    //printing saddle point with array index
    if(sp_count!=0)
    {
        printf("There are %d saddle points: \n", sp_count);
        for(i=0; i<sp_count; i++)
        {
            printf("a[%d][%d] = %d\n", sdi[i], sdj[i], saddle[i]);
        }
    }
    else
    {

        printf("There are no saddle points");
    }



    return 0;
}
