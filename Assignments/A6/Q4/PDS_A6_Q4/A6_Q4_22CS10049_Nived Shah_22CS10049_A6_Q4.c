/*
Section 14
Name: Nived Shah
Roll No: 22CS10049
Assignment No. :5
Description: Performing certain operations or searching for an element for 2 sets A, B
*/

#include <stdio.h>

int SearchSet(int *A, int n, int x){
	for(int i=0; i<n; i++){
		if(*(A+i)==x)
			printf("%d is Present in set", x);
		else
			printf("%d is NOT Present in set", x);
	}
}
int main(){
	int s1, s2, choice;
	printf("Enter size of set 1 = ");
	scanf("%d", &s1);
	int a[s1];
	printf("Enter the values : ");
	for(int i=0; i<s1; i++)
		scanf("%d", &a[i]);
	
	printf("Enter size of set 2 = ");
	scanf("%d", &s2);
	int b[s2];
	printf("Enter the values : ");
	for(int i=0; i<s2; i++)
		scanf("%d", &b[i]);
	
	printf("Press 1 for searching in A, 2 for searching in B, 3 for finding union of A and B, 4 for finding intersection of A and B, and 5 for finding difference of A and B");
	scanf("%d", &choice);
	int searchA, searchB;
		switch(choice){
			case 1: printf("Enter element you want to search in A= ");
				scanf("%d", &searchA);				
				SearchSet(&a[0], s1, searchA);
				break;
			case 2: printf("Enter element you want to search in B= ");
				scanf("%d", &searchB);				
				SearchSet(&b[0], s2, searchB);
				break;
			default: return (0);
		}
	return(0);
}
			
