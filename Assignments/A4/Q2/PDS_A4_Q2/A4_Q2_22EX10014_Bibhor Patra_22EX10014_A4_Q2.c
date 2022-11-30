/*
Section 14
Roll no: 22EX10014
Name: Bibhor Patra
Assignment no:3
Description:Program to print sum of digits of given number
*/

#include<stdio.h>
#include<math.h>
int main(){
	int original_input,number,sum;// declaration of variables
	printf("please enter number");
	scanf("%d",&number);// input taken 
	original_input= number;
	if(number<0){number= - number;}// condition to convert negetive numbers to positive for simpler evaluation
	sum= 0;
	while(number>0){
		sum =sum +(number%10);
		number = number/10;
	}//evaluation of sum
	if(original_input<0){printf("-%d",sum);}//printing of output for negetive cases
	else{printf("%d",sum );}// printing pf output

	return 0;
}