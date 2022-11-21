#include <stdio.h>
#include <math.h>
int main()
{
	float u,e,c;					//Declaring
	scanf("%f %f",&u,&e);				//Read
	float p=u*e;					//Calculations
	float p1=sqrt(p);	
	c=1/p1;
	printf("The speed of light is %.0e \n",c);	//Print
}

	
