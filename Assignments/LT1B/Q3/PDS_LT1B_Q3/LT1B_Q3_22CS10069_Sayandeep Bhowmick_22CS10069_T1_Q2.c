/*
	Section 14
	Roll No.: 22CS10069
	Name : Sayandeep Bhowmick
	Test 1
	Description : Prints the largest  and second largest number
*/
#include <stdio.h>

int main()
{
	int num;
	printf("Enter a series of positive number. If you enter negative number the program terminates\n");
	printf("Enter a positive number : ");
	scanf("%d",&num);
	if(num<0)				//Checks whether the entered value is correct else terminates the program
	{
		printf("<Program terminates>\n");
		return 0;
	}
	int max=num,smax=-1;		//smax is initialised -1 so that we can print in the first itertion a proper output
	while(1)
	{
		if (smax==-1)
			printf("Largest number : %d\nSecond Largest number : Value not yet entered\n",max );
		else
		printf("Largest number : %d\nSecond Largest number : %d\n", max, smax);
		printf("Enter a number : ");
		scanf("%d",&num);
		if (num<0)		//breaks out from the loop if negative number is entered
			break;
		if (smax==-1)				//Gives proper output if first two values are equal
			smax=(max>num)?((num>smax)?num:smax):max;
		smax=(max>num)?((num>smax)?num:smax):((max==num)?smax:max);		/*Note we are considering max!=smax,i.e.,if the user enters
																		 the maximum number twice also smax remains the maximimum number less than max.
																		 If we want smax=max if maximum number is entered more than once, this statement should be
																		 	smax=(max>num)?((num>smax)?num:smax):max;	*/
		max=(max<num)?num:max;
	}
	printf("<Program terminates>\n");
	return 0;
}
