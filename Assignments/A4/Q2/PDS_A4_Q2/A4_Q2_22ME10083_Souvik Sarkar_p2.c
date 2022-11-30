
/* 22ME10083 assignment 4 sec 14*/



#include<stdio.h> // header files 
 
void main ()  // main functions
{

	int a,b,sum1=0,sum2=0;  // calling variables

	printf("Enter any integer number:");
	scanf("%d",&a);  // taking input
	if (a>0){ 
		while(a>0){       

		b=a%10;
		sum1=sum1+b;
		a=a/10;
	        }
	        printf("Sum of the digits is %d",sum1); // output line
        }
	else{
		while(a<0){       

		b=a%10;
		sum2=sum2+b;
		a=a/10;
		}
		printf("Sum of the digits is %d",sum2); // output line
	   

        }

	



}
	
	

