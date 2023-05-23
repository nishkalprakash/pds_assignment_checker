/*
* Section 2
* Roll No : 22HS10038
* Name : Nayan Chauhan
* Assignment No : 7
* Description :
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int m,n,p, subr, subc;
    scanf("%d %d %d", &m, &n, &p);
    printf("m = %d", m);
    int **a, **b, **c;
    a = (int **)calloc(m, sizeof(int*));
    for(int i=0;i<m;i++){
        a[i]= (int *)calloc(n, sizeof(int));
    }
    b = (int **)calloc(n, sizeof(int*));
    for(int i=0;i<n;i++){
        b[i]= (int *)calloc(p, sizeof(int));
    }
    c = (int **)calloc(m, sizeof(int*));
    for(int i=0;i<m;i++){
        c[i]= (int *)calloc(p, sizeof(int));
    }
    for(int i=0; i<m;i++){
        for(int j=0; j<n; j++){
            scanf("%d", &a[i][j]);
        }
    }
    printf("m = %d", m);
    for(int k=0; k<n;k++){
        for(int l=0; l<p; l++){
            scanf("%d", &b[k][l]);
        }
    }
    printf("m = %d\n", m);
    int temp;
    if(m>=n) subr = n;
    else subr = m;
    if(p>=n) subc = n;
    else subc = p;
    for(int i=0; i<subr;i++){
        for(int j=0; j<subc; j++){
            temp =a[i][j];
            a[i][j]=b[i][j];
            b[i][j]=temp;
    }
    }

    printf("Matrix A:-\n");
    for(int i=0; i<m;i++){
        for(int j=0; j<n; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
        }
        printf("Matrix B:-\n");
    for(int i=0; i<n;i++){
        for(int j=0; j<p; j++){
            printf("%d ", b[i][j]);
        }
        printf("\n");
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<p;j++){
                for(int k=0;k<n;k++){
                    c[i][j]+=a[i][k]*b[k][j];
                }
            }
        }
        printf("Matrix C:-")
        for(int i=0; i<m;i++){
        for(int j=0; j<p; j++){
            printf("%d ", c[i][j]);
        }
        printf("\n");
        }

}

