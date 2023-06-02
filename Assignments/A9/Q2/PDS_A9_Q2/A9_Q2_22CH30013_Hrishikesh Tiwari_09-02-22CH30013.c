#include<stdio.h>
#include<stdlib.h>
#include<math.h>
struct lab{
float * a ;
};
 typedef struct lab vector ;

 int my_ortho( vector X , vector Y , int n , int m)
 {
     float Sum = 0;
     if( n!=m) return -1 ;
     if( n == m)
     {
         for(int i=0 ; i<m ; i++)
         {
             Sum  += X.a[i] * Y.a[i] ;
         }
     }
     if( Sum == 0) return 1 ;
     else return 0 ;

 }

int identical ( vector X , vector Y , int  n , int m)
{
    float epsilon = 0.0001 ;
    float sumx =0 , sumy = 0 , dot =0 , result ;
    if( n != m ) return -1 ;

    for( int  i =0 ; i< m ; i++)
    {
        sumx +=  X.a[i] * X.a[i] ;
        sumy +=  Y.a[i] * Y.a[i]  ;
    }

    for( int i =0 ; i< m ; i++)
    {
        dot = dot + X.a[i] * Y.a[i] ;
    }

    result = dot / ( sqrt(sumx) * sqrt(sumy) ) ;
    if( result == 1 ) return 1 ;
    else if( 1 - result > epsilon) return 1  ;

}


 void zeta()
 {
     vector X , Y ;

      int n1 , n2 , i ;
    scanf("%d",&n1) ;
      X.a = (float *)malloc(n1*sizeof(float)) ;

    for( i =0 ; i< n1 ; i++)
    {
        scanf("%f", &X.a[i]) ;

    }

       scanf("%d", &n2) ;
       Y.a = (float *)malloc(n2*sizeof(float)) ;

       if( n1 != n2 ) { printf("Error\n") ; return ;}

    for( i =0 ; i< n2 ; i++)
    {
        scanf("%f", &Y.a[i]) ;

    }

    if( my_ortho(X,Y,n1,n2) == 1 )
    {
        printf("Orthogonal vectors\n") ;
    }
    else
    {
        printf("Not Orthogonal vectors\n") ;
    }


     if( identical(X,Y,n1,n2) == 1 )
    {
        printf("Identical vectors\n") ;
    }
    else
    {
        printf("Not Identical vectors\n") ;
    }



    free(X.a) ;
    free(Y.a) ;
 }


int main()
{
    zeta() ;
    return 0 ;
}





















