/* 
Section 14
Roll No. 22CY10028
Name : Krishna
Assignment No : 3
Description : Program to check points 
*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	float use, a, total;
	printf("Enter the Electricity usage in units:");
	scanf("%f",&use);
	if ( use < 100 ){
		printf("Your Electricity bill is Rs.60");
}
	else if( use >= 100 && use < 200){
		a = use - 100;
		total = (50 + 0.75*a)*1.2;
		printf("Your Electricity bill is Rs.%f",total);
}
	else if( use >=200 && use < 300){
		a = use - 200;
		total = (75 + 1.2*a)*1.2;
		printf("Your Electricity bill is Rs.%f",total);
}
	else {
		a = use - 300;
		total = (245 + 1.5*a)*1.2;
		printf("Your Electricity bill is Rs.%f",total);
}
return 0;
}
