/*
Section 14
Roll no : 22CS30008
Name : Aman
Test : 1
Description : Program to find Largest and Second largest number
*/
#include<stdio.h>
int main(){
	int max=0, max2=0, y;
	printf("Enter numbers : ");
	while(1){
		scanf("%d", &y);
		if(y<0) break; //loop breaks when negtive integer is input
		if(y>max){
			max2=max; //if entered number is maximum
			max=y;
		}
		else if (y>max2&&y<max) max2=y; //if entered number is second maximum
		//when only one number is input
		if(max2<=0) printf("Largest number: %d\nSecond largest number: Value not entered yet\n", max);
		else printf("Largest number: %d\nSecond largest number: %d\n", max, max2);
	}
	return 0;
}