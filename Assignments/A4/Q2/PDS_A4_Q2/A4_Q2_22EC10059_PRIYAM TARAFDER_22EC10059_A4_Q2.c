//display sum of digits of a number
#include <stdio.h>
int main()
{
	int n,c,s=0;
	do
	{
		scanf("%d",&n);
	}while(n>999999||n<-999999);
	c=n;	
	if(n<0)		
		c*=-1;
	for(int t=c;t>0;t/=10)
	{
		s+=(t%10);
	}
	if(n<0)
		s*=-1;
	printf("%d",s);
}
