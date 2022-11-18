/*Name:- Shubhrashayak Sarkar;
Roll No:- 21NA30029
Package:- Visual Studio Code
Assignment class:- 6
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Enter the number of rows and column of your matrix\n");
    int r, c; // Represents the number of rows and columns
    scanf("%d%d", &r, &c);
    int a[r][c];
    printf("Provide your matrix\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}