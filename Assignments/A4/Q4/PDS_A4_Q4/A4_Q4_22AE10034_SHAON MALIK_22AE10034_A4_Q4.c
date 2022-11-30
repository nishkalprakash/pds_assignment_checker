/* 
 Section 14
 Roll No: 22AE10034
 Name: Shaon Malik
 Assignment No : 4
 Question No :4
 Description :program to print a pattern based on user input
*/

#include <stdio.h>
int main()
{
	int n,i,j;//variables
	printf("Enter the number of lines in the range 2 and 10:");
	scanf("%d",&n);
	for(i=1;i<=n;++i)//outer loop for line number
	{
		for(j=1;j<=i;++j)//inner loop for line elements
		{
			if(j%2!=0)
				printf("1");
			else
				printf("0");
		}
		printf("\n");
	}
	return 0;
}
