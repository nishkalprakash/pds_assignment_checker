/*
 Section 14
 Roll No : 22MT10023
 Name : HARSH GUPTA
 Assignment : 4
 Description : Program that prints out a pattern based on the user input
*/

#include <stdio.h>						//including the standard input output library

int main()
{
	int i,j,c;						//declaring two loop control variables and a flag variable
	int n;							//declaring a variable to store a number entered by the user 
	printf("Enter a number in the range [2,10] : ");	//prompting the user to enter a number
	scanf("%d",&n);						//taking input from the user
 	if(n<2||n>10){c=1;n=0;}					//assigning c=1 and n=0 if user enters a number beyond the bounds [2,10]
	for(i=1;i<=n;i++)					//printing the pattern accordingly
	{
		for(j=1;j<=i;j++)
		{		
			if(j%2==0){printf("0");}		//printing 0 if j is even
			else{printf("1");}			//printing 1 if j is odd
		}
		printf("\n");
	}
	if(c==1){printf("Invalid input\n");}			//printing Invalid input if user enters a number beyond the bounds [2,10]
	return 0;						//the int main() will return 0
}
