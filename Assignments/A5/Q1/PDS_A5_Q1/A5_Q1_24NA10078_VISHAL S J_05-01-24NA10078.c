#include<stdio.h>
int main()
{
	#define N 100
	int a[N], i, j, n, k;
	scanf("%d", &n);
	if (n>100) printf("Error: n > 100");
	for (i=0; i<n; i++) scanf("%d", &a[i]);
	printf("Orginal Array: ");
	for (i=0; i<n; i++) printf("%d ", a[i]);
	for (i=0, i<n; i++) {
	if (a[i]>0) j=i;
	else (a[i]<0) {
	k=i;
	for (k=i; k<j; k--) {
	a[k]=a[k-1] 
	printf("Rearranged Array: ");
	for (j=0; j<n; j++) printf("%d ", a[j]);
	return 0;
}
