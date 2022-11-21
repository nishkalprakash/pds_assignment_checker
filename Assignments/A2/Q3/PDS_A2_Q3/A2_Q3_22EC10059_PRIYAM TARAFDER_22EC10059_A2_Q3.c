/* calculates roots of a quaratic equation*/

#include <stdio.h>
#include <math.h>

int main()
{
	int a,b,c;
	float s1,s2;
	printf("enter the value of a ");
	scanf("%d",&a);	//takes a as input
	printf("enter the value of b ");
	scanf("%d",&b);	//takes b as input
	printf("enter the value of c ");
	scanf("%d",&c);	//takes c as input
	if((b*b-4*a*c)>-1)
	{
		s1=((-1.0)*b+pow(b*b-4*a*c,0.5))/(2*a);
		s2=((-1.0)*b-pow(b*b-4*a*c,0.5))/(2*a);
		printf("the two real roots of the equation are %f and %f",s1,s2);	//displays 	the two real roots
	}	
	else
	{
		printf("the roots are imaginary");
	}	//end of if else block
	return 0;
}	//end of main function
	
