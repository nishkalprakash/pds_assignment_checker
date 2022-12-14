/* Roll no. 22ME10083
   NAME - SOUVIK SARKAR
   LABTEST 1(SET B)
   Q.2
   */
// Programme to print pattern
#include<stdio.h>
int main()
{
	// Varriables initialization
	int rows,i,j; //Taking i as row j as column
	//Taking inputs
	printf("Enter the number of rows:\n");
	scanf("%d",&rows);
	// Logic
	for(i=1;i<=rows;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",i);// as all the numbers printed in output is the number of each rows
		}
		printf("\n");// for the initiation of new rows
	}
	return 0;
}
