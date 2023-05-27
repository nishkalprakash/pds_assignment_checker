#include<stdio.h>
int m,n1,n2,p;
struct
{
int **ptr;
int **ptr1;
int **ptr2;
}mat;
int mult(int **pt,int **pt1,int **d)
{
    int i,j,k;
    for(i=0;i<m;i++)
    {
        for(j=0;j<p;j++)
        {
         d[i][j]=0;
         for(k=0;k<n1;k++)
         {
             d[i][j]+=pt[i][k]*pt1[k][j];
         }
        }
    }
    return;
}
void read(int **c,int m,int n)
{
    int i,j;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&c[i][j]);
        }
    }
}
int main()
{
    int i,j;
    printf("Enter no of rows in A:");
    scanf("%d",&m);
    printf("Enter no of columns in A:");
    scanf("%d",&n1);
    printf("Enter no of rows in B:");
    scanf("%d",&n2);
    printf("Enter no of columns in B:");
    scanf("%d",&p);
     mat.ptr=(int **)calloc(m,sizeof(int*));
    for(i=0;i<m;i++)
    {
        mat.ptr[i]=(int *)calloc(n1,sizeof(int));
    }
    mat.ptr1=(int **)calloc(n2,sizeof(int*));
    for(i=0;i<n2;i++)
    {
        mat.ptr1[i]=(int *)calloc(p,sizeof(int));
    }
    printf("Enter first mxn matrix:");
    read(mat.ptr,m,n1);
    printf("Enter second nxp matrix:");
    read(mat.ptr1,n2,p);
    printf("Matrix A:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n1;j++)
        {
            printf("%d ",mat.ptr[i][j]);
        }
        printf("\n");
    }
    printf("Matrix B:\n");
    for(i=0;i<n2;i++)
    {
        for(j=0;j<p;j++)
        {
            printf("%d ",mat.ptr1[i][j]);
        }
        printf("\n");
    }
    if(n1!=n2)
    {
        printf("Error Invalid matrix sizes for multiplication!");
        return;
    }
    mat.ptr2=(int **)calloc(m,sizeof(int*));
    for(i=0;i<m;i++)
    {
        mat.ptr2[i]=(int *)calloc(p,sizeof(int));
    }
    mult(mat.ptr,mat.ptr1,mat.ptr2);
    printf("matrix after mult:");
    for(i=0;i<m;i++)
    {
        for(j=0;j<p;j++)
        {
            printf("%d ",mat.ptr2[i][j]);
        }
        printf("\n");
    }
    return 0;
}
