#include <stdio.h>
#include <string.h>
#include <math.h>

typedef struct arr
{
    int** a;
    int m,n;

} arr;


int main()
{
    arr m1,m2,m3;
    printf("enter the rows of matrix a : ");
    scanf("%d",&m1.m);
    printf("enter the columns of matrix a : ");
    scanf("%d",&m1.n);
    printf("enter the rows of matrix b : ");
    scanf("%d",&m2.m);
    printf("enter the columns of matrix b : ");
    scanf("%d",&m2.n);

    m1.a =  (int **) calloc(m1.m, sizeof(int*));
    for (int i = 0; i < m1.m; i++)
    {
        m1.a[i]  = (int *) calloc(m1.n, sizeof(int));
    }

    m2.a =  (int **) calloc(m2.m, sizeof(int*));
    for (int i = 0; i < m1.m; i++)
    {
        m2.a[i]  = (int *) calloc(m2.n, sizeof(int));
    }

    printf("enter the value  of matrix a: \n");

    for (int i = 0; i < m1.m; i++)
    {
        for (int j = 0; j < m1.n; j++)
        {
            scanf("%d", &m1.a[i][j]);
        }
    }

    printf("enter the value  of matrix b: \n");

    for (int i = 0; i < m2.m; i++)
    {
        for (int j = 0; j < m2.n; j++)
        {
            scanf("%d", &m2.a[i][j]);
        }
    }



    if (m1.n!=m2.m)
    {
        printf("Error : Invalid matrix sizes for multiplication!");
    }
    else
    {
        printf("\n\nMatrix before multiplication: \n");
        printf("Matrix A:\n");

        for (int i = 0; i < m1.m; i++)
        {
            for (int j = 0; j < m1.n; j++)
            {
                printf("%d \t", m1.a[i][j]);
            }
            printf("\n");
        }


        printf("Matrix B:\n");

        for (int i = 0; i < m2.m; i++)
        {
            for (int j = 0; j < m2.n; j++)
            {
                printf("%d \t", m2.a[i][j]);
            }
            printf("\n");
        }

        m3.a =  (int **) calloc(m1.m, sizeof(int*));
        for (int i = 0; i < m1.m; i++)
        {
            m3.a[i]  = (int *) calloc(m2.n, sizeof(int));
        }

        for (int i = 0; i < m1.m; i++)
        {
            for (int j = 0; j < m2.n; j++)
            {
                m3.a[i][j] = 0;
                for (int k = 0; k < m1.n; k++)
                {
                    m3.a[i][j] += m1.a[i][k] * m2.a[k][j];
                }
            }
        }

        printf("Resultant Matrix:\n");

        for (int i = 0; i < m1.m; i++)
        {
            for (int j = 0; j < m2.n; j++)
            {
                printf("%d \t", m3.a[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}
