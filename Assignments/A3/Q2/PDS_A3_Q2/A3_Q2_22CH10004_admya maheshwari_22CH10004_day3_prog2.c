/*	SECTION        :14
	ROLL NO.       :22CH10004
	NAME           :ADMYA MAHESHWARI
	ASSIGNMENT NO. :3
	DESCRIPTION    :A c program to write integer b/w 20 to 99 in words
*/

#include<stdio.h>

int main()
{ 
	int A;
	scanf("%d",&A);
	switch(A/10){   case 2: printf("twenty");
				break;  

			case 3: printf("thirty");
				break;
		
			case 4: printf("fourty");
				break;
		
			case 5: printf("fifty");
				break;

			case 6: printf("sixty");
				break;

			case 7: printf("seventy");
				break;

			case 8: printf("eighty");
				break;

			case 9: printf("ninty");
				break;
}			printf(" ");		
			
	switch(A%10){	case 1: printf("one");
				break;		

			case 2: printf("two");
				break;

			case 3: printf("three");
				break;

			case 4: printf("four");
				break;

			case 5: printf("five");
				break;

			case 6: printf("six");
				break;

			case 7: printf("seven");
				break;

			case 8: printf("eight");
				break;

			case 9: printf("nine");
				break;
}
	
return 0;
}
