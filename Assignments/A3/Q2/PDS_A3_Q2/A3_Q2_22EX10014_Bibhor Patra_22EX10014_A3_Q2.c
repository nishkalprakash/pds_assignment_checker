/*
Section 14
Roll no: 22EX10014
Name: Bibhor Patra
Assignment no:3
Description: Program to show time
*/

#include<stdio.h>
#include<math.h>
int main()
{
	int n,unit,tens ; // declaration of variable
	printf("please enter number"); 
	scanf("%d",&n); // input acquired here
    
    unit = n%10;
    tens = n/10;

    switch(tens){
    	case 2:
    	printf("Twenty ");
    	break;
    	case 3:
    	printf("Thirty ");
    	break;
    	case 4:
    	printf("Fourty ");
    	break;
    	case 5:
    	printf("Fifty ");
    	break;
    	case 6:
    	printf("Sixty ");
    	break;
    	case 7:
    	printf("Seventy ");
    	break;
    	case 8:
    	printf("Eighty ");
    	break;
    	case 9:
    	printf("Ninety ");
    	break;
    }
    // Tens place digit printed in words

    switch(unit){
    	case 1:
    	printf("One");
    	break;
    	case 2:
    	printf("Two");
    	break;
    	case 3:
    	printf("Three");
    	break;
    	case 4:
    	printf("Four");
    	break;
    	case 5:
    	printf("Five");
    	break;
    	case 6:
    	printf("Six");
    	break;
    	case 7:
    	printf("Seven");
    	break;
    	case 8:
    	printf("Eight");
    	break;
    	case 9:
    	printf("Nine");
    	break;
    }

    // Units place digit printed in words

    return 0;
}

    

  


    

