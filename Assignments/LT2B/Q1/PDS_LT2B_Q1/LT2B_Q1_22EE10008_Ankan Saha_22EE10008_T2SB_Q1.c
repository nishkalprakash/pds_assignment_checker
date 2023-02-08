/*
Section 14
Roll No : 22EE10008
Name : Ankan Saha
Test 2 Set B
Description : Making sets from 2 strings using linked lists, and finding the difference of those 2 sets 
*/

#include <stdio.h>													// Includes the standard IO header file
#include <stdlib.h>													// for malloc function
#define MAX_LEN 100


typedef struct SET{													// set structure
	char data;
	struct SET *next;
} SET;

int checkIfExists(SET *ptr, char data){								// function to check if data exists in a set
	if(ptr == NULL){												// 0 if it doesn't exist
		return 0;
	}	
	if(ptr->data == data){											// 1 if it exists
		return 1;
	}
	return checkIfExists(ptr->next, data);							// check recursively
}

SET *createEle(char data){											// function to create an element
	SET *temp;
	temp = (SET *) malloc (sizeof(SET));							// mallocate memory
	temp->next = NULL;												// set next to NULL
	temp->data = data;												// assign data
	return temp;
}

SET *buildSet(char L[]){											// function to build a set
	SET *head, *tail, *temp;										// tail is the last element, and temp is a temporary element which is yet to be pushed into the list, head is the start of the list
	head = createEle(L[0]);											// initialize first element
	tail = head;
	for(int i = 1; L[i] != '\0'; i++){
		if(!checkIfExists(head, L[i])){								// since sets have unique values, we only push those elements which are not yet there in the list
			temp = createEle(L[i]);									// create an element
			tail->next = temp;										// set the 'next' of prev element to point to current element
			tail = temp;											// set prev element to current element
		}
	}
	tail->next = NULL;												// last element should point to null
	return head;
}

SET *difference(SET *L1, SET *L2){
	SET *L=NULL, *L1_head = L1, *L2_head = L2, *tail, *temp;		// L is our new set, tail is end of new set, temp is temporary element, then we have the head pointers of L1 and L2

	/*
	In set difference of 2 sets, only those values from
	1st set is taken which are not present in the 2nd set
	*/

	for(; L1_head != NULL; L1_head = L1_head->next){				// traverse through out list
		if(!checkIfExists(L2_head,L1_head->data)){					// check if a data of 1st set is not in 2nd set
			if(L == NULL){											// if its the first element, i.e. L is NULL
				L = createEle(L1_head->data);						// initialize L, or head
				tail = L;											// set tail (end) to head
			}
			else{
				temp = createEle(L1_head->data);					// same as in buildSet() function
				tail->next = temp;
				tail = temp;
			}
		}
	}
	return L;														// return the head pointer
}

void printSet(SET *head){											// function to print the set
	SET *ptr = head;												// head pointer
	for(; ptr != NULL; ptr = ptr->next){							// traverse through list
		if(ptr->next == NULL)										// i have done if else for formatting, if last element then don't print ','
			printf("%c", ptr->data);
		else
			printf("%c, ", ptr->data);
	}
	printf("}\n");													// closing bracket (for formatting)
}

int main() {
	char l1[MAX_LEN], l2[MAX_LEN];									// character arrays
	SET *L1, *L2, *L;												// sets

	printf("#### L1 ####\nEnter string : ");						// taking character array inputs
	scanf("%s", l1);
	L1 = buildSet(l1);

	printf("#### L2 ####\nEnter string : ");
	scanf("%s", l2);
	L2 = buildSet(l2);

	L = difference(L1, L2);

	printf("L1 = {");												// printing (with formatting :))
	printSet(L1);
	printf("-\n");
	printf("L2 = {");
	printSet(L2);
	printf("=\n");
	printf("L = {");
	printSet(L);

	return 0;														// (why does this even exists) returning 0
}