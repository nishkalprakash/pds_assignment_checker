/*
Tushar Kumar
21CH30035
Chemical Engineering
Section 3
Code Blocks
Windows 10
*/
#include <stdbool.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int ROW, COL;                                                    //defining variables such as rows and column so that we can define the size of matrix
int label = 1;
int isSafe(int M[][COL], int i, int j, bool visited[][COL])
{
    return (i >= 0) && (i < ROW) && (j >= 0) && (j < COL) && (M[i][j] && !visited[i][j]);
}

void DFS(int M[][COL], int row, int col, bool visited[][COL], int ans[ROW][COL])
{
    static int rowNbr[] = {-1, -1, -1, 0, 0, 1, 1, 1};
    static int colNbr[] = {-1, 0, 1, -1, 1, -1, 0, 1};

    visited[row][col] = true;
    if (M[row][col] == 1)
        ans[row][col] = label;
    for (int k = 0; k < 8; ++k)
        if (isSafe(M, row + rowNbr[k], col + colNbr[k], visited))
            DFS(M, row + rowNbr[k], col + colNbr[k], visited,ans);
}

int solve(int M[][COL], int ans[ROW][COL])
{
    bool visited[ROW][COL];
    memset(visited, 0, sizeof(visited));

    int count = 0;
    for (int i = 0; i < ROW; ++i)
        for (int j = 0; j < COL; ++j)
            if (M[i][j] && !visited[i][j])
            {
                DFS(M, i, j, visited,ans);
                label++;
            }

    return count;
}

int main()                                          //calling the main function
{
    printf("Enter the image size: ");
    scanf("%d%d", &ROW, &COL);                      //taking input of number of rows and columns thus defining the size of the matrix
    int ans[ROW][COL];

    int(*arr)[ROW] = calloc(COL, sizeof *arr);
    for (int i = 0; i < ROW; i++)                  // taking the input of entries of matrix
    {
        for (int j = 0; j < COL; j++)              //for loop reciting and taking values one by one
        {
            int x;
            scanf("%d",&x);
            arr[i][j]=x;
        }
    }
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
            ans[i][j] = arr[i][j];
    }
    solve(arr, ans);
    printf("Output image with labelled components : \n");

    for(int i=0;i<ROW;i++){
        for(int j=0;j<COL;j++){
            printf("%d",ans[i][j]);               //printing output image with labelled connected components
        }
        printf("\n");
    }
    return 0;
}
