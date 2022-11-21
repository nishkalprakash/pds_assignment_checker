#include<stdio.h>
#include<math.h>

int main()
{
	int a,b,c;
	float x3,x1,x2; 
	printf("enter the coefficent");
	scanf("%d%d%d",&a,&b,&c);
	printf("the equation is : %dx^2+%dx+%d",a,b,c);
	x3 = b*b-4*a*c;
	x1 = (-b + sqrt(x3))/(2*a);
	x2= (-b - sqrt(x3))/(2*a);
	printf("the roots are : %f%f",x1,x2);
	return 0;
}
