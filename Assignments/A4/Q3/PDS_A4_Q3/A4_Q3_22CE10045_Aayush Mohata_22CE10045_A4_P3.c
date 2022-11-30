/* 
Section 14
Roll No:22CE10045
Name : Aayush Ujwal Mohata
Assignment No:4
Discription :To write number into words in reverse order

*/
#include<stdio.h>
int main()
{
	long int n,rem;
	printf("Enter the number");
	scanf("%ld",&n);
	if(n==0)
		printf("zero");
	while(n>0)
	{
		rem=n%10;
		n=n/10;
		switch(rem)
		{
			case 0:
				printf("zero ");break;
			case 1:
				printf("one ");break;
			case 2:
				printf("two ");break;
			case 3:
				printf("three ");break;
			case 4:
				printf("four ");break;
			case 5:
				printf("five ");break;
			case 6:
				printf("six ");break;
			case 7:
				printf("seven ");break;
			case 8:
				printf("eight ");break;
			case 9:
				printf("nine ");break;
		}
	}
	return 0;
}
			
