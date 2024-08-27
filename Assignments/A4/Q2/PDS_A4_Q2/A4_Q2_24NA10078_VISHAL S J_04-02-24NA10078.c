#include<stdio.h>
int main()
{	int max1, max2, num;
	printf("Enter positive numbers: ");
	scanf("%d", &max1);
	printf("Largest number: %d\n", max1);
	printf("Second largest number: Value not yet entered\n");
	while (1) {
	scanf("%d", &num);
	if (num<0) break;
	if (num>max1) {
	max2=max1;
	max1=num;
	}
	if (num<max1) {
	num=max2;
	}
	printf("Largest number: %d\n", max1);
	printf("Second largest number: %d\n", max2);
	}
	return 0;
}
	
	
	
	
