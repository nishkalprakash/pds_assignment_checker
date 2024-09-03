#include<stdio.h>
int main()
{
	#define N 100
	int i, n, a[N];
	scanf("%d", &n);
	for (i=0; i<n; i++) scanf("%d", &a[i]);
	printf("Orginal Array: ");
	for (i=0; i<n; i++) printf("%d ", a[i]);
}
