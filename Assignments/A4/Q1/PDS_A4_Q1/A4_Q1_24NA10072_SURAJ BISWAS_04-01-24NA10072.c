//c program to write down the series
#include<stdio.h>

int main()
{
	int n,i=0,t1=1,t2=-1,series;
	//taking n
	printf("Enter any positive number:");
	scanf("%d",&n);
	//if n is less than or equal to 0 print invald
	if(n<=0)
		printf("N is invalid");
	//print the series using loop
	while(i<n)
	{
		series=t1;
		printf("%d ",series);
		t1=t2;
		t2=series-t2;
		i++;
	}
	
	
	
	return 0;
}
