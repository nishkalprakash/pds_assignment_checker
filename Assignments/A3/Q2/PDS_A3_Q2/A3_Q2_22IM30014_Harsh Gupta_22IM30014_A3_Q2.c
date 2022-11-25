/* 
section 14
roll no 22IM30014
name : #harsh Gupta#
assignment No; 3 
Description - Question 2 
*/


#include <stdio.h>
 
int main() {
   	int n,m;
	scanf("%d",&n);
	m = n%10;
	n = (n-m)/10;

	switch (n){
	case 2 : 
		printf("Twenty ");
		break;
	case 3 : 
		printf("Thirty ");
		break;
	case 4 : 
		printf("Fourty ");
		break;
	case 5 : 
		printf("Fifty ");
		break;	
	case 6 : 
		printf("Sixty ");
		break;
	case 7 : 
		printf("Seventy ");
		break;
	case 8 : 
		printf("Eighty ");
		break;
	case 9 : 
		printf("Ninty ");
		break;
	}
	switch (m){
	case 1 : 
		printf("One");
		break;
	case 2 : 
		printf("Two");
		break;
	case 3 : 
		printf("Three");
		break;
	case 4 : 
		printf("Four");
		break;
	case 5 : 
		printf("Five");
		break;	
	case 6 : 
		printf("Six");
		break;
	case 7 : 
		printf("Seven");
		break;
	case 8 : 
		printf("Eight");
		break;
	case 9 : 
		printf("Nine");
		break;
	}
	

	
    return 0;
    
    
}
