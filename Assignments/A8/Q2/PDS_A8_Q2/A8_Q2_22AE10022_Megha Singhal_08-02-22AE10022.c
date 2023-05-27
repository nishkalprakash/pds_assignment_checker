#include<stdio.h>
#include<math.h>
int main()
{
    int m,n,s,t,**ptr,i,j;
    printf("Enter No. of rows and coloumns of matrix A:");
    scanf("%d %d",&m,&n);
    // (a)
    struct matrix
    {
        int *r=malloc(m*sizeof(int));
        int *c=malloc(n*sizeof(int)) ;
    }p,q;
    // (b)
    *ptr=(int**) malloc(m*sizeof(int*));
    for(i=0,i<m;i++)
    {
         ptr[i]=(int*)malloc(n*sizeof(int));
    }
     printf("Enter No. of rows and coloumns of matrix B:");
    scanf("%d %d",&s,&t);
    *ptr1=(int**) malloc(m*sizeof(int*));
    for(i=0,i<m;i++)
    {
         ptr[i]=(int*)malloc(n*sizeof(int));
    }
    printf("Enter value of matrix A:");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&ptr[i][j]);
        }
    }
    printf("Enter value of matrix A:");
    for(i=0;i<s;i++)
    {
        for(j=0;j<t;j++)
        {
            scanf("%d",&ptr[i][j]);
        }
    }
    return 0;

}

