#include<stdio.h>
#include<stdlib.h>
int main()
{
  int n1,n2,n3;
  int **a,**b,**c ;
  scanf("%d%d%d",&n1,&n2,&n3);
  a=(int**)calloc(n1,sizeof(int*));
  for(int i=0;i<n1;i++)
    {
      a[i]=(int*)calloc(n2,sizeof(int));
    }
    b=(int**)calloc(n2,sizeof(int*));
  for(int i=0;i<n2;i++)
    {
      b[i]=(int*)calloc(n3,sizeof(int));
    }
        c=(int**)calloc(n1,sizeof(int*));
  for(int i=0;i<n1;i++)
    {
      c[i]=(int*)calloc(n3,sizeof(int));
    }
    for(int i=0;i<n1;i++)
        {
          for(int j=0;j<n2;j++)
            {
              scanf("%d",&a[i][j]);
            }
        }
            for(int i=0;i<n2;i++)
        {
          for(int j=0;j<n3;j++)
            {
              scanf("%d",&b[i][j]);
            }
        }
        int n=n2,m=n3 ;
        if(n1<n2)
            {
              n=n1;
            }        if(n2<n3)
            {
              m=n2;
            }
 for(int i=0;i<n;i++)
    {
      for(int j=0;j<m;j++)
        {
          int s=a[i][j] ;
         a[i][j]=b[i][j];
         b[i][j]=s ;
        }
    }
    printf("MATRIX A:- \n");
        for(int i=0;i<n1;i++)
        {
          for(int j=0;j<n2;j++)
            {
              printf("%d ",a[i][j]);
            }
            printf("\n");
        }
            printf("MATRIX B:- \n");
        for(int i=0;i<n2;i++)
        {
          for(int j=0;j<n3;j++)
            {
              printf("%d ",b[i][j]);
            }
            printf("\n");
        }
        printf("\nMATRIX C:-\n");
        for(int i=0;i<n1;i++)
            {
              for(int j=0;j<n3;j++)
                {
                    int h=0 ;
                 for(int k=0;k<n2;k++)
                    {
                     h=h+a[i][k]*b[k][j] ;
                    }
                 c[i][j]=h ;
                }
            }

        for(int i=0;i<n1;i++)
        {
          for(int j=0;j<n3;j++)
            {
              printf("%d ",c[i][j]);
            }
            printf("\n");
        }
}

