// question 1
// 22CE10013

#include<stdio.h>
#include<time.h>


void perfect_number( int n , int j){

         int i = 1 , sum = 0;                                                 //  function to check if number is perfect or not

         for ( i = 1; i < n; i++){

            if ( n%i == 0) sum += i ;
         }

         if ( sum == n ) {
                printf(" the number %d is perfect \n" , n) ;
                j = 1 ;

         }
}

int main() {

    int *a , n , i  , j = 0 ;

    printf("enter the value of n : ") ;                               // ask user to give n
    scanf("%d", &n) ;

    a = (int *) malloc( n* sizeof(int) ) ;                             // allocate an arrray of n integers

    time_t t ;

    srand(time(t)) ;

    printf(" %d- random number array :" , n) ;



    for( i = 0; i < n; i++){

           a[i]  = 2 + rand()%1000 ;                                           // randomly allocate integers in array
           printf("%d   ", a[i]) ;

    }

    for (i = 0; i< n ; i++){

        perfect_number( a[i] , j);                                      // call the perfect_number function for each integer
    }

    if ( j == 0 ) printf(" \n no perfect number found.") ;




    return 0 ;



}
