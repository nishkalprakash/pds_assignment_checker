/* section 14 
roll no. 22ME10083
assignment 3*/





#include<stdio.h>

int main()
{       int a,i,j,k,l;   // calling variables//
	printf("ENTER ANY TWO DIGIT VALUE BETWEEN 20 TO 99\n");
	scanf("%d",&a);  // input statement //
	i=a/10;
	j=a%10;
	if ((a>19)&&(a<98)){
		
	  switch(i){
		case 2:
			printf("Twenty");
			break;
  		case 3:
			printf("thirty");
			break;
		case 4:
			printf("fourty");
			break;
		case 5:
			printf("fifty");
			break;
		case 6:

			printf("sixty") ;
			break;
		case 7:
			printf("seventy");
			break;
		case 8:
			printf("eighty");
			break;
		case 9: 
			printf("ninety");
			break;
		}
 		switch(j){
			case 1 :
				printf("one");
				break;
			case 2 :
				printf("two");
				break;
			case 3 :
				printf("three");
				break;
			case 4 :
				printf("four");
				break;
			case 5 :
				printf("five");
				break;
			case 6 :
				printf("six");
				break;	
			case 7 :
				printf("seven");
				break;
			case 8 :
				printf("eight");
				break;
			case 9 :
				printf("nine");
                                break;
			}
	     }
	  else 
		printf("ERROR");
    return 0;
}	 
