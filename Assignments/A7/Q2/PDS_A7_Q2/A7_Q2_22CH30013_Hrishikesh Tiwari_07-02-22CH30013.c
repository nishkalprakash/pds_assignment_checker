#include<stdio.h>
#include<stdlib.h>

void swap( int* x , int* y)
{
   int temp ;
   temp = *x ;
   *x = *y ;
   *y = temp ;
}

int main()
{
    int **A , **B  , **C ;
    int m , n , p , i, j ;
    // input from the user m n //
    scanf("%d",&m) ;
    scanf("%d",&n)  ;
    scanf("%d",&p) ;

   // memory allocation to A //
    A = (int**) calloc(m , sizeof(int*)) ;

    for( int i = 0 ; i< m ; i++)
    {
        A[i] = (int*) calloc(n , sizeof(int)) ;
    }
    //Memory allocation to B //
     B = (int**) calloc(n , sizeof(int*)) ;

    for( int i = 0 ; i<n ; i++)
    {
        B[i] = (int*) calloc(p , sizeof(int)) ;
    }
    //memory allocation to c //
     C = (int**) calloc(m , sizeof(int*)) ;

    for( int i = 0 ; i< m ; i++)
    {
        C[i] = (int*) calloc(p , sizeof(int)) ;
    }

   // Reading A //

   for(i =0 ; i<m ; i++)
   {
       for(j =0 ; j<n ; j++)
       {
           scanf("%d" ,  (  A +  (i*(n))+j ) ) ;
       }
   }

    //Reading B //
    for(i =0 ; i<n ; i++)
   {
       for(j =0 ; j<p ; j++)
       {
           scanf("%d" ,  (  B +  (i*(p))+j ) ) ;
       }
   }

   if( m > n) {

     for(i =0 ; i<n ; i++)
   {
       for(j =0 ; j<n ; j++)
       {
          swap( A + (i*(n)+ j) , B + (i*(n)+j)) ;
       }
       printf("\n") ;
   }
       }


if( m < n) {

     for(i =0 ; i<m ; i++)
      {
       for(j =0 ; j<n ; j++)
       {
          swap(*( A + (i*(p)+ j)) ,*( B + (i*(p)+j) )  )  ;
       }
       printf("\n") ;
      }
    }




if( m == n) {

     for(i =0 ; i<m ; i++)
      {
       for(j =0 ; j<n ; j++)
       {
          swap(*( A + (i*(n)+ j)) ,*( B + (i*(n)+j) )  )  ;
       }
       printf("\n") ;
      }
    }


// Printing A //

   for(i =0 ; i<m ; i++)
   {
       for(j =0 ; j<n ; j++)
       {
           printf("%d " ,  *(  A +  (i*(n))+j ) ) ;
       }
       printf("\n") ;
   }

  // Printing B //

   for(i =0 ; i<n ; i++)
   {
       for(j =0 ; j<p ; j++)
       {
           printf("%d " ,  *(  B +  (i*(p))+j ) ) ;
       }
       printf("\n") ;
   }









    free(A) ;
    free(B) ;
    free(C) ;
    return 0 ;
}
