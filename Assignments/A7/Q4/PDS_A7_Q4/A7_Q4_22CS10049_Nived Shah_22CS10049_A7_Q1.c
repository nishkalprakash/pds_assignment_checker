/*
Section 14
Name: Nived Shah
Roll No: 22CS10049
Assignment No. : 7
Description: Print largest integer after appending integers
*/

#include <stdio.h>
#include <math.h>

int digit(int n){
	int count=0;
	while(n!=0){
		n/=10;
		count++;
	}
	return(count);
}
int main(){
	int lim, dig;
	printf("Enter total number of integers to input in array = ");
	scanf("%d", &lim);
	int arr[lim];

	printf("Enter the elements\n");
	for(int i=0; i<lim; i++)
		scanf("%d",&arr[i]);
	
	int temp2;
	for(int i=0; i<lim; i++){
		for(int j=i+1; j<lim; j++){
			if( (arr[j]/ pow(10, digit(arr[j])-1)) >= (arr[i]/pow(10, digit(arr[i])-1)) ){
				temp2=arr[j];
				arr[j]=arr[i];
				arr[i]=temp2;
			}
		}
	}			
	for(int i=0; i<lim; i++)
		printf("%d",arr[i]);					
	return (0);
}				

