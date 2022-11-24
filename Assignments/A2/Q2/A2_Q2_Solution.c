// A3_Q2_Solution
// Code creator: Nishkal Prakash (nishkal@iitkgp.ac.in)
// Program to print an integer, character and long floating value

#include <stdio.h>
int main()
{
	int I;							//Input an integer 		(User Defined)
	char C;							//Input a character 	(User Defined)
	double F;						//Input a long float	(User Defined)
	scanf("%d %c %lf",&I,&C,&F);
	printf("%2d, %d, %.3e",I,C,F);
	return 0;
}
