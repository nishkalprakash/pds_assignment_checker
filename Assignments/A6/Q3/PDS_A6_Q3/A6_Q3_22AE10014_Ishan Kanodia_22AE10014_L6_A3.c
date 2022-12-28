/*
Section 14
Roll no. : 22AE10014
Name : Ishan Kanodia
Assignment No. : 3
Description : Taking two sorted arrays and combining them
*/

#include<stdio.h>

int Merge(int size1,int size2,int *ptr1,int *ptr2){
	int i=0,j=0,k=0;
	int A[size1];
	int B[size2];
//	&A[size1]=ptr1;
//	&B[size2]=ptr2;
	ptr1=&A[0];
	ptr2=&B[0];
	int C[size1 + size2];
	while(i<size1&&i<size2&&k<size1+size2){
		if (A[i]<B[j]){
			C[k]=A[i];
			k++;
			i++;
		}
		else if (A[i]>B[j]){
			C[k]=B[j];
			k++;
			j++;
		}
		else if (A[i]==B[j]){
			C[k]=B[j];
			C[k+1]=A[i];
			k+=2;
			j++;
			i++;
		}
	}
	int *ptr;
	ptr=&C[0];
	return(ptr);
}

int main(){
	int size1,size2;
	int A[size1],B[size2];
	int *ptr1;
	int *ptr2;
	ptr1=A[0];
	ptr2=A[0];
	printf("Enter size : ");
	scanf("%d",&size1);
	printf("Enter values : ");
	for(int i=0;i<size1;i++){
		scanf("%d",&A[i]);
	}

	printf("Enter size : ");
	scanf("%d",&size2);
	printf("Enter values : ");
	for(int j=0;j<size2;j++){
		scanf("%d",&B[j]);
	}
	
	int size3=(size1 + size2);
	int C[size3];
	for(int x=0;x<size1+size2;x++){
		printf("%d ",(Merge(size1,size2,*ptr1,*ptr2)+x));
	}
return 0;
}
	
