/*
*Section 2
*Name: Sagarneel Ghoshal
*Roll No.:22PH10040
*Assignment-8
*Description- Complex Number
*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int **ptr;

struct matrixdef{
    int **ptr;
    int m;
    int n;
};

/*void matrixform(struct matrixdef ){
    *ptr=(int **)malloc(m*sizeof(int*));
    for(int i=0;i<m;i++){
        ptr[i]=(int *)malloc(n*sizeof(int));
    }
}*/

int main(){
    int m,n,i;
    //int **ptr;
    struct matrixdef m1, m2;
    printf("\nEnter the number of rows: ");
    scanf("%d",&m1.m);
    printf("\nEnter the number of columns: ");
    scanf("%d",&m1.n);

    m1.ptr=(int **)malloc(m1.m*sizeof(int*));
    for(int i=0;i<m;i++){
        m1.ptr[i]=(int *)malloc(m1.n*sizeof(int));
        for(int k=0;k<m1.n;k++) {
            scanf("%d",&m1.ptr[i][k]);
        }
    }



    printf("\nEnter the number of rows: ");
    scanf("%d",&m2.m);
    printf("\nEnter the number of columns: ");
    scanf("%d",&m2.n);

    m2.ptr=(int **)malloc(m2.m*sizeof(int*));
    for(int i=0;i<m;i++){
        m2.ptr[i]=(int *)malloc(m2.n*sizeof(int));
    }


    for(i=0;i<m;i++){
        for(int k=0;k<n;k++){
            printf("\nEnter element at position %d,%d: ",i,k);
            scanf("%d",&m1.ptr[i][k]);

        }
    }




}
