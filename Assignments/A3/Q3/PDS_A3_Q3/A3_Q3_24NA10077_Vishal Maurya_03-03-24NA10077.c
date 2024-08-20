#include <stdio.h>
int main()
{
	int a,b,c,d, count;
	
	printf("\na : ");
	scanf("%d", &a);
	
	printf("\nb : ");
	scanf("%d", &b);
	
	printf("\nc : ");
	scanf("%d", &c);
	
	printf("\nd : ");
	scanf("%d", &d);
	
	if(a==b)
	{
		count++;
	}
	if(a==c)
	{
		count++;
	}
	if(a==d)
	{
		count++;
	}
	if(c==b)
	{
		count++;
	}
	if(d==c)
	{
		count++;
	}
	if(b==d)
	{
		count++;
	}
	if(count == 1)
	{
		printf("Yes");
	}
	else{
		printf("No");
	}
	
	return 0;
}
