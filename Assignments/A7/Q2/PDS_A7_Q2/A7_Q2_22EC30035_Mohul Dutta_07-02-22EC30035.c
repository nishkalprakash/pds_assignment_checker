/*
Name - Mohul Dutta
Roll No. - 22EC30035
question 2 - lab 7 - 2d array questions*/
#include<stdio.h>
int swap(int *x,int *y)
{
    int t=*x;
    *x=*y;
    *y=t;
}
int main(){
    int m,n,p;
    scanf("%d%d%d",&m,&n,&p);
    int **A,**B;
    A=(int**)calloc(m,sizeof(int*));
    for(int i=0;i<m;i++)
        A[i]=(int *)calloc(n,sizeof(int));
    B=(int**)calloc(n,sizeof(int*));
    for(int i=0;i<n;i++)
        B[i]=(int *)calloc(p,sizeof(int));
    int k1,k2;
    if(m>n)
        k1=n;
    else
        k1=m;
    if(n>p)
        k2=p;
    else
        k2=n;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&A[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<p;j++){
            scanf("%d",&B[i][j]);
        }
    }
    for(int i=0;i<k1;i++){
        for(int j=0;j<k2;j++){
            swap(&A[i][j],&B[i][j]);
        }
    }
    printf("\nMatrix A:-\n\n");
        for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d\t",A[i][j]);
        }
        printf("\n");
    }
    printf("\nMatrix B:-\n\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<p;j++){
            printf("%d\t",B[i][j]);
        }
        printf("\n");
    }
    int **C;
    C=(int**)calloc(m,sizeof(int*));
    for(int i=0;i<m;i++)
        C[i]=(int *)calloc(p,sizeof(int));
    int s=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<p;j++){
            s=0;
            for(int a1=0;a1<n;a1++)
                s+=A[i][a1]*B[a1][j];
            C[i][j]=s;
        }
    }
        printf("\nMatrix C:-\n\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<p;j++){
            printf("%d\t",C[i][j]);
        }
        printf("\n");
    }
    free(A);
    free(B);
    free(C);
}
