#include<stdio.h>
#include<math.h>
#include<stdlib.h>
 int main()
{

	int  a,b,c;
	float s1, s2,s3;
	printf("enter the value of the 1st, 2nd ,3rd coeff. with a space:\n ");
	scanf("%d %d %d",&a,&b,&c);
        s1= sqrt((b*b)-(4*a*c));
	s2= (-b+s1)/(2*a);
	s3= (-b-s1)/(2*a);
	printf(" the roots are %f \n %f",s2,s3);
	return 0;
	
	




}
