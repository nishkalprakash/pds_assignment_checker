/*
Section 14
Roll No : 22ME10064
Name : Pranshu Dasgupta
Assignment No : 7
Description : Program to check if an element is out of order*/

#include <stdio.h>

void create_array(int p[], int size){  //function to create an array of size n
	for (int i=0; i<size; i++){
		scanf("%d", &p[i]);	
	}
}

int check_order(int a[], int size, int pos){  //function to check if element is in order
	int flag=1;
	for (int i=0; i<pos; i++){
		if (a[pos]<a[i]) flag=0;
	}
	for (int i=pos; i<size; i++){
		if (a[pos]>a[i]) flag=0;
	}
	return flag;
}
int main(){
	int n, count=0;
	printf("Enter the number of elements in the array: ");
	scanf("%d", &n);
	int a[n];
	create_array(a, n);
	for (int i=0; i<n; i++){
		if (!check_order(a,n,i)) count++; //if element is not in order then we increment count
	}
	printf("Out of order: %d", count);
	return 0;
}
