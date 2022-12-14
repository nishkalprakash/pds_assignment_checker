#include <stdio.h>

int main()
{
	printf("Enter the number of rows\n");//input for the number of rows
	int rows,i,j;
	scanf("%d",&rows);
	int count = 1;//count variable that stores the value for each term
	for(i=1;i<=rows;i++)//outer loop for printing the pattern upto the number of rows mentioned
	{
		for(j=1;j<=i;j++)//inner loop to print the content of each row
		{	
			
			printf("%d ",count);
			
			count++;//incrementing count for the next row
		}
		printf("\n");//newline character to start printing in the next line
	}
}	
