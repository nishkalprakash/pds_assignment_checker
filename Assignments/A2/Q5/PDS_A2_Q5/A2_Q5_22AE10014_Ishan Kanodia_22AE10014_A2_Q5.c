/*This is a program to calculate th total distance travelled by the ball*/
/*We are taking the value gravity to be 978 cm/sec^2 which is equal to 9.78 m/sec^2*/

#include<stdio.h>
#include<math.h>

int main()

{

	int Y,n ;
	float S ;//Let the required disteance be S

	printf("Please enter the values of Y and n : ");//Here we are telling the user to give the input

	scanf("%d %d",&Y,&n) ;//Here we are taking the input from the user

	S = 2*Y*(1 - pow(0.5,n));//Here we are performing the calculation using geometric progreession(GP)

	printf("The required distance is %f ",S );//Here we are printing the result

	return 0;
}
