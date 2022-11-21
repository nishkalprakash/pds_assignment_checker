#include <stdio.h>
#include <math.h>
int main()
{
	float y,n;		//Declaring
	printf("Enter the height and number of bounces\n");	//Instructions for user
	scanf("%f %f",&y,&n);	//Read
	float s,p;
	s=(y*(pow(0.5,n)-1))/(0.5-1);	//Calculations
	printf("The distance covered is %f",s);		//Print
	return 0;
}
	
	
	
