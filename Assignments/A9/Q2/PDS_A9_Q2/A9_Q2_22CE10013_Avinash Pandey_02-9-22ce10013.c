// 22ce10013

// q 2

#include<stdio.h>
#include<stdlib.h>                 // included some important library functions
#include<math.h>


struct vector{
                                // defined a structure containing an integer pointer as an element .
        int *p ;


     } ;


int check_function(struct vector x1 , struct vector x2 , int n){       // a function to check if vectors are identical or orthogonal or none



              int i = 0, temp = 0 , temp1 = 0, temp2 = 0 ;                 // initialize some important variables
              double  mod1, mod2 , cos_theta;

               for ( i = 0; i < n ; i++ ){

                      temp = temp + x1.p[i] * x2.p[i] ;                //  calculate the dot product of two vectors


               }



               for ( i= 0; i< n ; i++){

                      temp1 = temp1 + x1.p[i] * x1.p[i] ;          // calculation of some of squares of all elements of vector x1

               }

               mod1 = sqrt( temp1 ) ;                  // modulus of x1



               for ( i= 0; i< n ; i++){
                                                                                   // calculation of some of squares of all elements of vector x1
                      temp2 = temp2 + x2.p[i] * x2.p[i] ;

               }

               mod2 = sqrt( temp2 ) ;                                 // modulus of x2


               cos_theta = temp / mod1 / mod2 ;                   // calculation of angle between two vectors




               if( cos_theta == 1) printf( "vectors are identical ") ;
                                                                                          // apply different conditions on cos_theta and print the result
               else if ( cos_theta == 0 ) printf(" vectors are orthogonal .") ;

               else printf("vectors are neither identical nor orthogonal .") ;


               return 1;


}




int main(){

    int n , m , i;

    printf("enter the dimension of first vector : \n ") ;                       // ask user for dimension of vector

    scanf("%d" , &n ) ;



     struct vector x1, x2 ;

    x1.p = ( int *) malloc( n*sizeof( int) ) ;                           // dinamically allocate the memory for array p
    x2.p = ( int *) malloc( n*sizeof (int) ) ;


     printf("enter the elements of first vector: \n" ) ;




     for ( i = 0; i < n ; i++){
                                                               // read the elements of first vector from user
              scanf("%d", &x1.p[i] ) ;

     }
    printf("enter the dimension of second vector :\n" ) ;

    scanf("%d" , &m ) ;

    if( n != m ) printf("dimensions should be same , but we will consider first one  ") ;



     printf("enter the elements of second vector :\n") ;


     for ( i = 0; i < n ; i++){                                //  read the elements of first vector from user

              scanf("%d", &x2.p[i] ) ;

     }





     check_function( x1, x2, n);                      // call the function to check and print the relation between vectors


     return 0;

}
