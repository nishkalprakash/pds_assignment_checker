
/*
SECTION:2
ROLL NO:22AG10009
NAME:ASHANK KUMAR KUSHWAHA
ASSIGNMENT NO:5
DESCRIPTION:random perfect
*/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
void swap(int *p,int *q){
    int t;
    t=*p;
    *p=*q;
    *q=t;
}
int minimum(int a, int b){
    return ((a>=b)*b+(b>a)*a);
}
int main(){
    int **a,**b,**c,m,n,p,sw_r,sw_c,i,j,i1,j1;
    scanf("%d%d%d",&m,&n,&p);

    a=(int **)calloc(m, sizeof(int));
    for (int i = 0; i < m; i++)
    a[i] = (int *) calloc(n, sizeof(int));

    b=(int **)calloc(n, sizeof(int));
    for (int i = 0; i < n; i++)
    b[i] = (int *) calloc(p, sizeof(int));

    c=(int **)calloc(m, sizeof(int));
    for (int i = 0; i < m; i++)
    c[i] = (int *) calloc(p, sizeof(int));

    for (i=0; i<m; i++){
        for (j=0; j<n; j++){
            scanf ("%d", &a[i][j]);
        }
    }
    for (i=0; i<n; i++){
        for (j=0; j<p; j++){
            scanf ("%d", &b[i][j]);
        }
    }
    sw_r=minimum(m,n);
    sw_c=minimum(n,p);

    for (i=0; i<sw_r; i++){
        for (j=0; j<sw_c; j++){
            swap(&a[i][j],&b[i][j]);
        }
    }
    printf("matrix a\n");
    for (i=0; i<m; i++){
        for (j=0; j<n; j++){
            printf ("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf("matrix b\n");
    for (i=0; i<n; i++){
        for (j=0; j<p; j++){
            printf ("%d ", b[i][j]);
        }
        printf("\n");
    }
    for (i=0,j1=0; i<m,j1<p; i++,j1++){
        for (j=0,i1=0; j<n,i1<n; j++,i1++){
            c[i][j1]=c[i][j1]+((a[i][j])*(b[i1][j1]));
        }
    }
    for (i=0; i<m; i++){
        for (j=0; j<p; j++){
            printf ("%d ",c[i][j]);
        }
        printf("\n");
    }
    free(a);
    free(b);
    free(c);
}

