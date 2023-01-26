#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
	int accno;
	char Name[];
	int bal;
}Customer;


int main()
{
	Customer *num;
	int n;
	printf("Enter the number of inputs you have to give :\n");
	scanf("%d",&n);
	num = (Customer *)malloc (sizeof(Customer)*n);
	num head;
	head
	//printf("Enter the inputs in order of Account Number, Name, Balance :\n");
	//scanf("%d %s %d",&cust.accno, cust.Name, &cust.bal);
	//printf("%d %s %d\n",cust.accno, cust.Name, cust.bal );
	return 0;
}