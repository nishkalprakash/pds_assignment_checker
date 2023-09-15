//Roll no:<23MT30029>
//Name:<Tanaya Moghe>

#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i,j,k,l;
	int n[50];
	printf("Enter the number of random integers to be generated\n");
	scanf("%d", &l);
	if(l<50)
	{
		for(i=0;i<l;i++)
		{
			j=rand()%40 +10;
			n[i]=j;
		}
		for(i=0;i<l;i++)
		{
			printf("Number[%d]=%d\n", i, n[i]);
		}
		printf("The req	triplets are:\n");
		for(i=0; i<l-2; i++)
		{
			for(j=i+1; j<l-1; j++)
			{
				for(k=j+1; k<l; k++)
				{
					if(n[i] + n[j] + n[k]==60)
					{
						printf("The indices are %d, %d, %d, the values stored are %d, %d, %d\n", i,j,k,n[i], n[j], n[k]);
					}
				}
			}
		}
	}
	else printf("Invalid input\n");
	return 0;
}
