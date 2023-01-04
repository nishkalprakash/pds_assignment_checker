/*
Section 14
Name: Nived Shah
Roll No: 22CS10049
Assignment No. : 7
Description: Check for out of order elements
*/

#include <stdio.h>	
#define Length 10	//to set a maximum length of array
int main(){
	int lim, count=0;
	printf("Enter total number of integers to input in array (<10)= ");
	scanf("%d", &lim);
	if(lim<Length){
		int arr[lim], flag;

		printf("Enter the elements\n");
		for(int i=0; i<lim; i++)
			scanf("%d",&arr[i]);
		
		for(int i=0; i<lim; i++){
			for(int j=0; j<i; j++){
				if(arr[i]<arr[j])	//element must not be lesser than preceding elements
					flag=0;		//setting a flag to check for one condition
			}
			for(int j=i; j<lim; j++){
				if(arr[i]>arr[j])	//element must not be greater than subsequent elements
					flag=1;		//setting a flag to check for the other condition
			}
			if(flag==0 || flag==1)		//if either of condition holds, element is out of order, so count increases.
				count++;
		}
	}
	else
		return(0);
	printf("Out of Order : %d\n", count);
	return(0);
}
