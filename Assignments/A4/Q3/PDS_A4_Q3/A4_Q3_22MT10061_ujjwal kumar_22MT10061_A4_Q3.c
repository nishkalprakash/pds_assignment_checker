#include<stdio.h>
  int main()
{
   int n;
   printf("Enter a number to find its reverse : ");
  scanf("%d",&n);
  int reverse_no;
 int once_place_digit,rest_of_digit ;
	while (n!=0) {

	  once_place_digit=n%10;
	  switch(once_place_digit) {
		case 0: printf("zero");
			  break;
		case 1: printf("one");
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
		break;}
		printf("%d",once_place_digit);
	   
		  rest_of_digit=n/10;

	 	 n=rest_of_digit;

	}

    return 0;
}  
  





   return 0;
}
