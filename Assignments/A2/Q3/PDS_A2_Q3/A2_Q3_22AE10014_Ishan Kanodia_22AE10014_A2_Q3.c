/* Program to find the roots of the quadratic equation ax^2 + bx +c =0 */

/*Let the roots be x and y*/

/*Let us take the discriminant as d*/

#include<stdio.h>
#include<math.h>

int main()

{

	int a,b,c ;
	float d,x,y ;

	scanf("%d %d %d",&a,&b,&c);//Here we are taking the inputs a,b and c as integers

	d = sqrt(b*b - 4*a*c);//Here we are computing the discriminant of the quadratic equation

	x = (-b+d)/2*a ;//First root
	y = (-b-d)/2*a ;//Second root

	printf("The roots or the quadratic equation are %f and %f ",x,y);

	return 0;
}
