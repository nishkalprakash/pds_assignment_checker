
#include<stdlib.h>
#include <stdio.h>
int value(int**ker,int**mat,int m,int n,int d,int i,int j)
{
   int s=0;
   int k,l;
   for(k=j;k<j+d;k++)
   {
       for(l=i;l<i+d;l++)
       {
           s+=ker[l-i][k-j]*mat[l][k];
       }
   }
   return(s);
}
void outputmat(int**ker,int**mat,int m,int n,int d)
{
    int i,j;
    for(i=0;i<m-d+1;i++)
    {
     for(j=0;j<n-d+1;j++)
     {
      printf("%d ", value(ker,mat,m, n, d, i, j))  ;
     }
     printf("\n");
    }
}

int main()
{
    int**mat,i,j,m,n,d,**ker;
    printf("enter the dimension of the input image matrix");
scanf("%d %d",&m,&n);
 mat=(int**)malloc(sizeof(int*)*m);
    for(i=0;i<m;i++)
    {
        mat[i]=(int*)malloc(n*sizeof(int));
        for(j=0;j<n;j++)
        {
          scanf("%d",&mat[i][j]) ;
        }
        printf("\n");
    }
    printf("enter the kernel size");
    scanf("%d",&d);
     ker=(int**)malloc(sizeof(int*)*d);
    for(i=0;i<d;i++)
    {
        ker[i]=(int*)malloc(d*sizeof(int));
        for(j=0;j<d;j++)
        {
          scanf("%d",&ker[i][j]) ;
        }
        printf("\n");
    }
    outputmat(ker,mat, m, n, d);
    
    return 0;
}
