/*
Section 14
Roll No : 22ME10064
Name : Pranshu Dasgupta
Assignment No : 7
Description : Program to insert an element into a sorted array*/

#include <stdio.h>

void create_array(int p[], int size){  //function to create an array of size
	for (int i=0; i<size; i++){
		scanf("%d", &p[i]);	
	}
}

int main(){
	int n, m, k=0;
	printf("Input the number of elements in the array: ");
	scanf("%d", &n);
	int a[n];
	n;
	int final[n+1];  //To accomodate for the extra element that is going to be inserted
	create_array(a, n);
	printf("m=");
	scanf("%d", &m);
	if (m<a[0]){  //For corner case when input element is the least element
		final[k++]=m;
		for (int i=0; i<n; i++){
			final[k++]=a[i];
		}
	}
	else if (m>a[n-1]){  //For corner case when input element is the highest element
		for (int i=0; i<n; i++){
			final[k++]=a[i];
		}
		final[k]=m;
	}
	else if (m<a[n-1]){  //When element lies somewhere in between the corners
		for (int i=0; i<n; i++){
			if (m<=a[i+1] && m>=a[i]){final[k++]=a[i];final[k++]=m;}
			else final[k++]=a[i];
		}
	}
	printf("Output array is: ");
	for(int j=0; j<n+1; j++){
		printf("%d ", final[j]);
	}
	return 0;
}
