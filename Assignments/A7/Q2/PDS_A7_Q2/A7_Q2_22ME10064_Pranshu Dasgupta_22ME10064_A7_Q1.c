/*
Section 14
Roll No : 22ME10064
Name : Pranshu Dasgupta
Assignment No : 7
Description : Program to check if an array contains m integers*/

#include <stdio.h>

void create_array(int p[], int size){  //function to create an array of size n
	for (int i=0; i<size; i++){
		scanf("%d", &p[i]);	
	}
}

int search_array(int p[], int size, int ele){  //function to search an array for an element
	int count=0;
	for (int i=0; i<size; i++){
		if (p[i]==ele) count++;
	}
	return count;
}

int main(){
	int n, m, k=0, flag=0;
	printf("Input the number of elements: ");
	scanf("%d", &n);
	int a[n];
	int distinct[n];  //an array that stores only distinct values in array 'a'
	create_array(a,n);
	printf("Input the number of occurences you want to search for: ");
	scanf("%d", &m);
	for (int i=0; i<n; i++){  //iterating for all elements in 'a'
		if (!search_array(distinct, k, a[i])){  //checking if element a[i] has already been checked or if it is already in array 'distinct'
			if (search_array(a, n, a[i])==m){
				printf("%d ", a[i]);
				flag=1;  //To check if there are no occurences
			}
			distinct[k++]=a[i];  //updating distinct only if a[i] not in distinct
		}
		else continue;  //If a[i] is already in distinct then skip to next element
	}
	if (flag) printf("appears %d times", m);
	else printf("NO number appears %d times", m);
	return 0;
}
