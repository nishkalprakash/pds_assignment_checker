#include<stdio.h>
#define N 100
void bubble_sort (int a[], int size) // A function to sort in ascending order
{
	int i, j, t;
	for (i = 0; i < size; i++)
	for (j = 0; j < size-i-1; j++)
	if (a[j] > a[j+1]) 
	{
		t = a[j];
		a[j] = a[j+1];
		a[j+1] = t;
	}
}
int main()
{
	int i, m, n, A[N];
	printf("n =  ");
	scanf("%d", &n);
	printf("A[n] = ");
	for (i=0; i<n; i++) scanf("%d", &A[i]);
	printf("m = ");
	scanf("%d", &m);
	bubble_sort(A, n);	// To sort the initial array
	A[n] = m;		// inserting m
	bubble_sort(A, n+1);	// To sort the array after inserting
	printf("Output Array: ");
	for (i=0; i<n+1; i++) printf("%d ", A[i]);
	return 0;
}
