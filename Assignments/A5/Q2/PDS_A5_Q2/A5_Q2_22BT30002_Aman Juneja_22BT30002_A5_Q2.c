/*
* Section 14
* Roll No : 22BT30002
* Name : Aman Juneja
* Assignment No : 5
* Description :	two find if the two numbers are co prime or not
*/

#include<stdio.h>

//flag variable to check if atleast one co-prime. 
int flag=0;
int gcd(int a,int b){
		
	int temp=0;
	if(a<b){		//swapping a and b if a<b
		temp=a;
		a=b;
		b=temp;
	}
	//method to calculate gcd 
	while(a%b!=0){
		
		temp=b;
		b=a%b;
		a=temp;
	}	
	return b;	
	
}

//coprime function to check if two numbers are co prime
void CoPrime(int x,int y){

	if(gcd(x,y)==1){ //calling gcd function 
		printf("%d and %d are Co-Prime.\n",x,y);
		flag=1;
	}

}

//pair function to make pairs from array to check for co prime.
void pair(int a[]){

	//nested for loop to make pairs
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			if(a[i]!=a[j] && i<=j){
				CoPrime(a[i],a[j]); //calling CoPrime function. 
			}
		}		
	}	
}

int main(){
	int arr[5]; //array of 5 length declared.

	printf("enter the array elements : ");
	//scanning array elements by using for loop.
	for(int i=0;i<5;i++){
		scanf("%d",&arr[i]);
	}
	pair(arr); //calling pair function
	if(flag==0){
		printf("No CoPrime found");
	}	
	return 0;
}
