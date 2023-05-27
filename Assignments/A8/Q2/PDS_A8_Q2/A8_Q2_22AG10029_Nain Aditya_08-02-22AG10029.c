#include<stdio.h>
#include<math.h>
#include<stdlib.h>
/*NAME- NAIN ADITYA
SECTION 2 | ROLL - 22AG10029
LAB - 8 QUESTION 2*/
typedef struct matrix{
int **ptr;
}matrix;
int main(){
    matrix a , b;int n1,n2,n3,n4;
    printf("enter the no. of rows of  matrix A\n");
    scanf("%d",&n1);
    printf("enter the no. of cloumns of  matrix A\n");
    scanf("%d",&n2);
    a.ptr=(int**)malloc(n1*sizeof(int*));
    for (int i =0;i<n1;i++) a.ptr[i]=(int*)malloc(n2*sizeof(int));
    printf("enter the no. of rows of  matrix B\n");
    scanf("%d",&n3);
    printf("enter the no. of cloumns of  matrix B\n");
    scanf("%d",&n4);
    b.ptr=(int**)malloc(n3*sizeof(int*));
    for (int i =0;i<n3;i++) b.ptr[i]=(int*)malloc(n4*sizeof(int));
    printf("enter the matrix A\n");
    for (int i =0;i<n1;i++){
        for (int j =0;j<n2;j++)scanf("%d",&a.ptr[i][j]);
    }
        printf("enter the matrix B\n");
    for (int i =0;i<n3;i++){
        for (int j =0;j<n4;j++)scanf("%d",&b.ptr[i][j]);
    }printf("\nMatrix A :\n");
    for (int i=0;i<n1;i++){
        for (int j=0;j<n2;j++)printf("%d ",a.ptr[i][j]);
        printf("\n");
    }printf("\nMatrix b :\n");
    for (int i=0;i<n3;i++){
        for (int j=0;j<n4;j++)printf("%d ",b.ptr[i][j]);
        printf("\n");
    }

    if (n2!=n3)printf("\nInvalid matrix size for multiplication\n");
    else {
        printf("Matrices after Multiplication :\n");
        printf("\nMatrix A :\n");
        for (int i=0;i<n1;i++){
        for (int j=0;j<n2;j++)printf("%d ",a.ptr[i][j]);
        printf("\n");}
        printf("\nMatrix b :\n");
        for (int i=0;i<n3;i++){
        for (int j=0;j<n4;j++)printf("%d ",b.ptr[i][j]);
        printf("\n");}
        matrix c;
        c.ptr=(int**)malloc(n1*sizeof(int*));
        for (int i =0;i<n1;i++) {c.ptr[i]=(int*)malloc(n4*sizeof(int));}
        for (int i=0;i<n1;i++){
            for (int j=0;j<n4;j++){
                int sum=0;
                for (int i1=0;i1<n3;i1++){
                    sum+=a.ptr[i][i1]*b.ptr[i1][j];
                }
                c.ptr[i][j]=sum;
                }
                }

        printf("\nResultant Matrix :\n");
        for (int i=0;i<n1;i++){
        for (int j=0;j<n4;j++)printf("%d ",c.ptr[i][j]);
        printf("\n");}
        }
 return 0;
}
