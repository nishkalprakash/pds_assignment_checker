/*
* SEC: 14
* Roll no: 22EX10034
* Name: Priyanshu Verma 
* Lab test 2
* Description : Defining a single linked list structure to store a list of character of strings 
*/ 
#include <stdio.h>
#include<stdlib.h>


typedef struct SET { 
     
      char data;
      SET *next;
     
}SET;


SET *createlist(int n, int A[])
{
	SET*head, *ptr;
	head = (SET *)malloc(sizeof(SET));
	ptr = head;
	for (int i = 0; i < n - 1; i++)
	{
		ptr->data = A[i];
		ptr->next = (SET *)malloc(sizeof(SET));
		ptr = ptr->next;
	}
	ptr->data = A[n - 1];
	ptr->next = NULL;
	return head;
}


void printlist(SET *I)
{
	if (I == NULL)
	{
		printf("\nEMPTY LIST\n");
	}
	while (I != NULL)
	{
		printf("%d ", I->data);
		I = I->next;
	}
	printf("\n");
}

void print_list()


ptr->next 

char L1[], char L2[]; char diff
printf("Enter the values for L1: ");
scanf("%s",&L1[]);

printf("Enter the values for L2: ");
scanf("%s",&L2[]);

printf(" Difference = %s\n", diff(L1,L2));



int main(){

return 0;
}

diff( char L1 , char L2);
return (L1 - L2);

}


 



