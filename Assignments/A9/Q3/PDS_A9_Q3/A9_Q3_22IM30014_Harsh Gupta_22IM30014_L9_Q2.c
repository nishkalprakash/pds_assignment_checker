/* 
section 14
roll no 22IM30014
name : #harsh Gupta#
assignment No; 9 
Description - 
*/


#include <stdio.h>
#include<string.h>

struct rec{               // creating a structure for rectangle 
	float x,y;
};
float area(struct rec a,struct rec b){                                   // to find the area and returning the value in float     
	return (b.x-a.x)*(b.y-a.y);
}
int main() {
	struct rec a,b;
	scanf("%f",&a.x);                           // buttom left corner 
	scanf("%f",&a.y);
	scanf("%f",&b.x);							// buttom right corner 
	scanf("%f",&b.y);
	printf("Area : %0.2f ", area(a,b));                                // printing the area 


    return 0;
    
    
}
