#include<stdio.h>
/*Name-Sumit Kumar
Roll no.-22CS30056
Section-2
Program-matrix multiplication
*/
int swap(int *m,int *n){
    int t=*m;
    *m=*n;
    *n=t;
}
int main(){
    int m,n,p;
    scanf("%d%d%d",&m,&n,&p);
    int **a=(int **) calloc(m, sizeof(int*));
    for (int i = 0; i < m; i++){
     a[i] = (int *) calloc(n, sizeof(int));
    }
    int **b=(int **) calloc(n, sizeof(int*));
    for (int i = 0; i < n; i++){
     b[i] = (int *) calloc(p, sizeof(int));
    }
    printf("Enter the values for A :\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }

    }
    printf("\n");
     printf("Enter the values for B :\n");
    for(int q=0;q<n;q++){
        for(int w=0;w<p;w++){
            scanf("%d",&a[q][w]);
        }

    }
    printf("\n");
    int x=(m>n?n:m);
    int y=(n>p?p:n);
    //swapping A AND B
    /*for(int t=0;t<x-1;t++){
        for(int k=0;k<y-1;k++){
            swap(&a[t][k],&a[t][k+1]);
        }
    }*/
    printf("Matrix A :\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d ",a[i][j]);
        }printf("\n");

    }
    printf("\n");
     printf("Matrix B :\n");
    for(int q=0;q<n;q++){
        for(int w=0;w<p;w++){
            printf("%d ",a[q][w]);
        }printf("\n");

    }
    int **c=(int **) calloc(m, sizeof(int*));
    for (int i = 0; i < m; i++){
     c[i] = (int *) calloc(p, sizeof(int));
    }
    for(int g=0;g<m;g++){
        for(int l=0;l<p;l++){
                int sum=0;
                for(int s=0;s<n;s++){
               sum+=a[g][s]*b[s][l];
                }
        c[g][l]=sum;
        }
    }
    printf("Matrix C :\n");
    for(int q=0;q<m;q++){
        for(int w=0;w<p;w++){
            printf("%d ",c[q][w]);
        }printf("\n");

    }

}
