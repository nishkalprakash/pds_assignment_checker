#include <stdio.h>
#include<stdlib.h>//header files
void printMatrix(int **A,int x,int y)//function to print any matrix
{
    int i,j;
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int i,j,k,m,n,p,mini1,mini2,temp,**ptr1,**ptr2,**ptr3;
    printf("Enter the value of m,n and p");
    scanf("%d%d%d",&m,&n,&p);//dynamically getting size of A and B
    printf("\n\n\n");
    ptr1=(int **) calloc(m,sizeof(int *));
    for(i=0;i<m;i++)
        ptr1[i]=(int *) calloc(n,sizeof(int));//dynamically allocating size of A
    ptr2=(int **) calloc(n,sizeof(int *));
    for(i=0;i<n;i++)
        ptr2[i]=(int *) calloc(p,sizeof(int));//dynamically allocating size of B
    for(i=0;i<m;i++)//accepting elements of matrix A
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&ptr1[i][j]);

        }
    }
    printf("\n\n\n");
    for(i=0;i<n;i++)//accepting elements of matrix B
    {
        for(j=0;j<p;j++)
        {
            scanf("%d",&ptr2[i][j]);

        }
    }
    printf("\n\n\n");
    //iterating over minimum rows and columns for swapping
    if(m<=n)
    {
        mini1=m;
    }
    else{
        mini1=n;
    }
    if(n<=p)
    {
        mini2=n;
    }
    else
    {
        mini2=p;
    }
    printf("%d",mini1);
    printf("%d",mini2);
    for(i=0;i<mini1;i++)
    {
        for(j=0;j<mini2;j++)
        {


            temp=ptr1[i][j];
            ptr1[i][j]=ptr2[i][j];
            ptr2[i][j]=temp;
        }
    }
    printf("Matrix A:-\n");
    printMatrix(ptr1,m,n);
    printf("\n");
    printf("Matrix B:-\n");
    printMatrix(ptr2,n,p);
    ptr3=(int **) calloc(m,sizeof(int *));
    for(i=0;i<m;i++)
        ptr3[i]=(int *) calloc(p,sizeof(int));
        //matrix multiplication of required swapped matrices
    for(i=0;i<m;i++)
    {
        for(j=0;j<p;j++)
        {
            for(k=0;k<n;k++)
            {
                ptr3[i][j]+=ptr1[i][k]*ptr2[k][j];
            }
        }
    }
    printf("Matrix C:-\n");
    printMatrix(ptr3,m,p);







}
