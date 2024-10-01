#include <stdio.h>

int power(int x, int n) //declaring a function to calculate x^n// 
{ int i, p=1;

 for (i=1; i<=n; i++) { 
 p = p*x;
 }
return p;
}

 int fact(int n) //declaring a function to calculate factorial//
 {
  if (n==1 || n==0){ //factorial 1= factorial 0 = 1 case//
  return (1);
  }
  else{ 
  return (n * fact(n-1)); //factorial = n * n-1 * n-2 *...//
  }
 }
 
 int main() // calculating sum of first n term of given series//
 {
 int x, n, i;
 float S; //because we are getting x/y form//
 scanf ("%d%d", &x, &n); //taking input from the user x is some integer, n is the no. of terms//
 S = 0.0; // initialising sum=0//

 
 for (i=0; i<=n-1; i++) {
 
 S = S + ((float)power(x,(i))/fact(i));
 }
 
 printf ("Sum of first n term of the series: %f \n", S);//printing result//
 return 0;
 }
