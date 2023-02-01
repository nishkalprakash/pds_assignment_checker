#include<stdio.h>
int fibonacci(int n)
{
	if(n==0)
		return 0;
		if(n==1)
		return 1;
		return fibonacci(n-1)+fibonacci(n-2); 
}
int main()
{
	int n,i;
  printf("Enter the number that you wants to check:\n");
  scanf("%d",&n);
  for(i=0;i<=12;i++)
  {
  	if(n==fibonacci(i))
  	{
  		printf("Yes");
  		break;
  	}
  }
  if(i==13)
  	printf("No");




	return 0;
}