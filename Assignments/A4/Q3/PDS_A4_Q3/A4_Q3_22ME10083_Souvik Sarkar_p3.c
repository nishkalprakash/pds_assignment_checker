
/* 22ME10083 assignment 4 sec14*/



#include<stdio.h>


void main()
{

	long int a,b;
	printf("ente integer value having less than or equal to 10 digits");
	scanf("%ld",&a);
	if (a>10){
	   while(a>0){
		 b=a%10;
		 switch(b){
			case 9:
				printf("nine ");
				break;
			case 8:
				printf("eight ");
				break;
			case 7:
				printf("seven ");
				break;
			case 6:
				printf("six ");
				break;
			case 5:
				printf("five ");
				break;
			case 4:
				printf("four ");
				break;
			case 3:
				printf("three ");
				break;
			case 2:
				printf("two ");
				break;
			case 1:
				printf("one ");
				break;
			case 0:
				printf("zero ");
				break;
                          }
                  a=a/10;
               }
            }     
 	  else   {     
		switch(a){
			case 9:
				printf("nine");
				break;
			case 8:
				printf("eight");
				break;
			case 7:
				printf("seven");
				break;
			case 6:
				printf("six");
				break;
			case 5:
				printf("five");
				break;
			case 4:
				printf("four");
				break;
			case 3:
				printf("three");
				break;
			case 2:
				printf("two");
				break;
			case 1:
				printf("one");
				break;
			case 0:
				printf("zero");
				break;
			}
                 } 
}
