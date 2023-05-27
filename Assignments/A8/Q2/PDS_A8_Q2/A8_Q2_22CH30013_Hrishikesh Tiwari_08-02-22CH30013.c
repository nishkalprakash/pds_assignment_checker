#include<stdio.h>
#include<stdlib.h>

struct matrix
{ int m ;
  int n ;
};

typedef struct matrix matrix ;

int main()
{
    matrix x_a , x_b ;
    // no . of rows = x.m , no . of columns = x.n //
    int ** a  , **b ;
    int ** c ;
    printf("Enter the number of rows for matrix A :") ;
    scanf("%d" , &x_a.m) ;
    printf("Enter the number of columns for matrix A :") ;
    scanf("%d" , &x_a.n) ;

    printf("Enter the number of rows for matrix B :") ;
    scanf("%d" , &x_b.m) ;
    printf("Enter the number of columns for matrix B:") ;
    scanf("%d" , &x_b.n) ;

    a = (int**)malloc(x_a.m * sizeof(int*)) ;

    for(int i= 0 ; i<x_a.m ; i+=1)
    {
        a[i] = (int*) malloc(x_a.n * sizeof(int)) ;
    }


     b = (int**)malloc(x_b.m * sizeof(int*)) ;

    for(int i= 0 ; i<x_b.m ; i+=1)
    {
        a[i] = (int*) malloc(x_b.n * sizeof(int)) ;
    }



    printf("Enter the values for Matrix A :\n") ;

    for(int i =0 ; i<x_a.m ; i++)
    {
        for(int j =0 ; j<x_a.n ; j++)
        {
             scanf("%d" ,  (  a +  (i*(x_a.n)+j ) ) ) ;
        }
    }


    printf("Enter the values for Matrix B :\n") ;

    for(int i =0 ; i<x_b.m ; i++)
    {
        for(int j =0 ; j<x_b.n ; j++)
        {
            scanf("%d" , (b + ( i*(x_b.n) + j )) );
        }
    }

   printf("Matrices before multiplication : \n") ;
   printf("Matrix A :\n") ;

     for(int i =0 ; i<x_a.m ; i++)
    {
        for(int j =0 ; j<x_a.n ; j++)
        {
            printf("%d " ,   *(  a +  (i*(x_a.n)+j ) )) ;
        }
        printf("\n") ;
    }

printf("\n") ;

       printf("Matrix B :\n") ;

     for(int i =0 ; i<x_b.m ; i++)
    {
        for(int j =0 ; j<x_b.n ; j++)
        {
            printf("%d " ,  *(  b +  (i*(x_b.n)+j ) ) ;
        }
        printf("\n") ;
    }

printf("\n") ;

// code for matrix multiplication //

for(int i= 0 ; i<x_a.m ; i++)
{
    for(int j =0 ; j<x_a.n ; j++)
    {
        for(int k =0 ; k<x_a.n ; k++)
        {
            c[i][j] = c[i][j] + a[i][k] * b[k][j] ;
        }
    }
}

for(int i= 0 ; i<x_a.m ; i++)
{
    for(int j =0 ; j<x_a.n ; j++)
    {
        printf("%d ",c[i][j]) ;
    }
    printf("\n") ;
}


    return 0 ;
}
