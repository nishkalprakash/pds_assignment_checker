/* 	   SECTION        : 14
	   ROLL NO.       : 22CH10004
	   NAME           : ADMYA MAHESHWARI
	   ASSIGNMENT NO. : 7
	   DESCRIPTION    : A C program to add a number in an array
*/

#include<stdio.h>

int main(){
	int n;
	printf("number of element in array :");
	scanf("%d",&n);
	int arr[n];
	//take an array as input here
	for(int i=0;i<n;i++){
		printf("enter array element number:%d\n",i+1);
		scanf("%d",&arr[i]);
				     }
	
	
	for(int j=0;j<n;j++){
		printf("input array");
		printf("%d",arr[j]);	
	}	





	return 0;
}
