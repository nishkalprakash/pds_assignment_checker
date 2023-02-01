#include <stdio.h>
float sum(int n)
{
	if(n==0) return 0;
	else return 1.0/n + sum(n-1);
}
int main()
{
int a;
scanf("%d",&a);
printf("%f",sum(a));
	return 0;
}
