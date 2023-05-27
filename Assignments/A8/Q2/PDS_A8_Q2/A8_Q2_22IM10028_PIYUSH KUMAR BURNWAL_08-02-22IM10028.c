#include <stdio.h>
#include <stdlib.h>

struct matrix{
    int m,n;
    int **ptr;
};

int main()
{
    struct matrix A,B;

    printf("Enter the number of rows for matrix A:");
    scanf("%d",&A.m);
    printf("Enter the number of columns for matrix A");
    scanf("%d",&A.n);
    A.ptr=(int **)malloc((A.m)*sizeof(int *));
    for(int i=0;i<(A.m);i++)
        A.ptr[i]=(int *)malloc((A.n)*sizeof(int));

    printf("Enter the number of rows for matrix B:");
    scanf("%d",&B.m);
    printf("Enter the number of columns for matrix B");
    scanf("%d",&B.n);
    B.ptr=(int **) malloc((B.m)*sizeof(int *));
    for(int i=0;i<(B.m);i++)
        B.ptr[i]=(int *)malloc((B.n)*sizeof(int));
    printf("Enter the values for matrix A:");
    for(int i=0;i<(A.m);i++)
    {
        for(int j=0;j<(A.n);j++)
        {
            scanf("%d",(*(A.ptr+i)+j));
        }
    }
    for(int i=0;i<(B.m);i++)
    {
        for(int j=0;j<(B.n);j++)
        {
            scanf("%d",(*(B.ptr+i)+j));
        }
    }
    printf("Matrices before\n");
    printf("Matrix A\n");
    for(int i=0;i<(A.m);i++)
    {
        for(int j=0;j<(A.n);j++)
        {
            printf("%d",(*(A.ptr+i)+j));
        }
    }
    printf("Matrix B\n");
     for(int i=0;i<(B.m);i++)
    {
        for(int j=0;j<(B.n);j++)
        {
            printf("%d",(*(B.ptr+i)+j));
        }
    }


}
