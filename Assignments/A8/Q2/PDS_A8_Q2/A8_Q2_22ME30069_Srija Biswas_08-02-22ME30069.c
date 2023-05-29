#include<stdio.h>
struct multi
{
    int m;
    int n;
    int** ptr;
}a,b,c;

int main()
{
    int i,j;
    printf("Enter rows of 1st matrix:\n");
    scanf("%d",&a.m);
    printf("Enter columns of 1st matrix:\n");
    scanf("%d",&a.n);
    printf("Enter rows of 2nd matrix:\n");
    scanf("%d",&b.m);
    printf("Enter rows of 2nd matrix:\n");
    scanf("%d",&b.n);
    a.ptr=(int**)malloc(a.m*sizeof(int*));
    for(int i=0;i<a.m;i++)
    {
        a.ptr[i]=(int*)malloc(a.n*(sizeof(int)));
    }
    b.ptr=(int**)malloc(b.m*sizeof(int*));
    for(int i=0;i<b.m;i++)
    {
        b.ptr[i]=(int*)malloc(b.n*(sizeof(int)));
    }
    c.ptr=(int**)malloc(a.m*sizeof(int*));
    for(int i=0;i<a.m;i++)
    {
        c.ptr[i]=(int*)malloc(b.n*(sizeof(int)));
    }
    for(i=0;i<a.m;i++)
    {
        for(j=0;j<a.n;j++)
        {
            scanf("%d ",&a.ptr[i][j]);
        }
    }
    for(i=0;i<b.m;i++)
    {
        for(j=0;j<b.n;j++)
        {
            scanf("%d ",&b.ptr[i][j]);
        }
    }
    printf("Matrix 1:\n");
     for(i=0;i<a.m;i++)
    {
        for(j=0;j<a.n;j++)
        {
            printf("%d ",a.ptr[i][j]);
        }
        printf("\n");
    }
    printf("Matrix 2:\n");
    for(i=0;i<b.m;i++)
    {
        for(j=0;j<b.n;j++)
        {
            printf("%d ",b.ptr[i][j]);
        }
        printf("\n");
    }
    d=
}
struct multi mult(struct multi a1,struct multi a2)
{
    int i,j;
    for(i=0;i<a.m;i++)
    {
        for(j=0;j<b.n;j++)
        {
          c.ptr[i][j]=a1.ptr[i][j]*a2.ptr[j][i]+a1.ptr[j][i]+a2.ptr[i][j];
        }
    }
    return c;
}



}
