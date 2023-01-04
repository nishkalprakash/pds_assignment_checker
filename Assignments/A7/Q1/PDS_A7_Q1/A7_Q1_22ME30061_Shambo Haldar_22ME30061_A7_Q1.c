/*
Section 14
Roll No: 22ME30061
Name : Shambo Haldar
Assignment No: 7
Description : Program to insert a new value to an already existing sorted array
*/

#include<stdio.h>

int main()
{
	int i,j,n,new_val,temp,arr[50];
	
	printf("Enter the number of terms: ");
	scanf("%d",&n);

	printf("Enter %d integers in ascending order: ",n);
	for(i = 0;i < n;i++)
		scanf("%d",&arr[i]);

	printf("Enter new value: ");
	scanf("%d",&new_val);
	
	arr[n] = new_val;
	
	for(i = n-1;i >= 0;i--){
		if(new_val < arr[i]){
			temp = arr[i];
			arr[i] = new_val;
			arr[i+1] = temp;
		}
	}
	
	printf("Output Array: ");
	
	for(i = 0;i < n+1;i++)
		printf("%d ",arr[i]);
	
	return 0;
}
