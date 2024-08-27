//Program to output a sequence
//Code Creater: Vishal Maurya
//Roll NO: 24NA10077
#include <stdio.h>
int main()
{
	int n, a=1,b=0,c=1,i;
	printf("Write a positive Integer n: ");
	scanf("%d", &n);

	if(n<=0)			//checking if entered no if invalid
	{
		printf("N is invalid");
	}else
	{
		for(i=0; i<n; i++)	//loop for each no in sequence
		{
			printf("%d, ", c);
			a=a+b;
			b=a-b;
			if(i%2==0)	//alternatively applying negtive value
			{
				c=a*(-1);
			}else
			{
				c=a;
			}
		}
		
		
	}


	return 0;
}
