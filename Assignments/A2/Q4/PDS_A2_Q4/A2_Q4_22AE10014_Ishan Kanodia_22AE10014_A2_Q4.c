/*Program to evaluate the speed of light*/
/*For simplicity, let us take mew knot as m and epsilon knot as n*/
/*Let the speed of the light be c*/

#include<stdio.h>
#include<math.h>

int main()

{

	float c,m,n ;

	printf("Enter the value of mew knot and epsilon knot : ");

	scanf("%f %f",&m,&n);//Here we are taking the input for our required values

	c = 1/sqrt(m*n);//Here we are doing the calculation

	printf("The speed of light is equal to %f ",c);//Here we are printing our result

	return  0;
}
