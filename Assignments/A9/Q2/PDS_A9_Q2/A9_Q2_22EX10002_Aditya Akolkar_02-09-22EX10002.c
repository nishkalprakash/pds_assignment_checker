#include<stdio.h>
#include<stdlib.h>
#include<math.h>

typedef struct Vector
{
  int *data;
  int dim;
}vector;

void vec_check(vector A, vector B, int n)
{
    int check;
    int num=0, den_a=0, den_b=0;

    for(int i=0; i<n; i++)
    {
        num += A.data[i] * B.data[i];
    }

    for(int i=0; i<n; i++)
    {
        den_a += A.data[i]*A.data[i];
        den_b += B.data[i]*B.data[i];
    }

    if(num ==0)
    {
        printf("Vectors are orthogonal");
        return;
    }
    else if(num == abs(sqrt(den_a*den_b)))
    {
        printf("Vectors are identical");
        return;
    }
    else
    {
        printf("Vectors are neither orthogonal nor identical");
    }
}

int main()
{
    int m, n;


    vector A,B;

    printf("Enter dimension of vector A:");
    scanf("%d", &m);
    A.dim = m;
    A.data = (int*)malloc(A.dim*sizeof(int));
    printf("Enter value for vector A: ");
    for(int i =0; i<m; i++)
    {
        scanf("%d", &A.data[i]);
    }

    printf("Enter dimension of vector B:");
    scanf("%d", &n);
    B.dim = n;
    B.data = (int*)malloc(B.dim*sizeof(int));
    printf("Enter value for vector B: ");
    for(int i =0; i<m; i++)
    {
        scanf("%d", &B.data[i]);
    }

    if(m != n)
    {
        printf("\nVectors are neither identical nor orthogonal");
    }

    else if(m == n)
    {
        vec_check( A, B, n);
    }
}
