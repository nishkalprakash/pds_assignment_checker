/*
Section 14
Roll No: 22ME30061
Name : Shambo Haldar
Assignment No: 10
Description : Program to store the data of customers
*/

#include<stdio.h>
#include<stdlib.h>

typedef struct{
	int acc_no;
	char name;
	int bal;
}Customer;

/*
struct list{
	int data;
	struct list *next;
};
typedef struct list element;
typedef element *link;
*/


int main()
{
	int n,i;
	Customer *arr;

	printf("Enter the number of records: ");
	scanf("%d",&n);

	arr = malloc(sizeof(int)*n);

	printf("Enter the details of customers:\n");

	printf("Account-number  Name  Balance\n");
	for(i = 0;i < n;i++){
		scanf("%d %s %d",&arr[i].acc_no,arr[i].name,&arr[i].bal);
	}

	printf("\n");

	return 0;
}