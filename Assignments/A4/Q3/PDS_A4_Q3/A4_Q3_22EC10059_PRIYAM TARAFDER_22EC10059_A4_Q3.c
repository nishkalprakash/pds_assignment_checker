//display reverse of a number in words
#include <stdio.h>
int main()
{
	long long n;
	do
	{
		scanf("%lld",&n);
	}while(n>9999999999||n<0);
	for(long long t=n;t>0;t/=10)
	{
		switch(t%10)
		{
			case 0:
				printf("Zero ");
				break;			
			case 1:
				printf("One ");
				break;
			case 2:
				printf("Two ");
				break;
			case 3:
				printf("Three ");
				break;
			case 4:
				printf("Four ");
				break;
			case 5: 
				printf("Five ");
				break;
			case 6:
				printf("Six ");
				break;
			case 7:
				printf("Seven ");
				break;
			case 8:
				printf("Eight ");
				break;
			case 9:
				printf("Nine ");
				break;
		}
	}
}
