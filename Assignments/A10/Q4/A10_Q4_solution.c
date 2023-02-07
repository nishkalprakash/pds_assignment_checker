// Code creator: Nishkal Prakash (nishkal@iitkgp.ac.in)
// Program to check the order of a linked list

#include <stdio.h>
#include <stdlib.h>
#define MAX_NAME 50

typedef struct Customer
{
	long acc_no;     // Account Number of the customer
    char name[MAX_NAME];    // Name of the Customer
    long bal;    //Balance of the customer

	Customer *next;	// Next node based on Account Number
	Customer *next_bal;	// Next node based on Balance
} Customer;


Customer *create_new_node()
{
	Customer *new_node = (Customer *)malloc(sizeof(Customer));

	new_node->next = NULL;
	new_node->next_bal = NULL;

    printf("Enter Account Number: ");
    scanf("%ld",&new_node->acc_no);
    printf("Enter Customer Name: ");
    scanf("%s",new_node->name);
    printf("Enter Balance: ");
    scanf("%ld",&new_node->bal);

	return new_node;
}

Customer *insert_ascending(Customer *head_by_ac,Customer *new_node)
{
    if(head_by_ac==NULL)
        return new_node;

	// CASE 1: number to be inserted in place of head_by_ac
	if(new_node->acc_no < head_by_ac->acc_no){
		new_node->next=head_by_ac;
		return new_node; // as head
	}

	Customer *ptr=head_by_ac;	
	// CASE 2: number to be inserted in the middle or end
	while(ptr!=NULL && ptr->next !=NULL)
	{
		 if(ptr->next->acc_no > new_node->acc_no)
		 	break;
		ptr=ptr->next;
	}
	
	new_node->next=ptr->next;
	ptr->next = new_node;
	return head_by_ac;
}

Customer *createlist()
{
	int cont=0;
	Customer *head_by_ac=NULL;
	do{
		head_by_ac=insert_ascending(head_by_ac,create_new_node());
		printf("Press any key to continue (0 to exit): ");
		scanf("%d",&cont);
	}while(cont);
	return head_by_ac;
}

void print(Customer *ptr)
{
	if (ptr==NULL) return;
	printf("\n#####################\n");
	printf("Account Number: %ld\n", ptr->acc_no);
	printf("Customer Name: %s\n", ptr->name);
	printf("Balance: %ld\n", ptr->bal);
	printf("#####################\n");
	return print(ptr->next);
}


int main()
{
	Customer *head,*head_;
	head = createlist();
	print(head);
	return 0;
}
