#include<stdio.h>
int power(int n,int d)
{	int p=1,k;
	for(k=1;k<=d;k++)
		p=p*n;
	return p;
}
int dcal(int m)
{	int count=0;
	while(m>0)
		{
		m=m/10;
		count++;
		}
	return count;
}
int main()
{	
	int n,sum=0,i,j,d;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		{
		j=i;
		while(j>0)	
		{
			d=dcal(i);
			sum=sum+power(j%10,d);
			j=j/10;
		}
		if(sum==i)
			{
			printf("%d\n",sum);
			
			}
		else
			{
			continue;
			
			}
		}
	return 0;
}
