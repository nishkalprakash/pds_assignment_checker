/*
Section 14
Roll No: 22ME30061
Name : Shambo Haldar
Assignment No: 7
Description : Program to find the number of elements in an array that are out of order
*/

#include<stdio.h>

int main()
{
	int i,j,n,a[10],out = 0;
	
	printf("Enter the number of terms(more than 0 and less than 11): ");
	scanf("%d",&n);

	printf("Enter %d integers: ",n);
	for(i = 0;i < n-1;i++)
		scanf("%d ",&a[i]);

	for(i = 0;i < n-1;i++){
		if(a[i] > a[i+1])
			out = out + 2;
	}

	printf("Out of order: %d",out);
	return 0;
}
