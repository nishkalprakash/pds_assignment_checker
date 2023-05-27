#include<stdio.h>
struct matrix
{
    int row[];
    int column[];
};

int main()
{
    struct matrix A,B;
    printf("Enter the number of rows for matrix A :");
    scanf("%d",&A.row);
    printf("Enter the number of columns for matrix A :");
    scanf("%d",&A.column);
    printf("Enter the number of rows for matrix B :");
    scanf("%d",&B.row);
    printf("Enter the number of columns for matrix B :");
    scanf("%d",&B.column);

}
