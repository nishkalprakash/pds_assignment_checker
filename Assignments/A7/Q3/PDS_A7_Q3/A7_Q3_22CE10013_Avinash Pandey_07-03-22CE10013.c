// question 3
// 22CE10013

#include<stdio.h>
#include<stdlib.h>

int main(){
    int n = 3 ;

    char X[3][5] ;



    int i = 0 , j = 0 ;
    for ( i = 0 ; i < n ; i++){

        for ( j = 0 ; X[i][j] != '\n' ; j++){
            scanf(" %c" , &X[i][j] ) ;
        }
        printf("f\n") ;

    }
    printf("%c", X[0][0] );


  return 0 ;

}
