/*
Name: Indra Kumar Gupta
Roll: 21AE10043
Department: Aerospace Engineering
Package: CodeBlocks
Operating system: Windows
*/

//Lab Test 3 Question 1

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int row, column, i, j,k,l, count=0;
    //taking input
    printf("Enter no. of rows: ");
    scanf("%d", &row);
    printf("Enter no. of columns: ");
    scanf("%d", &column);
    printf("Enter elements of matrix: \n");
    //dynamic allocation
    int **ar_matrix = (int **) malloc(row * sizeof(int *));
    for (i=0; i<row; i++) ar_matrix[i] = (int *)malloc(column * sizeof(int));
    //second matrix to check whether an element is already in connected component or not
    int **check = (int **) malloc(row * sizeof(int *));
    for (i=0; i<row; i++) check[i] = (int *)malloc(column * sizeof(int));
    //taking elements of matrix
    for(i=0; i<row; i++)
    {
        printf("\nEnter row %d (e.g.: 0 0 1) only with 0 or 1: ", i);
        for(j=0; j<column; j++)
        {

            scanf("%d", &ar_matrix[i][j]);
        }
    }
    for(i=0; i<row; i++)
    {

        for(j=0; j<column; j++)
        {
//assigning every element of matrix to 0
            check[i][j]=0;
        }

    }

    for(i=0; i<row; i++)
    {
        for(j=0; j<column; j++)
        {
            //checking  element is connected or not if not then assigning required variable
            if((ar_matrix[i][j]!=0)&&(check[i][j]==0))
            {
                count=count+1;
                ar_matrix[i][j]=count;
                check[i][j]=1;

                if(i!=0&&j!=0)
                {
                    if(ar_matrix[i-1][j-1]!=0)
                    {
                        ar_matrix[i-1][j-1]=count;
                        check[i-1][j-1]=1;
                    }
                }
                if(i!=0)
                {
                    if(ar_matrix[i-1][j]!=0)
                    {
                        ar_matrix[i-1][j]=count;
                        check[i-1][j]=1;
                    }
                }
                if(j!=column-1)
                {

                    if(ar_matrix[i][j+1]!=0)
                    {
                        ar_matrix[i][j+1]=count;
                        check[i][j+1]=1;
                    }
                }
                if(j!=column-1&&i!=0)
                {
                    if(ar_matrix[i-1][j+1]!=0)
                    {
                        ar_matrix[i-1][j+1]=count;
                        check[i-1][j+1]=1;
                    }

                }
                if(j!=0)
                {
                    if(ar_matrix[i][j-1]!=0)
                    {
                        ar_matrix[i][j-1]=count;
                        check[i][j-1]=1;
                    }
                }
                if(i!=row-1&&j!=0)
                {
                    if(ar_matrix[i+1][j-1]!=0)
                    {
                        ar_matrix[i+1][j-1]=count;
                        check[i+1][j-1]=1;
                    }

                }
                if(i!=row-1)
                {
                    if(ar_matrix[i+1][j]!=0)
                    {
                        ar_matrix[i+1][j]=count;
                        check[i+1][j]=1;
                    }

                }
                if(i!=row-1&&j!=column-1)
                {
                    if(ar_matrix[i+1][j+1]!=0)
                    {
                        ar_matrix[i+1][j+1]=count;
                        check[i+1][j+1]=1;
                    }

                }








            }
            else if(ar_matrix[i][j]!=0) //checking with respect to connect elements
            {

                if(i!=0&&j!=0)
                {
                    if(ar_matrix[i-1][j-1]!=0)
                    {
                        ar_matrix[i-1][j-1]=ar_matrix[i][j];
                        check[i-1][j-1]=1;
                    }
                }
                if(i!=0)
                {
                    if(ar_matrix[i-1][j]!=0)
                    {
                        ar_matrix[i-1][j]=ar_matrix[i][j];
                        check[i-1][j]=1;
                    }
                }
                if(j!=column-1)
                {

                    if(ar_matrix[i][j+1]!=0)
                    {
                        ar_matrix[i][j+1]=ar_matrix[i][j];
                        check[i][j+1]=1;
                    }
                }
                if(j!=column-1&&i!=0)
                {
                    if(ar_matrix[i-1][j+1]!=0)
                    {
                        ar_matrix[i-1][j+1]=ar_matrix[i][j];
                        check[i-1][j+1]=1;
                    }

                }
                if(j!=0)
                {
                    if(ar_matrix[i][j-1]!=0)
                    {
                        ar_matrix[i][j-1]=ar_matrix[i][j];
                        check[i][j-1]=1;
                    }
                }
                if(i!=row-1&&j!=0)
                {
                    if(ar_matrix[i+1][j-1]!=0)
                    {
                        ar_matrix[i+1][j-1]=ar_matrix[i][j];
                        check[i+1][j-1]=1;
                    }

                }
                if(i!=row-1)
                {
                    if(ar_matrix[i+1][j]!=0)
                    {
                        ar_matrix[i+1][j]=ar_matrix[i][j];
                        check[i+1][j]=1;
                    }

                }
                if(i!=row-1&&j!=column-1)
                {
                    if(ar_matrix[i+1][j+1]!=0)
                    {
                        ar_matrix[i+1][j+1]=ar_matrix[i][j];
                        check[i+1][j+1]=1;
                    }

                }

            }



        }
    }
    //printing the output
    printf("Output image with labelled connected components:\n\n");
    for(i=0; i<row; i++)
    {

        for(j=0; j<column; j++)
        {

            printf("%d", ar_matrix[i][j]);
        }
        printf("\n");
    }
    printf("Number of connected components = %d", count);
    return 0;
}
