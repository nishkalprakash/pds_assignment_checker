/*
Tushar Kumar
21CH30035
Chemical Engineering
Section 3
Code Blocks
Windows 10
*/

#include <stdio.h>

int main() {

    int row;
    int col;
    printf("Enter the dimension of the input matrix: ");
    scanf("%d",&row);
    scanf("%d",&col);
    printf("Enter elements of matrix: ");
    int mat[row][col];
    for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        scanf("%d",&mat[i][j]);
    }
    }
    int minrow[row];
    int maxrow[row];
    for(int i=0;i<row;i++)
    {
        int tempmax=mat[i][0];
        int tempmin=mat[i][0];
        for(int j=0;j<col;j++)
        {
            if(tempmax<mat[i][j]) tempmax=mat[i][j];
            if(tempmin>mat[i][j]) tempmin=mat[i][j];
        }
        minrow[i]=tempmin;
        maxrow[i]=tempmax;
    }
    int mincol[col];
    int maxcol[col];
    int count=0;
    for(int j=0;j<col;j++)
    {
        int tempmax=mat[0][j];
        int tempmin=mat[0][j];
        for(int i=0;i<row;i++)
        {
            if(tempmax<mat[i][j]) tempmax=mat[i][j];
            if(tempmin>mat[i][j]) tempmin=mat[i][j];
        }
        mincol[j]=tempmin;
        maxcol[j]=tempmax;
    }
    for(int i=0;i<row;i++)
    {
        if(minrow[i]==maxcol[i])
            printf("%d",minrow[i]);
            count+=1;
    }
    for(int i=0;i<row;i++)
    {
        if(maxrow[i]==mincol[i])
            printf("%d",maxrow[i]);
            count+=1;
    }
    if(count==0){
        printf("none");
    }
}
