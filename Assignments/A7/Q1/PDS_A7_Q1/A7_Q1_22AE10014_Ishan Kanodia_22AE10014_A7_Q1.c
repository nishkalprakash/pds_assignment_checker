/*
Section 14
Roll no. : 22AE10014
Name : Ishan Kanodia
Assignment No. : 7
Question No. : 1
Description : Inserting a new value to an already sorted array
*/

#include<stdio.h>
int main(){
	int arr[100];				//Here we are defining the array
	int new;
	printf("A[n]=");
	for(int i=0;i<5;i++){			//Taking the sorted array as input
		scanf("%d ",&arr[i]);
	}
	scanf("%d",&new);
	for(int j=0;j<5;j++){			//Running a loop to sort the newly entered number
		if(new<arr[j]){
			for(int k=5;k>=j;k--){
				arr[k+1]=arr[k];//The actual computing
			}
		arr[j]=new;
		break;
		}
		else{
		arr[5]=new;
		}
	}
	printf("Output Array: ");
	for(int l=0;l<6;l++){
		printf("%d ",arr[l]);		//Printing the output
	}
return 0;
}
