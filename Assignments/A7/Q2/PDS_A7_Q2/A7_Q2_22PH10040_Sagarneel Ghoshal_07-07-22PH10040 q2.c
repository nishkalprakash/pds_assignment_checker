/*
* Section 2
* Roll No.: 22PH10040
* Name: Sagarneel Ghoshal
* Assignment 7
* Description: Perfect number checker
*/


#include<stdio.h>
#include<stdlib.h>


int main(){
    int **A,**B,**C;
    int m,n,p,i,j,temp;


    printf("Enter the value of m:");
    scanf("%d",&m);

    printf("Enter the value of n:");
    scanf("%d",&n);

    printf("Enter the value of p:");
    scanf("%d",&p);



    A = (int **) calloc(m, sizeof(int*));

    for (int i = 0; i < m; i++){
        A[i] = (int *) calloc(n, sizeof(int));

    }

    B = (int **) calloc(n, sizeof(int*));

    for (int i = 0; i < n; i++){
        B[i] = (int *) calloc(p, sizeof(int));

    }

    C = (int **) calloc(m, sizeof(int*));

    for (int i = 0; i < m; i++){
        C[i] = (int *) calloc(p, sizeof(int));

    }


    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("Enter element %d %d of A: ",i,j);
            scanf("%d",&A[i][j]);
        }
    }

    for(i=0;i<n;i++){
        for(j=0;j<p;j++){
            printf("Enter element %d %d of B: ",i,j);
            scanf("%d",&B[i][j]);
        }
    }

    printf("\n");



    if(m<=n){
        if(n<=p){
            for(i=0;i<m;i++){
                for(j=0;j<n;j++){
                    temp=A[i][j];
                    A[i][j]=B[i][j];
                    B[i][j]=temp;
                }
            }
        }
        else{
                for(i=0;i<m;i++){
                for(j=0;j<p;j++){
                    temp=A[i][j];
                    A[i][j]=B[i][j];
                    B[i][j]=temp;
                }
            }

        }
    }

    else{
        if(n<=p){
            for(i=0;i<n;i++){
                for(j=0;j<n;j++){
                    temp=A[i][j];
                    A[i][j]=B[i][j];
                    B[i][j]=temp;
                }
            }
        }
        else{
                for(i=0;i<n;i++){
                for(j=0;j<p;j++){
                    temp=A[i][j];
                    A[i][j]=B[i][j];
                    B[i][j]=temp;
                }
            }

        }
    }



    printf("\n");
    printf("Matrix A:\n");


    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d  ",A[i][j]);
        }
        printf("\n");
    }

    printf("\n");
    printf("\n");
    printf("Matrix B:\n");


    for(i=0;i<n;i++){
        for(j=0;j<p;j++){
            printf("%d  ",B[i][j]);
        }
         printf("\n");
    }


    for(i=0;i<m;i++){
            for(j=0;j<p;j++){
                int elem=0;
                for(int k=0;k<n;k++){
                    int elem=A[i][k]*B[k][j];
                    C[i][j]+=elem;
                }
            }

    }

    printf("\n");
    printf("\n");
    printf("Matrix C:\n");


    for(i=0;i<m;i++){
        for(j=0;j<p;j++){
            printf("%d  ",C[i][j]);
        }
         printf("\n");
    }






return 0;

}
