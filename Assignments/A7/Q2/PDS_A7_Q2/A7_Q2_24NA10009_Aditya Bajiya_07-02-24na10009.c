#include <stdio.h>
int C = 0;
//GCD
int gcd(int a , int b)
{
	int temp;
	if(a>b)
	{temp = a; a=b; b=temp;}
	
	while((b%a) != 0){
		temp = b%a;
		b = a;
		a = temp;
		}
 return a; 
}

//COPRIME CHECK
void CoPrime(int a , int b)
{
	int t;
	t = gcd(a , b);
	if(t==1)
	{printf("%d and %d are Co-Prime\n", a , b);C++;}
}

//CHECKING ALL PAIRS
void pair(int a[])
{
	for(int i=0 ; i<4 ; i++)
	{
		for(int j=i+1; j<5 ; j++ )
		{	
			CoPrime(a[i], a[j]);
		}
	}
}

int main()
{
	int a[5];
	scanf("%d %d %d %d %d", &a[0], &a[1], &a[2], &a[3], &a[4]);
	pair(a);
	if (C==0)printf("No Co-Prime found");
	return 0;
	
}
