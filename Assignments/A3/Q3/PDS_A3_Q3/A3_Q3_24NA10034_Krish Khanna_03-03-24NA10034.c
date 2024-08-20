#include <stdio.h>
int main()
{
	int a, b, c, d;
	printf("\nPlease input the value of a:");
	scanf("%d", &a);
	printf("\nPlease input the value of b:");
	scanf("%d", &b);
	printf("\nPlease input the value of c:");
	scanf("%d", &c);
	printf("\nPlease input the value of d:");
	scanf("%d", &d);
	if (a==b && a!=c && a!=d && b!=c && b!=d)
		{
		printf("\nYES.\n");
		}
	else
		{
		if (a==c && a!=b && a!=d && c!=b && c!=d)
		{
		printf("\nYES.\n");
		}
		else 
		{
			if (a==d && a!=b && a!=c && d!=b && d!=c)
			{
			printf("\nYES.\n");
			}
			else
			{
				if (b==c && b!=a && b!=d && c!=a && c!=d)
				{
				printf("\nYES.\n");
				}
				else
				{
					if (b==d && b!=a && b!=c && d!=a && d!=c)
					{
					printf("\nYES.\n");
					}
					else
					{
						if (c==d && c!=a && c!=b && d!=a && d!=b)
						{
						printf("\nYES.\n");
						}
						else
						{
						printf("\nNO.\n");
						}
					}
				}
			}
		}
		}
	
	return 0;
}
