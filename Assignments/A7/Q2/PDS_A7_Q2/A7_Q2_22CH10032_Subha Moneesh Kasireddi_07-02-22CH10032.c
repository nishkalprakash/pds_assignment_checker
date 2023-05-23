#include<stdio.h>
void readmatrix (int A[][10],int x, int y);
void printmatrix (int A[][10],int x, int y);
void swapmatrix (int A[][10],int B[][10],int x, int y, int z);
void multiplymat(int A[][10],int B[][10],int C[][10], int x, int y, int z);

void readmatrix (int A[][10],int x, int y)
{
    int i,j;
    for (i=0; i<x; i++)
        for (j=0; j<y; j++)
            scanf("%d",&A[i][j]);
}

void printmatrix (int A[][10],int x, int y)
{
    int i,j;
    printf("\n");
    for (i=0; i<x; i++)
    {
        for (j=0; j<y; j++)
            printf("%3d", A[i][j]);
        printf("\n");
    }
}

void swapmatrix (int A[][10],int B[][10],int x, int y, int z)
{

}

void multiplymat(int A[][10],int B[][10],int C[][10], int x, int y, int z)
{
    int i,j;
    for (i=0; i<x; i++)
        for (j=0; j<z; j++)
        {
            C[i][j] = A[i][j]*B[j][i];
        }
}

int main()
{
    int a[10][10], b[10][10], c[10][10],l,m,n;
    scanf("%d %d %d",&l,&m,&n);
    readmatrix(a,l,m);
    readmatrix(b,m,n);
    swapmatrix(a,b,l,m,n);
    printmatrix(a,l,m);
    printmatrix(b,m,n);
    multiplymat(a,b,c,l,m,n);
    printmatrix(c,l,n);
    return 0;
}
