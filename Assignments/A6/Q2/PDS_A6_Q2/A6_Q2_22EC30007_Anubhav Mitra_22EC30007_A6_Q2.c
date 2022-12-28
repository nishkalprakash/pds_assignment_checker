/* Section 14
name: Anubhav Mitra
Roll: 22EC30007
Assignment no. : 6
Description: Program to compute pairwise coprime elements in an array
*/

#include <stdio.h>

int count = 0; // initialising count of array

int gcd(int m, int n) { // computing gcd
	if (m == 0) return n;
	if (n == 0) return m;
	if (m == n) return m;
	if (n > m) return (m, n - m);
	else return (m - n, n);
}

void pair(int arr[], int k) {
	if (count == k - 1) return;
	for (int i = count + 1; i < k; i++) {
		if (gcd(arr[count], arr[i]) == 1) {
			printf("(%d %d) ", arr[i], arr[i+1]);
		}
	}
	pair(arr + (++count), k);	
}
int main() {
	int k;
	printf("Enter number of terms to be entered: ");
	scanf("%d", &k);
	int arr[k];
	if (k <= 0) {
		printf("Invalid input");
		return 0;
	}
	for (int i = 0; i < k; i++) {
		printf("Enter %dth term: ", i + 1);
		scanf("%d", arr + i);
		if (arr[i] < 0) {
			printf("Invalid entry");
			return 0;
		}
	}
	pair(arr, k);
}
