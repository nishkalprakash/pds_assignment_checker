/*
Section 14
Roll No: 22ME30061
Name : Shambo Haldar
Assignment No: 10
Description : Program to check if a list is sorted in ascending or descending order
*/

#include<stdio.h>
#include<stdlib.h>

/*struct list{
	int data;
	struct list *next;
}
*/

int main()
{
	int i,n,*arr;
	char asc = 'T',desc = 'T';

	printf("Enter the number of elements: \n");
	scanf("%d",&n);

	arr = (int*)malloc(sizeof(int)*n);

	printf("List elements:\n");
	for(i = 0;i < n;i++){
		scanf("%d",&arr[i]);
	}

	printf("The input list L is ");

	for(i = 0;i < n - 1;i++){
		if(arr[i] < arr[i+1])
			desc = 'F';
		if(arr[i] > arr[i+1])
			asc = 'F';
	}
	if(asc == 'T')
		printf("in ascending order.");
	else if(desc == 'T')
		printf("in descending order.");
	else
		printf("not in sorted order.");

	return 0;
}
