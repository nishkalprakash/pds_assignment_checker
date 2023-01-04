/*
Section 14
Name: Nived Shah
Roll No: 22CS10049
Assignment No. : 7
Description: Inserting new element such that order is maintained
*/

#include <stdio.h>

int main(){
	int lim, new;
	scanf("%d", &lim);
	int arr[lim];
	
	for(int i=0; i<lim; i++)
		scanf("%d", &arr[i]);
	scanf("%d", &new);
	
	printf("Input Array: ");
	for(int i=0; i<lim; i++)	
		printf("%d ", arr[i]);
	printf("\n");
	
	int arr_new[lim+1];
	int count=0;

	for(int i=0; i<lim; i++){
		if( new> arr[i] )	//every time new number exceeds existing number, it shifts it position by 1 in the index of new array
			count++;	//the count is the index where we get our new number
	}
	
	arr_new[count]=new;
	for(int i=0; i<count; i++)	//all indexes before count remain same
		arr_new[i]=arr[i];
	for(int i=count+1; i<=lim; i++)	//all indexes after count store numbers greater than new number
		arr_new[i]=arr[i-1];
	
	printf("Output Array: ");
	for(int i=0; i<lim+1; i++)
		printf("%d ", arr_new[i]);
	printf("\n");

	return(0);
		
}
