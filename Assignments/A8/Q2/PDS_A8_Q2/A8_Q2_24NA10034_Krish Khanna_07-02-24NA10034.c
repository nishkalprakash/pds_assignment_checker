#include <stdio.h>
void CoPrime(int, int);
//function prototype
int gcd(int, int);
void pair(int a[]);
int flag; 
//global variable
int main()
{
	int Numbers[5], i;
	printf("\nPlease enter the numbers:\n"); 
	//Scanning the array
	for(i=0; i<5; i++) scanf("%d", &Numbers[i]);
	return 0;
}
void CoPrime(int a, int b)
{
	flag=gcd(a, b);
	//Calling gcd function
	if(flag == 1) printf("\n%d and %d are coprimes.", a, b);
	return;
}
int gcd(int c, int d)
{
	int t;
	//calculating gcd
	if (c<d) { t=c; c=d; d=t; }
	while(d%c!=0)
	{
		t=d;
		d=d%c;
		c=t;
	}
	return d;
	//returning gcd=d.
}
void pair(int Numbers[])
{
	int i, j, a, b;
	//pairing the elements of the array
	for(i=0; i<5; i++)
	{
		for(j=0; j<5; j++)
		{
			flag=0;
			a = Numbers[i]; b=Numbers[j];
			CoPrime(a, b);
			//calling the CoPrime function
		}
	}
}
