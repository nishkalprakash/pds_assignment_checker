
/* 
section 14
roll no 22IM30014
name : #harsh Gupta#
assignment No; 9 
Description - 
*/
#include <stdio.h>
struct complex{                    // creating a structure for complex 
	float real;
	float img;
};
struct complex add(struct complex a,struct complex b){                 // defining a function for adding them 
	struct complex c = {a.real+b.real,a.img+b.img };
	return c;
}	
int main(){
	struct complex a,b;                                              // taking input 
	scanf("%f",&a.real);
	scanf("%f",&a.img);
	scanf("%f",&b.real);
	scanf("%f",&b.img);
	printf("Z = %0.2f + %0.2fi",add(a,b).real,add(a,b).img);                    // printing them 

}
