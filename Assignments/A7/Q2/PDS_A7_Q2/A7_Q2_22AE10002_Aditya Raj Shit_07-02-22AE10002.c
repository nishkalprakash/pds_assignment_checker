/*
*Name-Aditya Raj Shit
*Roll no- 22AE10002
*Section- 2
*Assignment no.- 2
*/

#include<stdio.h>


int main()
{
    int m,n,p;

    printf("Enter the values of : \n");
    printf("m: ");
    scanf("%d",&m);
    printf("n: ");
    scanf("%d",&n);
    printf("p: ");
    scanf("%d",&p);

    int **a;                               //creating first 2D array of order mxn
    a=(int**)calloc(m,sizeof(int*));
    for(int i=0;i<m;i++){
        a[i]=(int*)calloc(n,sizeof(int));
    }

    printf("Enter elements of the array: \n");      //taking array elements from the user.
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }

    /*for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }*/

    int **b;                               //creating second 2D array of order mxn
    b=(int**)calloc(n,sizeof(int*));
    for(int i=0;i<n;i++){
        b[i]=(int*)calloc(p,sizeof(int));
    }

    printf("Enter elements of the array: \n");      //taking array elements from the user.
    for(int i=0;i<n;i++){
        for(int j=0;j<p;j++){
            scanf("%d",&b[i][j]);
        }
    }

    /*for(int i=0;i<n;i++){
        for(int j=0;j<p;j++){
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }*/

    int r,c;
    r=(m>n)?n:m;
    c=(n>p)?p:n;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(a[i][j]==a[i][j]){
                int temp=a[i][j];
                a[i][j]=b[i][j];
                b[i][j]=temp;
            }
        }
    }
    printf("Matrix A: \n");
    for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        printf("%d ",a[i][j]);
    }
    printf("\n");
}
    printf("\nMatrix B: \n");
    for(int i=0;i<n;i++){
        for(int j=0;j<p;j++){
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }



    int **C;                               //creating the matrix which is product of first and second matrix
    C=(int**)calloc(m,sizeof(int*));
    for(int i=0;i<m;i++){
        C[i]=(int*)calloc(p,sizeof(int));
    }
    int v=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<p;j++){
                C[i][j]=0;
                for(int x=0;x<n;x++){
                    C[i][j]+=(a[i][x])*(b[x][j]);

                }

        }
    }

    printf("\nMatrix c: \n");
    for(int i=0;i<m;i++){
        for(int j=0;j<p;j++){
            printf("%d ",C[i][j]);
        }
        printf("\n");
    }
}
