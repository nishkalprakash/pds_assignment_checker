/*
* Section- 02
* Name - Rahul kumar
* Roll no. - 22GG10032
* Assignment - 08
* Question Number - 02
*/
#include<stdio.h>
#include<stdlib.h>
typedef struct matrix{
    int **ptr;
    int m;
    int n;
} matrix;
int main()
    int m1,m2,n1,n2;
    printf("Enter the no. of rows for matrix A : \n");
    scanf("%d",&m1);
     printf("Enter the no. of columns for matrix A : \n");
    scanf("%d",&n1);
     printf("Enter the no. of rows for matrix B : \n");
    scanf("%d",&m2);
     printf("Enter the no. of columns for matrix B : \n");
    scanf("%d",&n2);
    return 0;
}
