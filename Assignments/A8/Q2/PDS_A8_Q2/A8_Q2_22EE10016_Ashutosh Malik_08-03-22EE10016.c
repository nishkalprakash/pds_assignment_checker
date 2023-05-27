#include<stdio.h>

int main(){
    int m,n;
    printf("Write the number of rows and columns in your matrix");
    printf("Rows");
    scanf("%d",&m);
    printf("Columns");
    scanf("%d",&n);
    int **p1;
    *p1 = int( **) malloc(m*sizeof(int*));
     int i,j;
     for (i = 0; i<m; i++){
        p1[i] = int( *)malloc(n*sizeof(int))
    }

    for (i = 0; i<m; i++){
        for(j = 0; j<n; j++){
            scanf("%d",p1[i][j]);
            printf("\n");
        }
    }
int x,y;
    printf("Write the number of rows and columns in your matrix");
    printf("Rows");
    scanf("%d",&x);
    printf("Columns");
    scanf("%d",&y);
    int **p1;
    *p1 = int( **) malloc(x*sizeof(int*));
     int i,j;
     for (i = 0; i<m; i++){
        p1[i] = int( *)malloc(y*sizeof(int))
    }

    for (i = 0; i<x; i++){
        for(j = 0; j<y; j++){
            scanf("%d",p1[i][j]);
            printf("\n");
        }
    }






return 0;

}
