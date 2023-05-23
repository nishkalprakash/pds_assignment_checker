#include<stdio.h>
#include<stdlib.h>

void read matrix (int**matrix,int m,int n)

{
    printf("Enter the values for the matrix:");
    for(int i = 0; i<m; i++)
    {
        for(int j = 0; j<n ; j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }
}
   void matrix (int**matrixA,int**matrixB,int m, int n)
{
    for(int i=0; i<m; i++)
        {for(int j=0; j<m; j++)
    {
        int temp = matrixA[i][j];
        matrixA[i][j] = matrixB[i][j];
        matrixB[i][j] = temp;
    }
  }
}

int**multiplematrices (int**matrixA,int**matrixB,int m,int n, int p);
{
    int**matrixB = (int**)calloc(m,size of (int**));
    for(int i = 0; i<m; i++)
    {
        matxix c[i]=(int*)calloc (p,size of (int**));
        for(int j=0; j<m; j++)
        {
            matrix c[i][j] = 0
            for(int k=0; k<m; k++)
            {
                matrix c[i][j]+=matrixA[i]*matrixB[k][j];
            }
        }
    }
    return matrixc;

}
