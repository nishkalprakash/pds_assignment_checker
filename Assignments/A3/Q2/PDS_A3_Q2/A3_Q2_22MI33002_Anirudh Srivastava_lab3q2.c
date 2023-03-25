#include <stdio.h>

 int main () {
 int x , y , a, b, c , m ,n ,p ;

    printf( " enter any two numbers") ;
    scanf ( "%d %d" , &x , &y);
    a= x/100 ;
    c= x%10  ;
    b= ((x/10)%10) ;
     m= y/100 ;
    p= y%10  ;
    n= ((y/10)%10) ;
    if ( a==p && b==n && c==m) {
        printf ("it is a perfect pair");
    }
    else {
        printf ("it is not a perfect pair");
    }
    if ( a==0 && m==0 && b==n && c==m) {
        printf ( " it is a perfect pair");
        }
    else if  ((a!=0) && (m==0) || (a==0) && (m!=0)) {
        printf ( " wrong input");
    }
    return 0;
 }
