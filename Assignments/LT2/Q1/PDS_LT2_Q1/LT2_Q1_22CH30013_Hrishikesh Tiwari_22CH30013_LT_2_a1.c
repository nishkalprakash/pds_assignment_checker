#include<stdio.h>
#include<stdlib.h>
/*
Hrishikesh Tiwari
22CH30013
set A
SEC2
*/


float mean( int*a , int n )
{
     if( n<0 ) return 0 ;

     return ( mean( a , n-1 ) + a[n-1] )  ;

}

int main()
{
    int *a ;
    int n , i ;
    // Input the size //
    scanf("%d" , &n) ;
      // Memory Allocation //
      a = (int*)malloc(n*sizeof(int)) ;

      for( i =0 ; i<n ; i++)
      {
          scanf("%d" , &a[i]) ;
      }

       printf("LIst =  ") ;

      for( i=0 ; i<n ; i++)
      {
           printf("%d , " , a[i] ) ;
      }
          printf("\n") ;

      printf("Mean : %f" , mean (a , n) / ((float) n)) ;
      free(a) ;
      return 0 ;
}
