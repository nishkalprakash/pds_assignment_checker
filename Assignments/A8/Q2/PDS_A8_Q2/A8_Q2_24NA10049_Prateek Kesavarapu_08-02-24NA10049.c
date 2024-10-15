// Program to sort a given array then insert an element in the correct position of the array
// Code Author: Prateek Kesavarapu
// Roll No    : 24NA10049

#include <stdio.h>
#define MAX_LEN 101

void sort(int *A, int len){ // Sorting the array
	for(int i = 0; i < len; i++){
		for(int j = i + 1; j < len; j++){
			if(A[i] > A[j]){
				int temp = A[i];
				A[i] = A[j];
				A[j] = temp; 
			}
		}
	}
}

void insert(int *A, int len, int num){ // Inserting the element in the array
	int flag = 0, i = 0;
	while(!flag && i < len){
		if(A[i] > num){
			for(int j = len + 1; j > i; j--)
				A[j] = A[j - 1];
			A[i] = num;
			flag = 1;
		}
		i++;
	}
	
	if(!flag)
		A[len] = num;
}

int main(){ 
	int len;
	printf("Enter length of the array: ");
	scanf("%d", &len);
	int A[MAX_LEN];
	printf("Enter elements: ");
	for(int i = 0; i < len; i++)
		scanf("%d", &A[i]);
	sort(A, len);
	
	// Insertion of number
	printf("Enter number to be inserted: ");
	int num;
	scanf("%d", &num);
	insert(A, len, num);
	printf("OUTPUT ARRAY: \n");
	printf("[%d", A[0]);
	for(int i = 1; i < len + 1; i++){
		printf(", %d", A[i]);
	}
	printf("]\n");
	return 0;
}
