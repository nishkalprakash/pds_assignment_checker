//program to print largest and second largest number
//Akash Kundu
//24NA10012

#include<stdio.h>
int main()
{	int num1=0,num2=0,num;//num1 is largest, num2 is second largest, and num is buffer variable

	printf("Enter number : ");
	scanf("%d",&num1);
	if (num1<0) return 0;
	printf("Largest number : %d\n",num1);
	printf("Second largest number : Value Not yet entered\n");
	
	while (num>=0) {
		printf("Enter number : ");
		scanf("%d",&num);
		if (num<0) return 0;
		if (num>num1) {num2=num1; num1=num;}
		else if (num>num2) num2=num;
		printf("Largest number : %d\n",num1);
		printf("Second largest number : %d\n",num2);
		}
	return 0;
}
