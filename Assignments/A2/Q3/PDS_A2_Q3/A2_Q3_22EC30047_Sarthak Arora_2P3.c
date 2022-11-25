// a program to  find roots a quadratic roots 
#include<stdio.h>
#include<math.h>
int main()

{
	float a,b,c, D, x1, x2; // creating all the variables needed 
	printf(" for the quadratic equantion ax^2 + bx +c , enter the values of a,b,c  \n enter a b c in that order");
	scanf(" %f %f %f", &a, &b, &c); 
	D = b*b - 4*a*c ;

	if(D >= 0){        // adding a condition so that there will not be any error if D became negative
			x1 = (-b + sqrt(D))/(2*a) ;
			x2 = (-b - sqrt(D))/(2*a) ;
			printf(" the two roots are x1=%f and x2=%f \n ", x1, x2);  // printing the roots 
		}
	else{
			printf(" roots are imaginary \n");
			
		}

	return 0;
}


