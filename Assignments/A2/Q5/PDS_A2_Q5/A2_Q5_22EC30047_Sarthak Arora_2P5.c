// to find the distace travelled by a falling ball when it hits the floor nth time 
#include<stdio.h>
#include<math.h>
int main()
{
	float y, n, D;                                              // assingning variables 
	const float mass =0.125 , g = 9.78;                          // assinging some constants 
	printf(" enter the initial height ");
	scanf("%f",&y);                                              // asking the user to enter the initial height                      
	printf(" enter the number of time the ball hit the floor ");
	scanf("%f",&n) ;                                             // asking the user to enter the number of time the ball hits the the floor 
	D = y + (2*y/3)*(1- pow(0.25 , (n-1))) ;  // calculating the distance 
	printf(" the distance travelled by the ball thill it hit the floor %f times is %f",n, D);
	return 0;
}
