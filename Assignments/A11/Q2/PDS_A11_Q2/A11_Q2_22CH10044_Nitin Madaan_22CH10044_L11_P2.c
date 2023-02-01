#include<stdio.h>

 int  fibonacci(int n)
{
	 if(n==0)
	 {
	 	return 0;
	 }

	 if(n==1)
	 {
	 	return 1;
	 }

return fibonacci(n-1)+fibonacci(n-2);

}

int main()
{
	int n,i;
	printf("Enter th value which you want to check\n");
	scanf("%d",&n);
	for (i = 0; i <= 12; i++)
	{
		 if(fibonacci(i)==n)
		 {
		 	printf("Yes");

		 	break;
		 	
		 }	
	}

	if(i==13)
	{
		printf("NO");
	}

	 


return 0;

}
