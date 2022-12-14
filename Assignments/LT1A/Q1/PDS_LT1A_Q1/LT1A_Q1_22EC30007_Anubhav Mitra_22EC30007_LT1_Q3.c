/* Section 14
Name: Anubhav Mitra
Roll: 22EC30007
Test 1 Set A Q3
Description: Program to print all perfect numbers less than the number given by user as input. A nested loop has been used to do this, the first loop going through all numbers from 1 to n-1 (say i at a certain iteration), and the second checking whether the number from the earlier loop is perfect or not by running another loop from 1 to i/2 (as any number greater than i/2 cannot be a divisor), and checking for divisibility, modifying the sum for the same if need be. After the second loop is exited, in case the sum turns out to be i, the number is perfect and is printed.
After exiting both loops, if the count of perfect numbers is 0, then no perfect numbers found is printed.
The same is done at the very start of the code if n <= 1 as in that case an infinite loops runs for negative n while 1 is a special case discussed below
*/

#include <stdio.h>

int main() {
	int n; // initialising variable
	printf("Enter number up to which all perfect numbers are to be found: \n");
	scanf("%d", &n); // taking input
	if (n <= 1) { // handling case of n <= 1 as mentioned
		printf("Invalid input");
		return 0; // returning a value so that the rest of the code isn't executed
	}
	int count = 0; // initialising count of number of perfect numbers found 
	for (int i = 1; i <= n; i++) { // running a loop going through 1 to n - 1 to check whether the number is perfect
		int sum = 0; // initialising sum of divisors as zero
		for (int j = 1; j <= i/2; j++) { // if a divisor j of i is found, j is added to the sum
			sum += (i % j) ? 0 : j;
		}
		if (sum == i) { // if the sum turns out to be i (perfect number), it is printed
			printf("%d ", i);
			count++; // count for perfect numbers is also incremented
		}
	}
	if (!count) { // in case no perfect numbers are found
		printf("No perfect numbers found less than or equal to %d\n", n); // the same is printed 
		// note that this is different from invalid input as for negative numbers it runs an infinite loop for numbers less than n while 1 is a special case, having no divisors other than itself and 0 being divisible by all numbers
	}
	return 0;
}
