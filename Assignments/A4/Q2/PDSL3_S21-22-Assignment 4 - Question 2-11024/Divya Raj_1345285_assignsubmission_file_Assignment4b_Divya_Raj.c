/*
Name : Divya Raj
Roll : 21MT10017
Dept : Metallurgy
Package : Codeblock
*/

#include <stdio.h>

int factorial(int n)
{
    int res = 1, i;
    for (i = 2; i <= n; i++)
        res *= i;
    return res;
}

int recurr2(int arr[], int index, int num, int num1, int n, int count)
{
	int sum = 0;
	count++;
	// Base condition
	if (num1 < 0 || count > n+1)
		return 0;

	// If combination is found, print it
	if (num1 == 0)
	{
		int rep = 0, dis = 0;
		// for (int i = 0; i < index; i++){
			// printf("%d ", arr[i]);
		// }
		// printf("\n");
		int i = 0, flag = 0;
		while (i < index) {
			while (i+1 < index && arr[i] == arr[i+1]) {
				flag = 1;
				rep++;
				i++;
			}
			i++;
		}
		return factorial(index)/factorial(rep+1);
		return 1;
	}

	// Find the previous number stored in arr[]
	int prev = (index == 0)? 1 : arr[index-1];

	// note loop starts from previous number
	for (int k = prev; k <= num ; k++)
	{
		// next element of array is k
		arr[index] = k;

		// call recursively with reduced number
		sum += recurr2(arr, index + 1, num, num1 - k, n, count);
	}
	return sum;
}

int recurr1(int k, int m, int n)
{
	// array to store the combinations
	// It can contain max n elements
	int arr[k];

	//find all combinations
	return recurr2(arr, 0, m, k, n, 0);
}

int main()
{
	int n = 4;      //I have hardcoded the data, you can change it accordingly
	int k = 15;
	int m = 6;
	printf("trips: %d\n", recurr1(k, m, n));
	return 0;
}