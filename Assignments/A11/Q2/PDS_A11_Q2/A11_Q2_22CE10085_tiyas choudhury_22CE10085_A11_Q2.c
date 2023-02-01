#include<stdio.h>
int fibonnaci(int);
int main()
{
	int n;int i;int l;int s;
	printf("Enter a number ");
	scanf("%d",&l);
	printf("Enter  number of elements ");
	scanf("%d",&n);

	for(i=0;i<=n;i++)
	{
		 s= fibonnaci(i);
		if(s==l)
		{
		printf("Yes");
		break;
	}
	
		
}
if(s!=l)
		printf("No");
		return 0;



}
int fibonnaci(int n)
{
	
if(n==0)
	return 0;
if(n==1)
	return 1;
return(fibonnaci(n-1)+fibonnaci(n-2));
}
     
