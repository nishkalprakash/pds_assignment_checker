#include<stdio.h>
int main()
{
    int r,c,m ,n,p;
    printf("enter m,n,p:\n");
    scanf("%d %d %d",&m, &n, &p);
    int A[m][n];
    int B[n][p];

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
   }
   int newr,newc;
   if(m<=n)
    newr = m;
   else
        newr=n;
   if(n<=p)
    newc = n;
   else newc = p;
   int J[r][c];
   int K[r][c];
   for(r=1;r<=newr;r++){
    for(c=1;c<=newc;c++){
        J[r][c]=A[r][c];
    }
   }
   for(r=1;r<=newr;r++){
    for(c=1;c<=newc;c++){
        K[r][c]=A[r][c];
    }
   }



}
