/* Section 14
name: Anubhav Mitra
Roll: 22EC30007
Assignment no. : 11
Description: Program to check whether a given number is a palindrome or not, using a recursive function to find fibonacci numbers. Do note that other implementations are possible,
which will also be far more efficient. Here time complexity becomes O(N*2^N) due to an exponential fibonacci function call for each term in the linear search.
Without using recursion, loops can do the same in linear time (O(N)).
The same can also be implmeneted through recursion, but it will need extra arguments (last two fibonacci terms, etc).

*/

#include <stdio.h>

int fib (int i) { // function for calculating fibonacci terms using recursion

	if (i == 0 || i == 1) return i; // base cases of 0 and 1
	return fib (i - 1) + fib (i - 2); // recursive call

}

int fibonacci (int n) { // function to check whether a number is fibonacci or not, and return 1 and 0 for true or false respectively
	int i = 0;
	while (fib (i) < n) { // while the number is less than the i th fibonacci number, i is incremented
		i++;
	}
	if (fib (i) == n) return 1; // once equality or greater than is reached, true is returned for equality 
	else return 0; // and false, ie 0 otherwise
}

int main() {
	int n;
	printf("Enter number to be checked for in the fibonacci sequence: ");
	scanf("%d", &n); // taking the number as input
	if (fibonacci(n)) printf("Yes\n"); // if a matching fibonacci term is found yes is printed
	else printf("No"); // otherwise no is printed
	return 0;
}