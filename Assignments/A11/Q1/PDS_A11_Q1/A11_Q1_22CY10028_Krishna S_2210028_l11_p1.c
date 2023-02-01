#include <stdio.h>
#include <stdlib.h>
int sum(int n){
	int sum=0;
	if (n == 1) sum= 1;
	if (n==0) sum=0;
	else {
		for (int i = 0; i < n; n++)
		{
			sum = sum + 1.0/i;
		}
	}

return sum;

}

int main()
{
	int n;
	printf("Enter the number:");
	scanf("%d",&n);
printf("%d\n",sum(n) );
	return 0;
}