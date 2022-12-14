/* 
section 14
roll no 22IM30014
name : #harsh Gupta#
lab test 1 
use -lm
Description - Question 3 
*/
#include <stdio.h>
#include<math.h>
 
int main() {
   	int  a1,a2,b1,b2,c1,c2;
	int  a,b,c;
	scanf("%d",&a1);
	
	scanf("%d",&a2);
	
	scanf("%d",&b1);
	
	scanf("%d",&b2);
	
	scanf("%d",&c1);
	
	scanf("%d",&c2);
	
	
	a= ((b2-a2)*(b2-a2)+(b1-a1)*(b1-a1));   // length of sides 
	b= ((c2-b2)*(c2-b2)+(b1-c1)*(b1-c1));
	c= ((c2-a2)*(c2-a2)+(c1-a1)*(c1-a1));
	if (sqrt(c)>sqrt(b)){
		if (sqrt(c)>sqrt(a)){
			if (sqrt(c)<(sqrt(a)+sqrt(b))){             //  finding the biggest length 
				
				if (c==(a+b)) printf("%s","right angle triangle");
				else if (c>(a+b)) printf("Obtuse angle triangle ");
				else if (c<(a+b)) printf("Acute angle triangle");
			}else printf("Invalid");							
		}else {
			if (sqrt(a)<(sqrt(c)+sqrt(b))){
				
				if (a==(c+b)) printf("%s","right angle triangle");
				else if (a>(c+b)) printf("Obtuse angle triangle ");
				else if (a<(c+b)) printf("Acute angle triangle");
			}else printf("Invalid");
		}
		
	}
	else {                                                  //  finding the biggest length
		if (sqrt(b)>sqrt(a)){
			if (sqrt(b)<(sqrt(a)+sqrt(c))){
				
				if (b==(a+c)) printf("%s","right angle triangle");
				else if (b>(a+c)) printf("Obtuse angle triangle ");
				else if (b<(a+c)) printf("Acute angle triangle");
			}else printf("Invalid");							
		}else {
			if (sqrt(a)<(sqrt(b)+sqrt(c))){
				
				if (a==(b+c)) printf("%s","right angle triangle");
				else if (a>(b+c)) printf("Obtuse angle triangle ");
				else if (a<(b+c)) printf("Acute angle triangle");
			}else printf("Invalid");
		}
	}

	



return 0;
}
