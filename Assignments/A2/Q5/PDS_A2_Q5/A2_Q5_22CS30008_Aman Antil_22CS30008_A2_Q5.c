#include<stdio.h>
#include<math.h>
int main(){
	float y, n, x; // declaring variables for height etc
	printf("Enter height from which ball is to be released and number of times it touches the ground : ");
	scanf("%f %f", &y, &n);// takes input
	x = y + (y/2)*(pow(0.25, (n-1))-1)/(-0.75);// calculating by using formula for sum of gp
	printf("Total distance travelled : %f", x);// printing result
	return 0;
}


	

