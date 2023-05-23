#include<stdio.h>
#include<malloc.h>
int min(int ,int);
int main()
{
    int m,n,p;
    scanf("%d %d %d",&m,&n,&p);
    int **ptr1;
    ptr1 = (int **)calloc(m,sizeof (int *));
    int i;
    for(i=0;i<m;++i)
    {
        ptr1[i]=(int *)calloc(n,sizeof (int));
    }
    int **ptr2;
    ptr2 = (int **)calloc(n,sizeof (int*));
    for(i=0;i<n;++i)
    {
        ptr2[i]=(int *)calloc(p,sizeof (int));
    }
    int j;
    for(i=0;i<m;++i)
    {
        for(j=0;j<n;++j)
        {
            scanf("%d",&ptr1[i][j]);
        }
    }
    for(i=0;i<n;++i)
    {
        for(j=0;j<p;++j)
        {
            scanf("%d",&ptr2[i][j]);
        }
    }
    for(i=0;i<min(m,n);++i)
    {
        for(j=0;j<min(p,n);++j)
        {
            int temp=ptr1[i][j];
            ptr1[i][j]=ptr2[i][j];
            ptr2[i][j]=temp;
        }
    }
    printf("Matrix A:-\n");
    for(i=0;i<m;++i)
    {
        for(j=0;j<n;++j)
        {
            printf("%d ",ptr1[i][j]);
        }
        printf("\n");
    }
    printf("Matrix B:-\n");
    for(i=0;i<n;++i)
    {
        for(j=0;j<p;++j)
        {
            printf("%d ",ptr2[i][j]);
        }
        printf("\n");
    }
    int **ptr3;
    ptr3=(int **)calloc(m,sizeof (int *));
    for(i=0;i<m;++i)
    {
        ptr3[i]=(int *)calloc(p,sizeof (int));
    }
    int k,l;
    for(i=0;i<m;++i)
    {
        for(j=0;j<p;++j)
        {
            for(k=0,l=0;(k<n)&&(l<n);++k,++l)
            {
                ptr3[i][j]=(ptr1[i][k]*ptr2[l][j]) + ptr3[i][j];
            }
        }
    }
    printf("Matrix C:-\n");
    for(i=0;i<m;++i)
    {
        for(j=0;j<p;++j)
        {
            printf("%d ",ptr3[i][j]);
        }
        printf("\n");
    }
    free(ptr1);
    free(ptr2);
    free(ptr3);
    return 0;
}
int min(int a, int b)
{
    if(a>b)
    {
        return b;
    }
    else
    {
        return a;
    }
}
