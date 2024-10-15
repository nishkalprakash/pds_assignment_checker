#include<stdio.h>

int digits(int n,int size){
	//base condition
	if(n<=0){
		return size;
	}
	//operation to be performed on every recursion
	n /= 10;
	return digits(n,size+1);
}

int IsPalindrome(int arr[],int size,int i){
	//base  condition
	if(i==size/2){
		return 1;
	}
	//break at any point if corresponding req no is not equal 
	if(arr[i] != arr[size-1-i]){
		return 0;
	}
	return (arr,size,i+1);
}

int main(){
	int n;
	scanf("%d",&n);
	int size = digits(n,0);
	int arr[size],i=0;
	//storing the digits of the number in the arrays 
	while(n!=0){
		arr[i] = n%10;
		i++;
		n /= 10;
	}
	//print condition
	if(IsPalindrome(arr,size,0) == 1){
		printf("Palindrome\n");
	}
	else{
		printf("Not Palindrome\n");
	}
	return 0;
}
