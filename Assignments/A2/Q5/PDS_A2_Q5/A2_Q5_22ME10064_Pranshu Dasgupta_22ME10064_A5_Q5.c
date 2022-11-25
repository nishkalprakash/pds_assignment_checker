#include <stdio.h>
#include <math.h>

int main()
{
	float y, d, pow1; int n;
	printf("Enter the initial height of the object: ");
	scanf("%f", &y);
	printf("Enter the number of bounces: ");
	scanf("%d", &n);
	pow1=pow(0.25,n-1); 
	d=y*((5.0/3.0)-(2.0/3.0)*pow1); //general formula derived
	printf("Total distance travelled by the ball= %f", d);
	return 0;
}
