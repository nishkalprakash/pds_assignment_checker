/*
Section 14
Roll No : 22ME10064
Name : Pranshu Dasgupta
Assignment No : 7
Description : Program to append the maximum possible number in an array*/

#include <stdio.h>

//Assuming input elements to be 2 digit numbers and 1 digit numbers only

void create_array(int p[], int size){  //function to create an array of size
	for (int i=0; i<size; i++){
		scanf("%d", &p[i]);	
	}
}

void swap(int p[], int a, int b){  //function to swap two elements of an array at position a and position b
	int t=p[a];
	p[a]=p[b];
	p[b]=t;
}

int firstdigit(int n){append the maximum possible number in an array
	if (n/10==0) return n;
	else return n/10;
}

int second(int n){  //function to return second digit if number is 2 digit else return number itself if it is 1 digit
	if (n/10==0) return n;
	else return n%10;
}

void bub_sort_first(int a[], int size){  //bubble sort on the basis of first digit of the element only
	for (int i=0; i<size; i++){
		for (int j=0; j<size-i-1; j++){
			if (firstdigit(a[j])<firstdigit(a[j+1])) swap(a, j, j+1);
		}
	}
}

void bub_sort_second(int a[], int size){  //bubble sort on the basis of second digit only and swapping only if first digit of two elements are equal. For example 9 and 97 or 93 and 95.
	for (int i=0; i<size; i++){
		for (int j=0; j<size-i-1; j++){
			if (firstdigit(a[j])==firstdigit(a[j+1])){
			if (second(a[j])<second(a[j+1])) swap(a, j, j+1);}
		}
	}
}

int main(){
	int n;
	printf("Enter the number of elements: ");
	scanf("%d", &n);
	int a[n];
	create_array(a,n);
	bub_sort_first(a,n);
	bub_sort_second(a,n);
	for(int j=0; j<n; j++){  //printing the maximum possible appended number
			printf("%d", a[j]);
		}
	return 0;
}

