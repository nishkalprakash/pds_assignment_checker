//Roll no:<23MT30029>
//Name:<Tanaya Moghe>

#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i,j,k,t,l,m=0;
	int n[50];
	printf("Enter the number of random integers to be generated\n");
	scanf("%d", &k);
	if(k<50)
	{ 
		for(i=0; i<k; i++)
		{
			j=rand()%90+ 10;
			n[i]=j;
		}
		for(i=0; i<k; i++)
		{
			printf("Number[%d]=%d\n", i, n[i]);
		}
 		for(i=0;i<k-2;i=i+2)
		{	if(n[i]>n[i+2])
			{ 	l=n[i]; 
				n[i]=n[i+2];
				n[i+2]=l;
				m++;
			}
		}
		printf("New array\n");
		for(i=0;i<k;i++)
		{
			printf("Number [%d]=%d\n",i, n[i]);
		}
		printf("Number of interchanges = %d\n", m);
	}
	else printf("invalid input\n");
	return 0;
}

