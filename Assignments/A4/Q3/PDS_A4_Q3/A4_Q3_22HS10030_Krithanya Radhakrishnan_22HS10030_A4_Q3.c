/*
Krithanya R
section 14
22HS10030
desc: To find sum of digits
*/

#include <stdio.h>
main()
{
	long int n;
	int x;
	printf("enter a number");
	scanf("%ld",&n);
	if (n==0){
	printf("zero");
	}
	while (n!=0)
	{
		x=n%10;
		if (x==1)
		{
		printf("one "); 
		}
		else if (x==2)
		{
		printf("two ");
		}
		else if (x==3)
		{
		printf("three ");
		}
		else if (x==4)
		{
		printf("four ");
		}
		else if (x==5)
		{
		printf("five ");
		}
		else if (x==6)
		{
		printf("six ");
		}
		else if (x==7)
		{
		printf("seven ");
		}
		else if (x==8)
		{
		printf("eight");
		}
		else
		{
		printf("nine ");
		}
		n=n/10;
	}
	return 0;
}
