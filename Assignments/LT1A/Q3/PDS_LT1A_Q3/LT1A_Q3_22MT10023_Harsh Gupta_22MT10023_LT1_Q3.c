/*
 Section 14
 Roll No : 22MT10023
 Name : HARSH GUPTA
 Assignment : LAB TEST - 1
 Description : program that takes 3 co-ordinates as input and checks if the triangle is Acute-angled, Obtuse-angled or Right-angled
*/

#include <stdio.h>						//including the standard input output library
#include <math.h>						//including the math library

int main()
{
	double x1,y1,x2,y2,x3,y3,a,b,c,max,maxsq,xsq,ysq,x,y,cos;			//declaring the required variables
	int flag=0;									//declaring a flag variable and initializing it to 0

	printf("Enter the x-coordinate of the first point: ");				//prompting the user for input x1
	scanf("%lf",&x1);								//taking the input

	printf("Enter the y-coordinate of the first point: ");				//prompting the user for input y1
	scanf("%lf",&y1);								//taking the input

	printf("Enter the x-coordinate of the second point: ");				//prompting the user for input x2
	scanf("%lf",&x2);								//taking the input

	printf("Enter the x-coordinate of the second point: ");				//prompting the user for input y2
	scanf("%lf",&y2);								//taking the input

	printf("Enter the x-coordinate of the third point: ");				//prompting the user for input x3
	scanf("%lf",&x3);								//taking the input

	printf("Enter the x-coordinate of the third point: ");				//prompting the user for input y3
	scanf("%lf",&y3);								//taking the input

	a=sqrt((x2-x3)*(x2-x3)+(y2-y3)*(y2-y3));					//calculating the side length of side BC = a
	b=sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));					//calculating the side length of side AC = b
	c=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));					//calculating the side length of side AB = c



	if(a>=b&&a>=c)						//taking out the max side length square and assigning the remaining sides to x and y
	{
		maxsq=((x2-x3)*(x2-x3)+(y2-y3)*(y2-y3));
		xsq=((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));
		ysq=((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
	}
	if(b>=a&&b>=c)
	{
		maxsq=((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));
		xsq=((x2-x3)*(x2-x3)+(y2-y3)*(y2-y3));
		ysq=((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
	}
	if(c>=b&&c>=a)
	{
		maxsq=((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
		xsq=((x2-x3)*(x2-x3)+(y2-y3)*(y2-y3));
		ysq=((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));
	}
	
	max=sqrt(maxsq);								//taking out square root of maxsq and assigning it to max
	x=sqrt(xsq);									//taking out square root of x and assigning it to x
	y=sqrt(ysq);									//taking out square root of y and assigning it to y

	if((a<=0||b<=0||c<=0)||(max>=(x+y)))						//assigning flag equal to 1 if a<=0 or b<=0 or c<=0 or max>(x+y)
	{
		flag = 1;
	}
	
	if(flag==0)
	{
		cos = ((double)((xsq)+(ysq)-(maxsq)))/((double)(2*x*y));		//calculating the cosine of the largest angle
		if(cos<0)
		{
			printf("Obtuse Angled\n");					//printing "Obtuse Angled" if cosine is less than 0
		}
		else if(cos>0)
		{
			printf("Acute Angled\n");					//printing "Acute Angled" if cosine is greater than 0
		}
		else if(cos==0)
		{
			printf("Right Angled\n");					//printing "Right Angled" if cosine is equal to 0
		}
	}
	else
	{
		printf("Invalid\n");							//printing "Invalid" if flag is not equal to 0
	}
	return 0;									//the int main() will return 0
}
