/*
Section 14
Roll No : 22EE10008
Name : Ankan Saha
Assignment No : 10
Description : Input customer details, store as ascending order of A/C no. and print in descending order of balance
*/

// Didn't have the time to do the balance part :( , it only prints the customer details in ascending order of account number

#include <stdio.h>											// Includes the standard IO header file
#include <stdlib.h>
#include <string.h>

struct Customer{		// customer datatype
	int ac_no;
	char *name;
	int balance;
};

struct list{		// list datatype
	struct Customer c;
	struct list* next;
};

struct list* createList(struct Customer c){		// used for creating a list element
	struct list* new_ele;
	new_ele = (struct list *) malloc(sizeof(struct list));
	new_ele->c = c;
	return new_ele;
}

void printCustomer(struct Customer c){			// print customer
	printf("A/C No: %d\n", c.ac_no);
	printf("Name: %s\n", c.name);
	printf("Balance: %d\n\n", c.balance);
}

void printlist(struct list* l){				// print linked list
	struct list *temp = l;

	while(temp != NULL){
		printCustomer(temp->c);
		temp = temp->next;
	}
}

struct Customer read(){			// reads customer details
	int ac_no, balance, n;
	char *name = (char *) malloc (100*sizeof(char));

	printf("A/C No: ");
	scanf("%d", &ac_no);

	printf("Name: ");
	scanf("%s", name);
	name = (char *) realloc(name, strlen(name)*sizeof(char));		// reallocating name to the exact size

	printf("Balance: ");
	scanf("%d", &balance);

	struct Customer c;			// constructing customer
	c.ac_no = ac_no;
	c.name = name;
	c.balance = balance;
	return c;
}

struct list* insert(struct list *l, struct Customer cust){			// function to insert into linked list
	struct list *new_ele = createList(cust), *prev, *first;
	if(l == NULL || cust.ac_no <= l->c.ac_no){			// if list is empty or element inserts into the first element
		new_ele->next = l;
		return new_ele;
	}
	else{
		first = l;
		prev = l;
		l = l->next;
		while(l != NULL && cust.ac_no > l->c.ac_no){		// traverse till end of list is reached or a value which is greater than a/c number is reached
			prev = l;
			l = l->next;
		}
		prev->next = new_ele;
		new_ele->next = l;
		return first;
	}
}

int main() {
	int choice = 1;
	struct Customer c;
	struct list* l, *bal_list;
	while(choice == 1){					// main driver code
		c = read();
		l = insert(l, c);
		printf("Do you want to insert more ? (1 for Yes, 0 for No) : ");
		scanf("%d", &choice);
	}
	printf("\n");
	printlist(l);
	
	return 0;
}