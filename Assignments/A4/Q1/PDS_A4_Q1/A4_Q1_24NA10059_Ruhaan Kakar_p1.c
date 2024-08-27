#include <stdio.h>
int main()
{
int n, i;
printf("enter a positive integer\n");
scanf("%d", &n);
if (n < 1)
	printf("n is invalid\n");
else
	printf("n is %d\n",n);

return 0;
