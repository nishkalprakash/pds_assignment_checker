#include <stdio.h>
float sum (int n )
{
	if(n==1)
	{
      return 1;
	}
	else 
	{
		return (1/(double)n + sum(n-1));
	}
}
int main ( )
{
    printf("enter the value of n");
    int n;
    scanf("%d",&n);
    
    float sum1=sum(n);
    printf("%f",sum1);
}