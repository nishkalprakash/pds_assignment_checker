#include<stdio.h>
#include<math.h>
int main()
{   int m,n,p,**ptr1,**ptr2,**ptr3;
    printf("enter the size of matrices\n");
    scanf("%d%d%d",&m,&n,&p);
    ptr1=(int **)calloc(m,sizeof(int*));//memory allocation is done
    for(int i=0;i<m;i++)
    {
        ptr1[i]=(int *)calloc(n,sizeof(int));
    }
    ptr2=(int **)calloc(n,sizeof(int*));
    for(int i=0;i<n;i++)
    {
        ptr2[i]=(int *)calloc(p,sizeof(int));
    }
    ptr3=(int **)calloc(m,sizeof(int*));
    for(int i=0;i<m;i++)
    {
        ptr2[i]=(int *)calloc(p,sizeof(int));
    }
    int A[m][n], B[n][p], C[m][p];
    for(int i=0;i<m;i++)  //matrix a is initialised
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    for(int i=0;i<n;i++)  //matrix b is initialised
    {
        for(int j=0;j<p;j++)
        {
            scanf("%d",&B[i][j]);
        }
    }
    int minimum(int p,int q)
    {
        if(p<q)return p;        //to swap the matrix
        else return q;
    }
    for(int s=0;s<minimum(m,n);s++)
    {
        for(int r=0;r<minimum(n,p);r++)
        {
            int t=A[s][r];
            A[s][r]=B[s][r];
            B[s][r]=t;
        }
    }
    printf("reversed matrix A is \n");
 for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }


    printf("reversed matrix B is \n");
 for(int i=0;i<n;i++)
    {
        for(int j=0;j<p;j++)
        {
            printf("%d ",B[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<p;j++)
        {
            C[i][j] = 0;
        }
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<p;j++) //obtained matrix C
        {
            for(int h=0;h<n;h++)
            {
                C[i][j]+=A[i][h]*B[h][j];
            }
        }
    }
    printf("matrix C obtained is\n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<p;j++)
        {
            printf("%d ",C[i][j]);
        }
        printf("\n");
    }





    return 0;
}



