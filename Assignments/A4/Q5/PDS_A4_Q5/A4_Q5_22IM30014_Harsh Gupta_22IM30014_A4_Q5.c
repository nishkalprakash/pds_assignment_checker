/* 
section 14
roll no 22IM30014
name : #harsh Gupta#
assignment No; 4 
Description - 
*/


#include <stdio.h>
#include<math.h>
 
int main() {
   	int m,n,o,p;
	printf("Enter coefficient of x^0: ");
	scanf("%d",&p);
	printf("Enter coefficient of x^1: ");
	scanf("%d",&o);
	printf("Enter coefficient of x^2: ");
	scanf("%d",&n);
	printf("Enter coefficient of x^3: ");
	scanf("%d",&m);
	double a=-100,b=100,c,p_a,p_b,p_c=1.00;
	while(p_c>=(0.001)||p_c<=(-0.001)){
		p_a = ((m*pow(a,3))+(n*pow(a,2))+(o*pow(a,1))+p);
		p_b = ((m*pow(b,3))+(n*pow(b,2))+(o*pow(b,1))+p);		
		c= (p_b*(b-a)/(p_b-p_a)) +a;
		  
		p_c = ((m*c*c*c)+(n*c*c)+(o*c)+p);
		if (p_c<0.001 && p_c>(-0.001)){
			printf("Root of the polynomial: %lf",c);
			break;

		}
		if (p_a>0 && p_c>0){
			a=c;
		}else if (p_a<0 && p_c<0){
			a=c;
		}else{ 
			b=c;}



	}    
}
