#include<stdio.h>
int digit(int n);		//digit() help to find the number of digits
int ispalindrom(int n);		//ispalindom() help to check if n is palindrom or not

int main (){
	int n;
	printf("Enter any number:");
	scanf("%d",&n);
	digit(n);
	ispalindrom(n);
	return 0;
}
int digit(int n) {
	int s=n/10;
	if (n/10==0) {
		printf("one digit number\n");
	}
	else if (s>=1 && s<=9) {
		printf("two digit number\n");
	}
	else if (s>=10 && s<=99) {
		printf("three digit number\n");
	}
	else if (s>=100 && s<=999) {
		printf("four digit number\n");
	}
	else {
		printf("five digit number\n");
	}

}

int ispalindrom(int n) {
	int y=n/10;
	if (y>=1 && y<=9 || y>=100 && y<=999) {
		printf("not palindrom");
	}
	else if (n/10==0) {
		printf("Palindrom");
	}
	else if (y>=10 && y<=99) {
		int x=n%10;
		int q=y/10;
		if (x==q){
			printf("Palindrom");	
		}
		else {
			printf("not Palindrom");
		}
		
	}
	
}
