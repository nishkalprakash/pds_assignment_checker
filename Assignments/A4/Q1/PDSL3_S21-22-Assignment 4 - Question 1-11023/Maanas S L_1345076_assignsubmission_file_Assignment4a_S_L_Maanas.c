/*
Name : S L Maanas
Roll No : 21CH10055
Department : Chemical Engineering
Package : VS Code
Assignment : Assignment 4(a)
*/

#include<stdio.h>

// Recursive Function to find combinations and store into temp[] array temporarily. i is the index of current element in the array arr[]
void combinationUtil(int arr[], int n, int r, int index, int temp[], int i) {

	// All elements of temp are filled, so it is printed.
	if (index == r) 
    {
		for (int j=0; j<r; j++)
			printf("%d ",temp[j]);
		printf("\n");
		return;
	}

	// When no more elements are there to put in temp[]
	if (i >= n)
		return;

	temp[index] = arr[i]; // Add in the element for current position
	combinationUtil(arr, n, r, index+1, temp, i); // Fill the further elements

	combinationUtil(arr, n, r, index, temp, i+1); // If current is excluded
}

int main() //This is the main program.
{ 
	int n, r; //declaring the variables n and r
	printf("Enter number of elements of array: "); //Asking for the number of elements to be present in the array
	scanf("%d", &n); //taking the value of the number of elements to be present in the array
	int arr[n]; //Declaring the array variable
	printf("Enter %d elements for array:\n", n); //Asking for elements of the array
	for (int i = 0; i < n; i++) scanf("%d", &arr[i]); //Taking the elements in the array
	printf("Enter I: "); //Asking for the value of I
	scanf("%d", &r);//Taking the value of I
	int temp[r]; //Declaring an array
	combinationUtil(arr, n, r, 0, temp, 0); //Using the recursive function
	return 0; //This is the return statement
}