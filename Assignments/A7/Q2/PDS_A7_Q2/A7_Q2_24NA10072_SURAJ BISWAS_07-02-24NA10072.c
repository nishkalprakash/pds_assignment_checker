#include<stdio.h>

//calculate gcd
int gcd(int a,int b)
{	
        int temp;
	while((b%a)!=0)
	{
	temp=a;
	a=b%a;
	b=temp;
	}
	return a;
}
//test if they are co prime
void coprime(int a, int b)
{
	int count=0;
	int test;
	test=gcd(a,b);
	if(test==1)
	{
		printf("\n%d and %d are coprime",a,b);
		count++;
		if(count==0)
		printf("No coprime found");
	
	}
	
}
int main()
{
	//taking numbers in array
	int arr[5];
	for(int i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	// forwarding array element to test co prime
	for(int i=0;i<4;i++)
	{
		for(int k=i+1;k<5;k++)
		{
			coprime(arr[i],arr[k]);
		}
	}
	
	return 0;
}
