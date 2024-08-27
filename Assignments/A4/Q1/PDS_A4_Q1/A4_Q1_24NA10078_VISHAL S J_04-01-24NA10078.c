#include<stdio.h>
int main()
{
	int i, a1=1, a2=-1, n, a3;             
	scanf("%d", &n);
	i=1;
	if (n==1) printf("%d", a1);
	else if (n==2) printf("%d, %d", a1, a2);
	else if (n>2) {
	printf("%d, %d, ", a1, a2);
	while (i <= n-2) {				//...logic behind...a_n = a_(n-2) - a_(n-1)	
	a3=a1-a2;
	a1=a2;
	a2=a3;
	printf("%d, ", a3);
	i++;
	}}
	else printf("N is invalid");
	return 0;
}
	
	
