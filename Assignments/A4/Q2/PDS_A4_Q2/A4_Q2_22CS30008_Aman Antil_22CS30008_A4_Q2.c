/*
Section 14
Roll no : 22CS30008
Name : Aman
Assignment no : 4
Description : Program to calculate sum of digits
*/
#include<stdio.h>
int main(){
	int sum=0, n;
	printf("Enter number : ");
	scanf("%d",&n);
	while(n!=0){//while loop keeps on calculating sum until all digits' sum is calculated
		sum+=n%10; //separates digits
		n=(n/10); // eliminates last digit
		}
	printf("%d", sum);
return 0;
}
	
	
