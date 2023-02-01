#include<stdio.h>
#include<math.h>

float hmn(int n){
	if (n==1){
		return 1.0;
	}
	else{
		return 1.0/n+hmn(n-1);
	}
}
int main()
{
	int n;
	scanf("%d", &n);
	printf("\n%f", hmn(n));
	return 0; 
}