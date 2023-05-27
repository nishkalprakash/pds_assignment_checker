#include<stdio.h>
#include<stdlib.h>
#include<math.h>

typedef struct matrix
{
    int a;
    int b;
    int**ptr;


} sa;

int main()
{   sa x,y;

    int m,n,o,p;

    printf("no of row in matrix x \n");
    scanf("%d",&x.a);
    printf("no of columns in matrix x \n");
    scanf("%d",&x.b);
    printf("no of row in matrix y \n");
    scanf("%d",&y.a);
    printf("no of columns in matrix y \n");
    scanf("%d",&y.b);


   x.ptr=(int**)malloc(m*sizeof(int));
   for(int i=0;i<m;i++)
   {
       x.ptr[i]=(int*)malloc(n*sizeof(int));
   }

    printf("enter the value of element in matrix a");

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&sa.prt[i][j]);
        }
    }

   return 0;
}





