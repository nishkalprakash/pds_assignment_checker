#include <stdio.h>

/*
Section 14
Roll No : 22NA30011
Name : Dipesh Goel
Assignment No : 5
Description :  Sum of first n terms of a series
*/

int power(int x, int n)
{
	int temp=1;
	while (n!=0)
	{
		temp*=x; 
		n--;
	}
	return temp;
}

int fact(int n)
	{
		int temp=1;
		while (n!=0)
		{
			temp*=n;
			n--;
		}
		return temp;
	}


int main()

{
	int x,n,i;

	printf("Enter values of x and n : ");
	scanf("%d %d", &x,&n);


	double sum=0.0;

	for (i=0;i<n;i++)
	{
		sum+= ((double) power(x,i))/fact(i);
	}

	printf("%.4lf\n",sum);

	return 0;

}