/*
Name - Harish Takri
Dept - Chemistry
Roll no - 21CY10016
Package - Code Blocks
Operating System - Windows
*/

#include<stdio.h>

void arrange(int *x,int *y,int *z){
	int temp;
	//Comparing and putting the largest number in z
	if(*y > *z){
		temp=*y;
		*y=*z;
		*z=temp;
	}
	//Comparing x and y and putting smallest number in x
	//Then comparing the changed value again with z
	if(*x > *y){
		temp=*x;
		*x=*y;
		*y=temp;
		if(*y > *z){
			temp=*y;
			*y=*z;
			*z=temp;
		}
	}
}

int main(){
	int a,b,c;
	printf("Enter three integers: ");
	scanf("%d %d %d",&a,&b,&c);
	printf("-----Before Function Call-----\n");
	printf("Address of a = %d\n",&a);
	printf("Address of b = %d\n",&b);
	printf("Address of c = %d\n",&c);
	printf("Values of a, b, c = %d %d %d\n\n",a,b,c);
	//Function call to arrange in non-decreasing order
	arrange(&a,&b,&c);
	printf("-----After Function Call-----\n");
	printf("Address of a = %d\n",&a);
	printf("Address of b = %d\n",&b);
	printf("Address of c = %d\n",&c);
	printf("Values of a, b, c = %d %d %d\n\n",a,b,c);
}
