#include <stdio.h>  //including the required header files
#include <math.h>
#include <stdlib.h>

int main()
{
	int a,b,c;  //declaring variables
	float r1,r2;
	scanf("%d %d %d",&a,&b,&c);  //taking input
	r1 = (((-1)*b) + pow(b*b - 4*a*c,1/2))/2;  //calculating 1st root
	r2 = (((-1)*b) - pow(b*b - 4*a*c,1/2))/2;  //calculating 2nd root
	
	printf("%f %f",r1,r2);   //printinf roots
	return 0;
}
