# include <stdio.h>
int main()
	{
	int a,b,c;
	printf("Enter the number whose sum of digits is to be found");
	scanf("%d",&a);
	b=0;
	while (a>0)
{
	c=a%10;
	b=b+c;
	a=a/10;
}
	printf("%d",b);
	return 0;
	}
