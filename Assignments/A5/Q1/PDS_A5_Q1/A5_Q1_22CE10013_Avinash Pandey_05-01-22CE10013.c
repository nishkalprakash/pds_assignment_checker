
#include<stdio.h>

int main(){

    int N , n , i , j , a, k;                                     // some useful integers

    #define N 100                                                 // macro

    int array[N];

    printf("enter any number less than N" ) ;

    scanf("%d", &n) ;                                                // take input from user

    printf("enter the elements of array") ;

    for ( i = 0 ; i < n ; i++){

        scanf("%d" , &array[i]) ;                                   // store elements of array
    }


    for ( i = 0 ; i < n ; i++){

        if ( array[i] >= 0){

            for ( j = i; j < n ; j++){

                if ( array[j] < 0){

                    a = array[j] ;                     // correction of array



                    for ( k = j; k > i ; k--){

                        array[k] = array[ k- 1] ;
                    }

                    array[i] = a ;

                    break;
                }
            }
        }
    }


    printf("corrected array: ") ;


    for ( i = 0; i < n ; i++){
                                               // print the corrected array
        printf("%d  ", array[i]);
    }


return 0 ;
}
