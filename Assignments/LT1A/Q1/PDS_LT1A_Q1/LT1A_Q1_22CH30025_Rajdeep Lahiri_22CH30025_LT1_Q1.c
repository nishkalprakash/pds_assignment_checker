#include <stdio.h>


int main()
{
	printf("Enter the number\n");
	int n;
	int sum = 0,i,j;
	
	while(1)
	{
		scanf("%d",&n);
		if(n>1)
		{
		printf("The perfect numbers less than or equal to %d are\n",n);
		for(i=1;i<=n;i++)
		{
		
			for(j=1;j<i;j++)
			{
				if(i%j==0)
				sum+=j;
			}
			if(sum==i)
			{
				printf("%d,",i);
			}
			sum = 0;
		}
		}	
		
		else
		{
			printf("Invalid input");
			break;
		}
	}
	
	return 0;
}
				
				
