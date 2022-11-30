#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	int in,a,b;
	printf("give the input\n");
	scanf("%d",&in);
	a=1;
	b=1;
	while(a<=in)
	{
		while(b<=a)
			{ 
                          if(b%2==0)
				printf("0");
			  else
				printf("1");
				b++;}
		a++;
	    b=1;
	    printf("\n");
	}
	return 0;
}
