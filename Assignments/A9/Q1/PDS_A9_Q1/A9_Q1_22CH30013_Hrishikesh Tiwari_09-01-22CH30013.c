#include<stdio.h>
int main()
{
    long int n ;
    long int a =0  , b=0  ;
    long int c[100] , flag = 0 , i ;

     do{
      printf("Please enter a number :\n") ;
     scanf("%ld",&n) ;
     if(n<0) printf("ERR- negative number\n") ;
     else if(n>0) break ;

     } while(n<0) ;

       c[0] = 0 ;
       a = 0 ;
       b = 1 ;

       i = 1;

     while( 1 )
     {
       c[i] = a+b ;
       a = b ;
       b = c[i] ;

       if( c[i] == n)
       {
           flag = 1 ; break ;
       }

        if( c[i] > n)
        {
            if( c[i] - n > n- c[i-1] )
            {
                printf("The nearest fibonacci number = %ld ", c[i-1]) ; break ;
            }
            else if( c[i] - n < n - c[i-1])
            {
                printf(" THe nearest fibonacci number = %ld" , c[i] ) ; break;
            }
        }
       i++ ;

     }

     if(flag == 1) printf("This is a fibonacci number\n") ;
     else{
            printf("\n Not a fibonacci number \n") ;
     }
    return 0 ;
}
