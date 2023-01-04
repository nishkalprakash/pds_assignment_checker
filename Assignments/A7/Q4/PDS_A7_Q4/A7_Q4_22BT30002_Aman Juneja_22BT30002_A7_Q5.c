/*
* Section 14
* Roll No : 22BT30002
* Name : Aman Juneja
* Assignment No : 7
* Description :to check if given string is anagram or not
*/

#include<stdio.h>

void print(int arr[],int n){ //print function to print array
	for(int i=0;i<n;i++){
	printf("%d ",arr[i]);	
}
}

//main code has logic for the problem
int main(){
	int n,j=0;
	scanf("%d",&n);
	int arr[n],brr[100];
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<n;i++){
		if(arr[i]==9 ){
			brr[j]=arr[i];
			j++;	
		}
	}
for(int i=0;i<n;i++){	
	if(arr[i]/10==9){
			brr[j]=arr[i];
			j++;	
		}
		}
	
	for(int i=0;i<n;i++){
		if(arr[i]==8 ){
			brr[j]=arr[i];
			j++;	
		}
	}
for(int i=0;i<n;i++){	
	if(arr[i]/10==8){
			brr[j]=arr[i];
			j++;	
		}
		}
	
	for(int i=0;i<n;i++){
		if(arr[i]==7 ){
			brr[j]=arr[i];
			j++;	
		}}
	for(int i=0;i<n;i++){	
	if(arr[i]/10==7){
			brr[j]=arr[i];
			j++;	
		}
		}
	
	for(int i=0;i<n;i++){
		if(arr[i]==6 ){
			brr[j]=arr[i];
			j++;	
		}
	}
for(int i=0;i<n;i++){	
	if(arr[i]/10==6){
			brr[j]=arr[i];
			j++;	
		}
		}
	for(int i=0;i<n;i++){
		if(arr[i]==5 ){
			brr[j]=arr[i];
			j++;	
		}
	}

for(int i=0;i<n;i++){	
	if(arr[i]/10==5){
			brr[j]=arr[i];
			j++;	
		}
		}
	
	for(int i=0;i<n;i++){
		if(arr[i]==4 ){
			brr[j]=arr[i];
			j++;	
		}
	}
	
for(int i=0;i<n;i++){	
	if(arr[i]/10==4){
			brr[j]=arr[i];
			j++;	
		}
		}
	
	for(int i=0;i<n;i++){
		if(arr[i]==3 ){
			brr[j]=arr[i];
			j++;	
		}
	}
for(int i=0;i<n;i++){	
	if(arr[i]/10==3){
			brr[j]=arr[i];
			j++;	
		}
		}
	
	for(int i=0;i<n;i++){
		if(arr[i]==2 ){
			brr[j]=arr[i];
			j++;	
		}
	}
for(int i=0;i<n;i++){	
	if(arr[i]/10==2){
			brr[j]=arr[i];
			j++;	
		}
		}

//for loop for all possible combination of numbers
for(int i=0;i<n;i++){
		if(arr[i]==1 ){
			brr[j]=arr[i];
			j++;	
		}
	}
for(int i=0;i<n;i++){	
	if(arr[i]/10==1){
			brr[j]=arr[i];
			j++;	
		}
		}
	
	for(int i=0;i<n;i++){
		if(arr[i]==0 ){
			brr[j]=arr[i];
			j++;	
		}
	}
	print(brr,j);
	
	return 0;
}

