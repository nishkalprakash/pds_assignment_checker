#include<stdio.h>
int main()
{
    int r,c,m,o ,n,p;
    printf("enter the no. of rows for matrix A : \n");
    scanf("%d",&m );
    printf("enter the no. of columns for matrix A : \n");
    scanf("%d",&n);
    printf("enter the no. of rows for matrix B: \n");
    scanf("%d",&o );
    printf("enter the no. of columns for matrix B : \n");
    scanf("%d",&p);
    int A[m][n];
    int B[o][p];

   printf("enter elements of A\n");
   for(r = 1;r<=m;r++){
    for(c=1;c<=n;c++){
        scanf("%d", &A[r][c]);

    }
   }
   printf("enter elements of B\n");
   for(r = 1;r<=n;r++){
    for(c=1;c<=p;c++){
        scanf("%d", &A[r][c]);

    }
   }
   printf("matrix A :\n");
    for(r = 1;r<=m;r++){
    for(c=1;c<=n;c++){
        printf("%d ", A[r][c]);

    }
    printf("\n");
   }

   printf("matrix B:\n");
    for(r = 1;r<=n;r++){
    for(c=1;c<=p;c++){
        printf("%d ", A[r][c]);

    }
    printf("\n");
}   }