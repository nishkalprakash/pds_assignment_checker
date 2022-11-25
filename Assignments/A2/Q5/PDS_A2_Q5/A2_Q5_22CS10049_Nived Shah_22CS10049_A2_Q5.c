/* Program to calculate distance travelled by a ball released from a certain user-inputted height */

#include <stdio.h>
#include <math.h>

int main()
{
	float Y, D;
	int n;
	
	printf("Enter the height from which the ball is released: ");
	scanf("%f", &Y);

	printf("\nIf the distance is to calculated by the time the ball hits the ground for the n-th time, enter n: ");	
	scanf("%d", &n);

	/* If else is used because for n=1, the distance is just the height it drops from, but subsequently, the distance has to double, once for going up and then returning down, due to which the sequence is a GP only after 2nd hit and not after first hit (Y, Y/2, Y/8, Y/32.....) */
		
	if(n==1)
		printf("Distance travelled= %f meters", Y);
	else if(n>1){
		D= Y+(((Y/2)*(1-(pow(0.25,n-1))))/(0.75));		

		/* Since the speed of the ball on rebounding becomes half, the height will decrease by a factor of 4 (from h=u^2/2g), which is why the common ratio is 0.25. GP's first term begins with Y/2 since we are finding net distance traversed. */

		printf("Distance travelled= %f meters", D);
	}	
	return 0;
}
