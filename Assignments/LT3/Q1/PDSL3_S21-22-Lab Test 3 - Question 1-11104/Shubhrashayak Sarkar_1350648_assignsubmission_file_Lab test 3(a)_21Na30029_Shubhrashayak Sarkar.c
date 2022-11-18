/*Name:- Shubhrashayak Sarkar;
Roll No:- 21NA30029
Package:- Visual Studio Code
Assignment class:- 6
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int **ptr, **tptr;
    int r, c, count = 1;
    printf("Enter the image size:");
    scanf("%d %d", &r, &c);
    ptr = (int **)malloc(sizeof(int) * r);
    for (int i = 0; i < r; i++)
    {
        ptr[i] = (int *)malloc(sizeof(int) * c);
    }
    printf("Enter the image:\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &ptr[i][j]);
        }
    }
    tptr = (int **)malloc(sizeof(int) * r);
    for (int i = 0; i < r; i++)
    {
        tptr[i] = (int *)malloc(sizeof(int) * c);
    }
    for (int i = 0; i < r; i++) // initializing tptr as 0
    {
        for (int j = 0; j < c; j++)
        {
            tptr[i][j] = 0;
        }
    }
    for (int i = 1; i < r - 1; i++)
    {
        for (int j = 1; j < c - 1; j++)
        {
            if (ptr[i][j] == 1)
            {
                for (int k = -1; k < 2; k++)
                {
                    for (int l = -1; l < 2; l++)
                    {

                        if (ptr[i][j] == ptr[i + k][j + l] && !(k == 0 && l == 0))
                        {
                            if (tptr[i + k][j + l] == 0)
                            {
                                tptr[i][j] == count;
                                count++;
                            }
                            else
                            {
                                tptr[i][j] == tptr[i + k][j + l];
                            }
                        }
                    }
                }
            }
        }
    }
    printf("Output image with labelled connected comonents:\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", tptr[i][j]);
        }
        printf("\n");
    }
    free(tptr);
    free(ptr);
    printf("Number of connected components=%d", count);
    return 0;
}