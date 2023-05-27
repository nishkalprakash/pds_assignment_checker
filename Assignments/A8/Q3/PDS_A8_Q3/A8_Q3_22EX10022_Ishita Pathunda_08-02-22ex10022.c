#include<stdio.h>
#include<stdlib.h>
typedef struct matrix{
    int A[10][10];
}M;
int main(){
    int a,b,c,d,n;
    printf("enter the number of rows for matrix A:");
    scanf("%d",&a);
    printf("enter the number of columns for matrix A:");
    scanf("%d",&b);
    printf("enter the number of rows for matrix B:");
    scanf("%d",&c);
    printf("enter the number of rows for matrix B:");
    scanf("%d",&d);
    return 0;
}
M *read M(){
    int n,i;
    M *p=(M*)(malloc(1*sizeof(M)));
    scanf("%d",&n);
}
