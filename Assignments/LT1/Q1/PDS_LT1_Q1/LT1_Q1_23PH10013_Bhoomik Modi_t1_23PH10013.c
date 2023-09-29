// Name:Bhoomik Modi
// roll: 23PH10013
#include<stdio.h>
#include<stdlib.h>
int main()
{
	long long int n;
	printf("enter a no. less than 9999\n");
	scanf("%lld",&n);
	long long int d=0;
	int r;
	int a;
	int i=1;
	int sum=0;
	while(n!=0)
	{
	a=n%10;
	d+=a*i;
	n=n/10;
	i*=10;
	}
	i=1;
	 long long int num=0;
	while(d!=0)
	{
	a=d%10;
	a++;
	
	num+=a*i*10;
	n+=a*i;
	d=d/10;
	i*=10;
	}
	d=n;
	int sum1=sum;
	while(d!=0)
	{
		a=d%10;
		sum+=a;
		d=d/10;}	
	printf("%lld",n);
	printf("%lld",n*100+sum);
	d=0;
	if(sum%10==0)
	{sum=sum*100;
		printf("%lld\n",num*100000+sum);
	}else{
	i=1;
	while(sum!=0)
	{
	a=sum%10;
	sum1+=a*i*i;
	sum=sum/10;
	i*=10;
	}
	printf("%lld",num*10000+sum1*10);}
}
	
