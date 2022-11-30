/*
Section 14
Roll no : 22CS30008
Name : Aman
Assignment no : 4
Description : Program to print 1 0 pattern
*/
#include<stdio.h>
int main(){
	int n;
	printf("Enter number of lines : ");
	scanf("%d", &n);
	for(int line=1;line<=n;line++){//looping until line number = n
		if (line%2== 0) {//when line number is even
			for(int col=1;col<=(line/2);col++) printf("1 0 ");
			printf("\n");}
		else { for(int col=1;col<=(line/2);col++) printf("1 0 ");
			printf("1\n");}//when line number is odd
	}
return 0;
}
			
