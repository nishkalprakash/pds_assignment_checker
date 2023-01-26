/*
Section 14
Roll No: 22ME30061
Name : Shambo Haldar
Assignment No: 10
Description : Program to find maximun and minimum number of a list
*/

#include<stdio.h>
#include<stdlib.h>

/*struct list{
	int data;
	struct list *next;
};
typedef struct list element;
typedef element *link;

link list(int arr[])
*/

int main()
{
	int i,j,n,*L,count = 1,max,min;
	char check = 'F';

	printf("Enter the number of elements: \n");
	scanf("%d",&n);

	L = (int*)malloc(sizeof(int)*n);

	printf("List elements:\n");
	for(i = 0;i < n;i++)
		scanf("%d",&L[i]);

	printf("The input list ");

	max = min = L[0];
	for(i = 0;i < n;i++){
		count = 0;
		if(L[i] > max)
			max = L[i];
		if(L[i] < min)
			min = L[i];

		for(j = i+1;j < n;j++){
			if(L[i] == L[j])
				count++;
		}
		if(count > 1){
			check = 'T';
		}

	}
	if(check == 'T')
		printf("contains duplicte numbers of: ");
	else
		printf("does not contain any duplicate number.");

	for(i = 0;i < n;i++){
		count = 0;
		for(j = 0;j < n;j++){
				if(L[i] == L[j])
					count++;
		}
		if(count > 1)
			printf("%d ",L[i]);
	}
	printf("\nMinimum number is: %d\n",min);
	printf("Maximum number is: %d\n",max);

	return 0;
}
