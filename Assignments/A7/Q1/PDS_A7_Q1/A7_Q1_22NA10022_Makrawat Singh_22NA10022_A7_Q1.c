/*
 Section 14
 Roll No :22NA10022
 Name : Makrawat Singh
 Assignment No : 7
 Description : To add an element in a sorted array without breaking it's order.
*/

#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main(){
	int n;
	scanf("%d",&n);   //taking the input of number of elements
	int a[n];int c[n+1];
	printf("A[n]=");
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);   //taking input of elements 
	}
	printf("m=");
	int z;scanf("%d",&z);int t=0;  //taking the number to be added as input
	int flag=1;	
	for(int i=0;i<n;i++){
		if(a[i]>z){	//finding the element just bigger than z
			t=i;
			flag=0;
			break;
		}
	}
	if(flag==1){
		t=n;
	}
	for(int i=0;i<t;i++){		//making  a new array and adding elements to it
		c[i]=a[i];
	}
	for(int i=t+1;i<n+1;i++){
		c[i]=a[i-1];
	}
	c[t]=z;
	printf("Output Array: ");
	for(int i=0;i<n+1;i++){		//printing the contents of the new array
		printf("%d ",c[i]);
	}
	return 0;
}
