/*
Section 14
Roll No : 22EE10008
Name : Ankan Saha
Assignment No : <>
Description : 
*/

#include <stdio.h>											// Includes the standard IO header file
#include <stdlib.h>

int* Merge(int size1, int size2, int *ptr1, int *ptr2) {
	int i, counter1 = 0, counter2 = 0, *C;
	C = (int *) malloc((size1+size2)*sizeof(int));

	for(i=0; i < size1 + size2; i++) {
		if(counter2 < size2 && counter1 < size1) {
			if(*(ptr1+counter1) < *(ptr2+counter2)) {
				*(C + i) = *(ptr1+counter1);
				counter1++;
			}
			else {
				*(C + i) = *(ptr2+counter2);
				counter2++;
			}
		}
		else {
			break;
		}
	}
	for(int j = counter1; j < size1; j++) {
		*(C + i) = *(ptr1 + counter1 + j);
		i++;
	}
	for(int j = counter2; j < size2; j++) {
		*(C + i) = *(ptr2 + counter2 + j);
		i++;
	}
	return C;
}

int main() {
	int size1, size2, *A, *B, *C;

	printf("Enter size : ");
	scanf("%d", &size1);
	A = (int *)malloc(size1*sizeof(int));
	printf("Enter values : ");
	for (int i=0; i < size1; i++) {
		scanf("%d", &A[i]);
	}

	printf("Enter size : ");
	scanf("%d", &size2);
	B = (int *)malloc(size2*sizeof(int));
	printf("Enter values : ");
	for (int i=0; i < size2; i++) {
		scanf("%d", &B[i]);
	}

	printf("A : ");
	for (int i=0; i<size1; i++)
		printf("%d ", *(A+i));

	printf("\nB : ");
	for (int i=0; i<size2; i++)
		printf("%d ", *(B+i));
	
	printf("\n");
	C = Merge(size1, size2, A, B);
	printf("\nC : ");
	for (int i=0; i<size1+size2; i++)
		printf("%d ", *(C+i));

	printf("\n");
	return 0;
}