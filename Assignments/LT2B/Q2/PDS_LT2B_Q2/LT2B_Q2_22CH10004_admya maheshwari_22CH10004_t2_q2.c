/*
Name           : Admya Maheshwari
Roll no.       : 22CH10004
Section        : 14
Lab test no.   : 2 set B
Discription    : compare 2 list and remove common element

*/

#include<stdio.h>
#include<stdlib.h>

void arr(int m,int n){

	int arr[n][m];
	int *ptr;
	ptr =arr;
	for(int i=0;i<m*n;i++){
		printf("enter element number %d of the array ",i+1);
		scanf("%d",&ptr);
		ptr++;
	int m,n;
	printf("enter the value of m and n :");
	scanf("%d %d",&m,&n);
	
		for(int i=0;i<m*n;i++){
		printf("entered array is ");
		printf("%d",*ptr);
		ptr++;
}
}	


	

}

int main(){
int m,n;
arr(m,n);
	return 0;
}
