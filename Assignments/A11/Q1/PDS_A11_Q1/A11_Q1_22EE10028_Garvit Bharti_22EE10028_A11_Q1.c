#include<stdio.h>
float hp(int n)
{
	if(n==1)
	{
		return 1;
	}
	else
	{
		return(1/(float)n+hp(n-1));
	}
}

int main()
{
	int n;
	float c;
	scanf("%d",&n);
	c = hp(n);
	printf("%f",c);
}