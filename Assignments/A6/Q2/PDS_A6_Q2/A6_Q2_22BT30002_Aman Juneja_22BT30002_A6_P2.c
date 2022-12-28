/*
* Section 14
* Roll No : 22BT30002
* Name : Aman Juneja
* Assignment No : 6
* Description :given an array of integers to print all the co-prime pairs 
*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define size 20

//recursive function to find gcd
int gcd(int m,int n){

	//base case
	if(m==0){
		return n;
	}
	if(n==0){
		return m;
	}

	//recursive condition
	if(m>n){
		return gcd(m-n,n);
	}
	else{
		return gcd(m,n-m);
	}
	
}

//pair function
void pair(int arr[],int n){
	int x;
	printf("Co-prime pairs:\n");				
	
	//nested for loop for making pairs
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i!=j && i<j){
				
				//checking if gcd==1 or not
				x=gcd(arr[i],arr[j]);
				if(x==1){
					printf("(%d,%d)\t",arr[i],arr[j]); //printing pairs in given format
				}
			}
		}
	}
}

int main(){
	int n,element;
	scanf("%d",&n);
	int arr[size];//array declaration.

	//for loop for taking and checking elements entered in the array.
	for(int i=0;i<n;i++){
		scanf("%d",&element);	//scanning element

		//then checking all conditions
		if(element<0){
			printf("Invalid entries:All should be positive numbers");
			break;
		}
		else{
			if(element!=floor(element)){
				printf("Invalid entries: All should be integer numbers");
				break;
			}
			else{
				//if all conditions are satisfied assign ith location of array the element
				arr[i]=element;
			}			
		}	
	}

	pair(arr,n);
	printf("\n");

	return 0;
}
