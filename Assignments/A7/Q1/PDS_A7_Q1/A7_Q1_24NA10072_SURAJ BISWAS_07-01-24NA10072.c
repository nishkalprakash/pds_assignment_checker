
#include<stdio.h>
 
 //function to calculate power
int power(int x,int n)
{
	int product=1;
	if (n==0)
		{return product;}
	else{
	for(int i=1;i<=n;i++)
	{
		product=product*x;
	}
	return product;}
} 

//function to calculate factorial
int fact(int n)
{
	int factorial=1;
	if (n==0)
		{return factorial;}
	else{
	for(int i=1;i<=n;i++)
	{
		factorial=factorial*i;
	}
	
	return factorial;}
}

int main()
{
	// taking input
	int x,n;
	float series=0;
	scanf("%d %d",&x,&n);
	
	//calculate series
	for(int i=0;i<=n;i++)
	{
		series=series+((float)power(x,i)/fact(i));
	}
	
	//print output
	printf("%f",series);
	return 0;
}
