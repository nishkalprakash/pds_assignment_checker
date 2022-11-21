#include<stdio.h>
#include<math.h>
int main()
{
	float u, e;// declares float variables
	printf("Enter Uo and Eo : ");
	scanf("%f %f", &u, &e);// takes input u and e
	printf("The speed of light is : %f m/s", 1/(sqrt(u*e)));//prints output and calculates the value
return 0;
} 

