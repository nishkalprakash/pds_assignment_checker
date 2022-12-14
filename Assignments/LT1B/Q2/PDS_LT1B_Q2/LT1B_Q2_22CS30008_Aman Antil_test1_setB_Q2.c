/*
Section 14
Roll no : 22CS30008
Name : Aman
Test : 1
Description : Program to print pattern
*/
#include<stdio.h>
//defining function for printing one line of the pattern
void pttr(int x){
	for(int i=1;i<=x;i++) printf("%d ", x);
}
int main(){
	int n;
	printf("Enter number of lines : ");
	scanf("%d", &n);//input for number of lines
	for(int i = 1; i<=n; i++){
		pttr(i); //for printing one line
		printf("\n"); //going to next line
	}
	return 0;
}