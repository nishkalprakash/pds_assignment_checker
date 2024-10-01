#include<stdio.h>
int gcd(int a, int b)	// A function to find gcd
{
	int d;
	while(a!=0) {
	d=a;
	a=b%a;
	b=d;
	}
	return d;
}

void pair(int a[]){
	int i, j;
	for(i=0; i<5; i++) {
		for (j=i+1; j<5; j++)
		if ( gcd(a[i],a[j])==1) printf("%d and %d are co-prime\n", a[i], a[j]);
		}
	}

int main()
{
	int i, j, a[5];
	for(i=0; i<5; i++) scanf("%d", &a[i]);
	pair(a);
	
}
