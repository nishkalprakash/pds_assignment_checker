/*
 Section 14
 Roll No :22NA10022
 Name : Makrawat Singh
 Assignment No : 6
 Description : Program to merge two sorted array and return the merged array 
*/

#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int merge(int size1,int size2,int *ptr1,int *ptr2){
	int ptr3[size1+size2];
	for(int i=0;i<size1;i++){
		ptr3[i]=ptr1[i];
	}
	for(int i=size1;i<size1+size2;i++){
		ptr3[i]=ptr2[i-size1];
	}
	int temp;
	for(int i=0;i<size1+size2;i++){
		for(int j=i+1;j<size1+size2;j++){
			if(ptr3[i]<=ptr3[j])continue;
			else {
				temp=ptr3[i];
				ptr3[i]=ptr3[j];
				ptr3[j]=temp;
			}
		}
	}
	for(int i=0;i<size1+size2;i++){
		printf("%d ",ptr3[i]);
	}
}

int main(){
	int size1,size2;
	printf("Enter size: ");
        scanf("%d",&size1);
	printf("Enter Values: ");
        int ptr1[size1];

	for(int i=0;i<size1;i++){
		scanf("%d",&ptr1[i]);
	}
	printf("Enter size: ");
	scanf("%d",&size2);
	printf("Enter Values: ");

	int ptr2[size2];
	for(int i=0;i<size2;i++){
		scanf("%d",&ptr2[i]);
	}
	printf("A= ");
	for(int i=0;i<size1;i++){	
		printf("%d ",ptr1[i]);
	}
 	printf("\nB= ");
	for(int i=0;i<size2;i++){	
		printf("%d ",ptr2[i]);
	}	
	printf("\nC= ");
	merge(size1,size2,ptr1,ptr2);
	return 0;
}
