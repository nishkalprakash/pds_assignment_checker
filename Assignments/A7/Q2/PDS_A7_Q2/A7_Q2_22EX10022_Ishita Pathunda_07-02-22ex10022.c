#include<stdio.h>
#include<stdlib.h>
void swapvalues(int *x,int *y){
    int z;
    z=*x;
    *x=*y;
    *y=z;
}
int main(){
    int **A,**B,**C;
    int m,n,p;
    scanf("%d %d",&m,&n);
    A=(int **)calloc(m,sizeof(int*));
    for(int i=0;i<m;i++){
        A[i]=(int*)calloc(n,sizeof(int));
    }
    B=(int **)calloc(p,sizeof(int*));
    for(int i=0;i<m;i++){
        B[i]=(int*)calloc(p,sizeof(int));
    }
    C=(int **)calloc(m,sizeof(int*));
    for(int i=0;i<m;i++){
        C[i]=(int*)calloc(p,sizeof(int));
    }
    for(int j=0;j<m;j++){
        scanf("%d",*(A+j));
    }
    for(int j=0;j<m;j++){
        scanf("%d",*(B+j));
    }
    printf("Matrix A:-\n");
    for(int j=1;j<m;j++){
        printf("%d\n",*(A[j]));
    }
    printf("Matrix B:-\n");
    for(int j=1;j<m;j++){
        printf("%d\n",*(B[j]));
    }
    printf("Matrix C:-\n");
    for(int j=1;j<m;j++){
        printf("%d\n",*(C[j]));
    }


    return 0;
}

