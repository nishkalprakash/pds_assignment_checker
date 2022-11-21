/*Calculating the distance traversed by the ball*/
#include <stdio.h>
#include <math.h>

int main()
{
	printf("Enter the height from which the ball is dropped and the number of times the ball touches the ground \n");
	double y;
	double n;
	scanf("%lf %lf",&y,&n);	//Note that the distance travelled is independent of the acceleration due to gravity and mass of the object
	double d=y;	//Distance travelled when the ball touches the ground for the first time
	double s=pow(0.25,(n-1));	//Calculating distance travelled in the succesive drops by GP formula
	double k=y*(2.0/3.0)*(1.0-s);
	d=d+k;
	printf("The distance traversed before the ball touches the ground for the %lfth time is %lf \n",n,d);
	return 0;
}
