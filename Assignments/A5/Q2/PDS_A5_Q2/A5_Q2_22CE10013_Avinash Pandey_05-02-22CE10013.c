
#include<stdio.h>



int primecheck(int i){

         int j = 2 , k = 1;                                  // this function checks if i is prime or not

         for (j = 2; j < i ; j++){
                                                             // if i is prime it returns 2 otherwise 1
            if ( i % j == 0) return 1;
         }

         return 2 ;

}



int main(){

    int n;

    printf("enter the number:") ;                             // take the input from user
    scanf("%d", &n) ;

    if ( n % 2 == 1 ){                                        // check if number is odd , if yes print -1 .

            printf("%d", -1) ;
            return 0 ;
    }


    int i = 2 , j= 2 , k = 1;

    for ( i = 2 ; i < n ; i++ ){



        for ( j = 2; j < n; j++){



             if( ( primecheck(i) == 2 )  &&  (primecheck(j) == 2)  &&  ( i + j == n ) ){                   // check if number can be expressed as a sum of two prime numbers

                printf("%d + %d \n" , i ,j);

                k = 3 ;

                break ;


             }


        }
                                                                                               // if you get such one pair break the loop

        if ( k == 3) break ;

    }

    return 0 ;

}
