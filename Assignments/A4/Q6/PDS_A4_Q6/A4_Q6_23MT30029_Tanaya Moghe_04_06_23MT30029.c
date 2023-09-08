//Roll no:<23MT30029>
//Name:<Tanaya Moghe>

#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a,i,j,k,sum,minsum, mins=40;
	for(i=0; i<20; i++)
	{
		j= rand() % 1001 + 5000;
		printf("number: %d\n", j);
		sum=0;
		k=j;
		while(k>0){
			a=k%10;
			sum=sum+a;
			k/=10;
		}
		printf("sum: %d\n", sum);
		if(sum<=mins)
		{mins=sum;
		minsum=j;
		}
	}
	printf("the number with smallest sum is %d\n", minsum);
	return 0;
}
