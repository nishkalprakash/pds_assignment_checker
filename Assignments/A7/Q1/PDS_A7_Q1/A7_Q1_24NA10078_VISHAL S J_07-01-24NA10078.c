#include<stdio.h>
int power(int x, int n)
{
	int i, p=1;
	if(n==0) p=1;
	else{
	for (i=0; i<n; i++) p*=x;
	}
	return p;
}

int fact(int n)
{
	int i, p=1;
	if (n==1 || n==0) p=1;
	else
	{
		for (i=1; i<=n; i++) p=p*i;
	}
	return p;
}

int main()
{
	int i, x, n;
	float output=1;
	scanf("%d %d", &x, &n);
	if(n==1) output=1;
	else 
	{
		for(i=1; i<n; i++) {
		output = output + (float)power(x, i)/fact(i) ;
		}
	}
	printf("%f", output);
}
	
