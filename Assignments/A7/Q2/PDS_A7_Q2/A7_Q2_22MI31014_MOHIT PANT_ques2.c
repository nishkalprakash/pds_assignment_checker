#include<stdio.h>
#include<stdlib.h>

int main(){
    int x,y,z,p;
    int **a;
    int **b;
    int **c;
    int **d;
    int **e;
    scanf("%d%d%d",&x,&y,&z);
    if(x<y && x<z) p=x;
    if(y<x && y<z) p=y;
    if(z<y && z<x) p=z;
    a = (int **)malloc(x * sizeof(int *));
    for (int i=0; i<x; i++){
        a[i] = (int *)malloc(y * sizeof(int));
    }
    d = (int **)malloc(x * sizeof(int *));
    for (int i=0; i<x; i++){
        d[i] = (int *)malloc(y * sizeof(int));
    }
    b = (int **)malloc(y * sizeof(int *));
    for (int i=0; i<y; i++){
        b[i] = (int *)malloc(z * sizeof(int));
    }
    e = (int **)malloc(y * sizeof(int *));
    for (int i=0; i<y; i++){
        e[i] = (int *)malloc(z * sizeof(int));
    }
    c = (int **)malloc(x * sizeof(int *));
    for (int i=0; i<x; i++){
        c[i] = (int *)malloc(z * sizeof(int));
    }


    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){

            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){

            d[i][j]=a[i][j];
        }
    }



    for(int i=0;i<y;i++){
        for(int j=0;j<z;j++){
            scanf("%d",&b[i][j]);
        }
    }
    for(int i=0;i<y;i++){
        for(int j=0;j<z;j++){

            e[i][j]=b[i][j];
        }
    }
    printf("Matrix A\n");
    for(int i=0;i<x;i++){

        for(int j=0;j<y;j++){
            if(i<p && j<p){
                    printf("%d   ",b[i][j]);

            }
            else{
                    printf("%d   ",a[i][j]);

            }


        }
        printf("\n");
    }
    printf("\n");



    printf("Matrix B\n");
    for(int i=0;i<y;i++){
        for(int j=0;j<z;j++){

            if(i<p && j<p){
                    printf("%d   ",d[i][j]);

            }
            else{
                    printf("%d   ",e[i][j]);

            }


        }
        printf("\n");
    }

    for(int i=0;i<x;i++){
        for(int j=0;j<z;j++){
                int s=0;


                for(int m=0;m<x;m++){
                    for(int n=0;n<z;n++){
                            s+=a[m][n]*b[n][m];

        }



        }
        c[i][j]=s;
    }
    }
    printf("Matrix c\n");
    for(int i=0;i<x;i++){

        for(int j=0;j<z;j++){
            printf("%d  ",c[i][j]);


        }
        printf("\n");
    }




return 0;
}
