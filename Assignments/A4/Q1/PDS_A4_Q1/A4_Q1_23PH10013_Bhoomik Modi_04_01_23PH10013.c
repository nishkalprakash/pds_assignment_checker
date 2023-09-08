// Name : Bhoomik Modi
// Roll_No. : 23PH10013
#include <stdio.h>
int main(){//Begining of function
	int k,h;//k for kilometers travelled and h for hours
	int r,f;
	printf("Enter the kilometers Travelled and the Hours for which it was rented : ");
	scanf("%d%d",&k,&h);
	// Calculation of Rental
	if (h<1){
		r=0;
	}
	else if (h>=1 && h<12){
		r=200;
	}
	else if (h>=12 && h<24){
		r=300+200;
	}
	else{
		if (h%24==0)
		r=(h/24)*300+200;
		else
		r=((h/24)+1)*300+200;
	}
	// Taxi fare on basis of kilometers travelled
	if (k<=8){
		f=20;
	}
	else if (k>8 && k<=12){
		f=20 +(k-8)*10;
	}
	else if (k>12 && k<=16){
		f=20 +4*10 + (k-12)*8;
	}
	else if (k>16 && k<=20){
		f=20 +4*10 + 4*8+(k-16)*6;
	}
	else
		f=20+40+32+24+(k-20)*5;
	printf("Total fare is : %d\n",(r+f));
	}// end of function
