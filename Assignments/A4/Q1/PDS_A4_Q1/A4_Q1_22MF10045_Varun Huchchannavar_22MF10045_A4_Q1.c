	#include <stdio.h>
	int main()
/* This program is used to display the factors of a number*/
{
 	int n; /* n is the number whose factors have to be displayed*/
	printf("Enter the number: ");
	scanf("%d",&n);
	int a=1; /* Where a is the divisor */
	while (n%a==0 && a<=n) {
	printf("%d \n",a);
	a++;
	}
	return 0;
}

