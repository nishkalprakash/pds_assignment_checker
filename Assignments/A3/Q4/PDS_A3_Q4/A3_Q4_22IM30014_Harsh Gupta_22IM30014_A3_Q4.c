/* 
section 14
roll no 22IM30014
name : #harsh Gupta#
assignment No; 3 
Description - 
*/


#include <stdio.h>
 
int main() {
    	float n;
	scanf("%f",&n);
	if (n<=100) printf("%d",50);
	else if (n>100 && n<=200) printf("%f",50+(0.75*(n-100))+0.20*(50+(0.75*(n-100))));
	else if (n>200 && n<=300) printf("%f",50+75+(1.20*(n-200))+0.20*(50+75+(1.20*(n-200))));
	else printf("%f",50+75+120+(1.50*(n-300))+0.20*(50+75+120+(1.50*(n-300))));
	
    return 0;
    
    
}
