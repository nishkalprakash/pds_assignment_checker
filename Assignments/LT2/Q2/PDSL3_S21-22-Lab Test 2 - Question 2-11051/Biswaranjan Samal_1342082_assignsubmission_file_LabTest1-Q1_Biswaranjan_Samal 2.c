/*
Name:Biswaranjan Samal
Roll no: 21IM10011
Dept: Industrial and Systems Engineering
Package: Codeblocks
Lab Test 2,Question:2
*/


#include <stdio.h>


int maxAlphaValue(int array[],int n){
	int i,j;
	int max = 0;
	for(i = 1;i < n;i++){
		int alpha = 0;
		for(j = 0;j < i;j++){
			if(array[j]%array[i] == 0)     //function whihc compares if preceding element is divisible by i th element.
				alpha++;
		} //total count which increases when one elements divides i element
		if(alpha > max)
			max = alpha;
	}
	return max;
}

int main(){
	int n;
	printf("Enter Number of Elements in Array:");
	scanf("%d",&n);
	int array[10000];
	printf("Enter The Array:");
	int i;
	for(i = 0;i < n;i++)
		scanf("%d",&array[i]); //takes in element of array

	int output = maxAlphaValue(array,n);
	printf("Output: %d",output);
}

