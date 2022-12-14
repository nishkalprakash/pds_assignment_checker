/*

SECTION 14

Roll No:22EE10048

Name: Brij

Lab Test 1

Description-Pattern Program
*/
#include <stdio.h>
int main()
{
	printf("Enter N\n");
	int N,count=0;
	scanf("%d",&N);
	for(int i=1;i<=N;i++)//Row variable
	{
		for(int j=1;j<=i;j++)//Column variable
		{
			count++;//Variable for printing the pattern		
			printf("%d ",count);
		}
		printf("\n");//To change the line
	}
return 0;
}
