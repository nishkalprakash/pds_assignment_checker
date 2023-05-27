#include<stdio.h>
#include<stdlib.h>
struct matrixpr
{
    int **ptr;
};
int main()
{
    int p,m,n,q;
    printf("enter the no. of rows for matrix A\n");
    scanf("%d",&m);
    printf("enter the no. of columns for matrix A\n");
    scanf("%d",&n);
    printf("enter the no. of rows for matrix B\n");
    scanf("%d",&p);
    printf("enter the no. of columns for matrix B\n");
    scanf("%d",&q);
    struct matrixpr a1,b1,c1,d1;
    return 0;
}
