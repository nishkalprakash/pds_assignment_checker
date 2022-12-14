#include <stdio.h>
int main()
{
	int n,j,t=0;
	printf("enter the no");
	scanf("%d",&n);
	if(n>1)
	for (int i = 2; i <= n; i++)
	{
		for(j=1;j<i;j++)
		{
			if(i%j==0)
			{
				t = t + j;
			}
		}
		if(i==t)
		{
			printf("%d ",i);
			
		}
		t=0;
	}
	else
	{
		printf("invalid");
	}
	return 0;
}
