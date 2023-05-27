#include<stdio.h>
#include<stdlib.h>
typedef struct mm{
int **p ;
} matrix ;
matrix mul(matrix a,matrix b,int ar,int ac,int br,int bc);
int main()
{
 matrix a,b,c ;
 int ar,ac,br,bc,cr,cc ;
 printf("\n enter rows of matrix A:");
 scanf("%d",&ar);
 printf("\n enter colums of matrix A:");
 scanf("%d",&ac);
 printf("\n enter rows of matrix B:");
 scanf("%d",&br);
 printf("\n enter colums of matrix B:");
 scanf("%d",&bc);
 a.p=(int**)malloc(ar*sizeof(int*));
 for(int i=0;i<ar;i++)
    {
      a.p[i]=(int*)malloc(ac*sizeof(int));
    }
  b.p=(int**)malloc(br*sizeof(int*));
 for(int i=0;i<br;i++)
    {
      b.p[i]=(int*)malloc(bc*sizeof(int));
    }
 printf("\n enter values of matrix a");
 for(int i=0;i<ar;i++)
    {
    for(int j=0;j<ac;j++)
        {
         scanf("%d",&a.p[i][j]);
        }
    }
     printf("\n enter values of matrix b");
     for(int i=0;i<br;i++)
    {
    for(int j=0;j<bc;j++)
        {
         scanf("%d",&b.p[i][j]);
        }
    }
         printf("\n MATRIX A \n");
    for(int i=0;i<ar;i++){
    for(int j=0;j<ac;j++)
        {
         printf("%d ",a.p[i][j]);
        }
        printf("\n");
    }
        printf("\n MATRIX B \n");
        for(int i=0;i<br;i++){
    for(int j=0;j<bc;j++)
        {
         printf("%d ",b.p[i][j]);
        }
        printf("\n");
    }
    if(ac==br){
   c=mul(a,b,ar,ac,br,bc);
   printf("\n Resultant Matrix:\n ");
           for(int i=0;i<ar;i++){
    for(int j=0;j<bc;j++)
        {
         printf("%d ",c.p[i][j]);
        }
        printf("\n");
    }} else {
     printf("ERROR Invalid size of matrix multiplication \n");
    }
    return 0 ;
}
matrix mul(matrix a,matrix b,int ar,int ac,int br,int bc)
{
    matrix c;
     c.p=(int**)malloc(ar*sizeof(int*));
 for(int i=0;i<ar;i++)
    {
      c.p[i]=(int*)malloc(bc*sizeof(int));
    }
  for(int i=0;i<ar;i++)
    {
      for(int j=0;j<bc;j++)
        {
            int x=0 ;
          for(int k=0;k<ac;k++)
            {
              x=x+a.p[i][k]*b.p[k][j];
            }
            c.p[i][j]=x;
        }
    }
    return c ;
}
