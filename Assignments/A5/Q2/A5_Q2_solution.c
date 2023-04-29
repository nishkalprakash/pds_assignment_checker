/*Problem 2
A prime number (or a prime) is a natural number greater than 1 that is not a product of two smaller natural numbers. A natural number greater than 1 that is not prime is called a composite number. For example, 5 is prime because the only ways of writing it as a product, 1 × 5 or 5 × 1, involve 5 itself. However, 6 is composite because it is a product (2 × 3) in which both numbers are smaller than 6.

There is one oldest and best-known unsolved problems in number theory and all of mathematics is called Goldbach's conjecture. It asserts that all positive even integers ≥4 is the sum of two prime numbers.

For examples: 
              6 = 3 + 3
              8 = 3 + 5
             10 = 3 + 7
             12 = 5 + 7
	14 = 3 + 11
28 = 11 + 17	and so on…

You have to write a program for the following:
	Write a function int primeCheck (int i) {...}  to test if i is a prime number or not.
	Use this function and for any even integer n, show that n = p + q, where p and q are two prime numbers. Your program should read the value of n from the user.
[10+20 = 30]
Test cases:
#	INPUT	OUTPUT
1	2	-1
2	5	-1
3	4	2, 2
4	60	7, 53
5	124	11, 113
6	550	3, 547

 
Solution 2
*/
// code creator: Vaishnavi Munghate (munghatevaishnavi@gmail.com)
#include <stdio.h>

// returns 0 if i is not prime, 1 if prime
int primeCheck (int i) {
    // input validation
    if(i<2) return 0;
    
    // iterate over possible divisors of i
    int divisor;
    for( divisor = 2 ; divisor <= i-1 ; divisor++ ){
        // return 0 if any divisor divides i
        if( i % divisor == 0) return 0;
    }
    
    // if none divisor divides i, return 1
    return 1;
}


int main() {
    // take input
    int n;
    scanf("%d", &n);
	
	// input validation
	if(n<4 || n%2){
	    printf("-1\n");
          return 0;
	}
	
	// break n into p & q
	int p, q;
	
	// iterate over possible prime values of p & q
	for(p = 2 ; p<= n-2 ; p++ ){
	    int q = n-p;
	    
	    // print result if both p & q are prime
	    if( primeCheck(p) && primeCheck(q) ){
	        printf("%d, %d\n", p, q);
	        break;
	    }
	}
	return 0;
}
