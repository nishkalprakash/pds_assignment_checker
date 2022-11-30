/* 
section 14
roll.no. = 22EC30047
name = SARTHAK ARORA
Assignment .no  : 4
description: finding the roots of a cubic equation  
*/ 




# include <stdio.h>
# include <stdlib.h>


int main()
{

    // asking the user to enter coefficient of the cubic equation
	float x_0,x_1,x_2,x_3;
	printf(" enter coefficient of x^0: ");
	scanf("%f",&x_0);
	printf(" enter coefficient of x^1: ");                                            
	scanf("%f",&x_1);
	printf(" enter coefficient of x^2: ");
	scanf("%f",&x_2);
	printf(" enter coefficient of x^3: ");
	scanf("%f",&x_3);
	float a,b,c;
	float P_a,P_b,P_c;

	if(x_3 != 0){              // checking coeffiecient of x^3


    //checking a and b are such that a>b and there is a root in [a,b]
		a=1;
		b=2;
		P_a = x_3*a*a*a +x_2*a*a +x_1*a +x_0 ;
		P_b = x_3*b*b*b +x_2*b*b +x_1*b +x_0 ;
		while((P_a)*(P_b) > 0){
			
			printf(" enter the numbers a and b  ");
			scanf("%f %f", &a, &b);
			P_a = x_3*a*a*a +x_2*a*a +x_1*a +x_0 ;
			P_b = x_3*b*b*b +x_2*b*b +x_1*b +x_0 ;
			
			}
		int temp;
		if(a<b){ temp=a  ; a=b ; b=temp; }
		printf("a=%f , b =%f \n",a,b);
		
	// approaching to the root 

		c = b  - (P_b)*(b-a)/(P_b - P_a) ;
		P_c = x_3*c*c*c +x_2*c*c +x_1*c +x_0;

		while(P_c > 0.001 || P_c < 0.001){           // root is approximated by 0.001
			

			if(P_a * P_c > 0) {a=c;}
			else {b=c;}
			P_a = x_3*a*a*a +x_2*a*a +x_1*a +x_0 ;
			P_b = x_3*b*b*b +x_2*b*b +x_1*b +x_0 ;

			c = b  - (P_b)*(b-a)/(P_b - P_a) ;
			P_c = x_3*c*c*c +x_2*c*c +x_1*c +x_0;

			if(P_c <0.001 && P_c>-0.001) break;    // breaking the while loop if  absolute value of P(c) is less tha 0.001
			}

		printf(" one root of the equation is %f",c);
	}
	else printf("coefficient of x^3 cannot be 0");

	
		 







	
	
	
	return 0;
}
