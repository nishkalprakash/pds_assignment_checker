/*
Section : 14
Roll Number : 22AE10014
Name : Ishan Kanodia
Assignment number : 3
Description : Taking the input, computing and printing the electric bill
*/

#include<stdio.h>
int main()
{
	float a,b,c,d,e ;
	printf("Enter the total number of units of electricity\n");
	scanf("%f",&a);//Here we are taking our required input
	
	b=1.2*50;
	c=1.2*(50 + (0.75*(a-100)));
	d=1.2*(50 + 75 + (1.20*(a-200)));
	e=1.2*(50 + 75 + 120 + (1.5*(a-300)));

	if (a < 100)//condition when when a<100
		printf("Rs. %f",b);
	else if (100<=a && a<200)//condition when when a<200
		printf("Rs. %f",c);
	else if (200<=a && a<300)//condition when when a<300
		printf("Rs. %f",d);
	else//condition when when a>300
		printf("Rs. %f",e);

return 0;
}
