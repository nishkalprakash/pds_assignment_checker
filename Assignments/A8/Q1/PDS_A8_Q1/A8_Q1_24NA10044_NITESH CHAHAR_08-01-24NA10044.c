#include<stdio.h>

//recursive function to find the no. digits                
int digits(int n,int size){
	if(n<10){
	return 1;}
	n=n/10;
	size++;
	return digits(n,size);
	
}



int main()
{
	int n;
	// reading a number n from keyboard
	printf("Enter a number: ");
	scanf("%d",&n);
}
