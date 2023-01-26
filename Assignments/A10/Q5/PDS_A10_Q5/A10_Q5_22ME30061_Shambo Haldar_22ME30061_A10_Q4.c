/*
Section 14
Roll No: 22ME30061
Name : Shambo Haldar
Assignment No: 10
Description : Program to print the union and intersection of two lists
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int *L1,*L2,*LU,*LI,i,j,n1,n2;
	printf("Enter the number of elements of the lists: ");
	scanf("%d %d",&n1,&n2);

	L1 = (int*)malloc(sizeof(int)*n1);
	L2 = (int*)malloc(sizeof(int)*n2);

	printf("Enter the elements of first list:\n");
	for(i = 0;i < n1;i++){
		scanf("%d",&L1[i]);
	}

	printf("Enter the elements of second list:\n");
	for(i = 0;i < n2;i++){
		scanf("%d",&L2[i]);
	}
	
	LU = LI = (int*)malloc(sizeof(int)*(n1 + n2));

	printf("L (union) = ");
	for(i = 0;i < n1;i++){
		printf("%d ",L1[i]);
	}

	for(i = 0;i < n1;i++){
		for(j = 0;j < n1;j++){
			if(L2[j] != L1[i])
					printf("\n");
		}
	}

	printf("L (intersection) = ");
	
	for(i = 0;i < n1;i++){
		for(j = 0;j < n1;j++){
			if(L1[i] == L2[j])
				printf("%d ",L1[i]);
		}
	}	

		return 0;
}