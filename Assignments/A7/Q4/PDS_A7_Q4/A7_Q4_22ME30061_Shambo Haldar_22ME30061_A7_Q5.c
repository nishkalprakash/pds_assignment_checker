/*
Section 14
Roll No: 22ME30061
Name : Shambo Haldar
Assignment No: 7
Description : Program to append n numbers to get the largest number
*/

#include<stdio.h>


int main()
{
	int n,i,j,a[100],max;
	printf("Enter the number of terms: ");
	scanf("%d",&n);

	printf("Enter %d numbers: ",n);
	for(i = 0;i < n-1;i++)
		scanf("%d ",&a[i]);

	for(i = 0;i < n;i++){
		max = a[i];
		for(j = 0;j < n;j++){
			if(a[j] > a[i]){
				max = a[j];
			}
		}
		printf("%d",max);
	}
	return 0;
}
