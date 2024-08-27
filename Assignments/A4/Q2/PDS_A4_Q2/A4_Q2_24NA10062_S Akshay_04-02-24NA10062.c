/*
Program to enter a sequence of numbers and display the two largest values
Program terminates when a negative number is entered

Name: S.Akshay
Roll No.: 24NA10062
*/


#include <stdio.h>
void main(){
	int n,max=0,max2=0;
	printf("Enter numbers: ");
	while(1){

		scanf("%d",&n);
		if(n<0)break;

		if(n>max)max2=max,max=n;
		if(n>max2 && n!=max)max2=n;
		printf("Largest number: %d\n",max);
		if(max2!=0)printf("Second largest number: %d\n\n",max2);
		else printf("Second largest number: Values not yet entered\n\n");
	}
}
