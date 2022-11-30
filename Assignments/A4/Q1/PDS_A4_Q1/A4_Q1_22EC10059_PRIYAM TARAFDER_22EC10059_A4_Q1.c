//display factors of a number
#include <stdio.h>
int main()
{
	int n,c;
	do
	{
		scanf("%d",&n);
	}while(n>999999||n<-999999);
	c=n;	
	if(c<0)		
		c*=-1;
	if(c==0)
		printf("0");
	for(int t=1;t<=c;t++)
	{
		if(c%t==0)
			printf(" %d",t);
	}
}
