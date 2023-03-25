#include <stdio.h>

int main ()
{
int a, b ,c ,d ,e , sum;
printf ( " enter the 5 numbers ");
scanf (" %d %d %d %d %d" , &a , &b , &c , &d , &e );
printf ("the numbers are %d %d %d %d %d" , a , b, c , d, e);
if ( a%2==0) {
 printf ( " %d is even " , a);
 }
 else {
    printf (" %d is odd" , a);
 }

 if ( b%2==0) {
 printf ( " %d is even " , b);
 }
 else {
    printf (" %d is odd" , b);
 }

 if ( c%2==0) {
 printf ( " %d is even " , c);
 }
 else {
    printf (" %d is odd" , c);
 }

 if ( d%2==0) {
 printf ( " %d is even " , d);
 }
 else {
    printf (" %d is odd" , d);
 }

 if ( e%2==0) {
 printf ( " %d is even " , e);
 }
 else {
    printf (" %d is odd", e);
 }
  sum = a%2 + b%2 + c%2 + d%2 +e%2 ;

 if (sum=3) {
    printf ( " there are 3 odd numbers");
  }
else if (sum=2){
    printf (" there are 2 even numbers");
}


 return 0;
}
