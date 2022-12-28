/*
Section 14
Roll No : 22ME10064
Name : Pranshu Dasgupta
Assignment No : 6
Description : Program to check for coprime numbers*/
#include <stdio.h>
#include <stdlib.h>


int flag1=0, flag2=0;
void create_array(int* p, int n){  //function to create array
	for(int i=0;i<n;i++) scanf("%d", p+i);
	return;
}
void print_array(int* p, int n){  //function to print array
	for(int i=0;i<n;i++) printf("%d ", *(p+i));
	return;
}
int* Merge(int size1, int size2, int* p1, int* p2){  //function to merge array
	int i, j, k=0, s;
	int *p3;
	s=size1+size2;
	p3=(int*)malloc(s*sizeof(int));
	for(i=0, j=0; i<size1-1 && j<size2-1;){  //traversing till we reach last element of either array
		if(p1[i]<=p2[j]){ p3[k++]=p1[i]; flag1=1;}
		else flag1=0;
		if(p1[i]>=p2[j]){ p3[k++]=p2[j]; flag2=1;}
		else flag2=0;
		if (flag1 && i!=size1-1) i++;
		if (flag2 && j!=size2-1) j++;
	}
	if (i==size1-1){  //handling case when we are at last element of first array
	while(p1[i]>=p2[j] && j<size2){
		p3[k++]=p2[j++];		
	}
	p3[k++]=p1[i++];
	while(j<size2) p3[k++]=p2[j++];
	}
	else if(j==size2-1){  //handling case when we are at last element of second array
	while(p2[j]>=p1[i] && i<size1){
		p3[k++]=p2[j++];		
	}
	p3[k++]=p2[j++];
	while(i<size1) p3[k++]=p1[i++];
	}
	return p3;
}
int main(){
	int size1, size2;
	int* ptr1;
	int* ptr2;
	int* ptr3;
	//Array 1
	printf("Enter size: ");
	scanf("%d", &size1);
	ptr1=(int*)malloc(size1*sizeof(int));
	printf("Enter values:\n");
	create_array(ptr1, size1);
	//Array 2
	printf("Enter size: ");
	scanf("%d", &size2);
	ptr2=(int*)malloc(size2*sizeof(int));
	printf("Enter values:\n");
	create_array(ptr2, size2);
	//Array 3
	ptr3=Merge(size1, size2, ptr1, ptr2);
	printf("A= ");
	print_array(ptr1, size1);
	printf("B= ");
	print_array(ptr2, size2);
	printf("C= ");
	print_array(ptr3, size1+size2);
	return 0;
}
