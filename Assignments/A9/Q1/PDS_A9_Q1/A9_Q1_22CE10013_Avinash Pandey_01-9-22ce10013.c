// 22ce10013
// q 1

#include<stdio.h>

int fib( int a ){

        int temp ;

       if (a==0 ) return 0;
       if(a == 1) return 1;

       temp = fib (a - 1) + fib (a - 2) ;
       return temp ;

}



int main(){

    int n , i , temp;

    printf("enter the number:\n") ;

    scanf("%d", &n) ;

    while ( n < 0) {

            printf("enter positive number :\n") ;
            scanf("%d", &n) ;

            }

    printf("number is : %d\n" , n) ;

    for ( i = 0; 1 ; i++){

         if ( fib(i) == n) printf(" %d is a fibonacci number. \n" , n) ;

        if ( fib(i) > n ) break ;

    }


    if ( n - fib(i - 1) <= fib( i ) - n ) temp = fib(i-1) ;
    else temp = fib( i ) ;


    printf("nearest fibonacci number is %d ." , temp) ;
    return 0;




}
