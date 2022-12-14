/*
 Section 14
 Roll No: 22AE10034
 Name: Shaon Malik
 Test-1 Set-A
 Question No : 3
 Description :program to print a pattern based on user input
*/


#include <stdio.h>
int main()
{
	int n,i,j,k;//variables
	printf("Enter the number of lines in the range 2 and 10:");
	scanf("%d",&n);
	if(n>=2 && n<=10)
	{
		k=1;//element to be printed
		for(i=1;i<=n;++i)//outer loop for line number
		{
			for(j=1;j<=i;++j)//inner loop for line elements
			{
		  	printf("%d ",k);
		  	++k; //print element increases by 1
			}
			printf("\n");//line change
		}
	}
	else
		printf("INVALID INPUT" );
	return 0;
}
