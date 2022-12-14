/* 
	Section 14
	Roll no : 22EC10019
	Name : Arya Choudhuri
	Test No : 1
	Description : Program to print type of triangle
*/

# include <stdio.h>
# include <math.h>

int main()
{
	float x1 , x2 , x3 , y1 , y2 ,y3;
	
	printf("Enter x-coordinate of point 1: ");
	scanf("%f" , &x1);
	
	printf("Enter y-coordinate of point 1: ");
	scanf("%f" , &y1);

	printf("Enter x-coordinate of point 2: ");
	scanf("%f" , &x2);
	
	printf("Enter y-coordinate of point 2: ");
	scanf("%f" , &y2);	

	printf("Enter x-coordinate of point 3: ");
	scanf("%f" , &x3);

	printf("Enter y-coordinate of point 3: ");
	scanf("%f" , &y3);

	float l1 , l2 , l3;	// variables for lengths of sides

	l1 = (pow(x2-x1,2))+(pow(y2-y1,2));	// computes square of side length

	l2 = (pow(x3-x2,2))+(pow(y3-y2,2));	

	l3 = (pow(x3-x1,2))+(pow(y3-y1,2));

	float L1 = sqrt(l1);			// computes side length
	float L2 = sqrt(l2);
	float L3 = sqrt(l3);

	if ( ((L1+L2)>L3) && ((L2+L3)>L1) && ((L1+L3)>L2)) // checks if traingle exists
	{
		if ( (l1+l2==l3)||(l2+l3==l1)||(l3+l1==l2) )	// pythagoreas criterion
			printf("It is a right angled triangle ");
		else if ( (l1+l2<l3)||(l2+l3<l1)||(l3+l1<l2) )	// derived from cosine rule
			printf("It is an obtuse angled triangle ");
		else
			printf("It is an acute angled triangle ");
	}
	
	else
		printf("Invalid input: Triangle cannot be formed ");
	
	return 0 ;

	//  the squares of side lengths have been directly evaluated because taking the square root and then again squaring results in loss of precision and leads to unpredicatable results

}
