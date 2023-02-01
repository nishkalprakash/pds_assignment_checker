#include<stdio.h>
#include<math.h>
int fbnc(int n)
{
	if (n==0|| n==1)
		return n;

	if(n>1)
		return fbnc(n-1)+ fbnc(n-2);
}
int main ()
{
	int n, a=0;
	printf("enter n :");
	scanf("%d", &n);
	for(int i=0; i<12; i++)
	{
		if(n==fbnc(i))
			a++;
	}
	if(a==0)
		printf("NO\n");

	if(a>0)
		printf("YES\n");
	return 0;
	
}