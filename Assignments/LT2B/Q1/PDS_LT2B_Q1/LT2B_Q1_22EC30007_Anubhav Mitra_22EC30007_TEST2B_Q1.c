 /* Section 14
Name: Anubhav Mitra
Roll: 22EC30007
Test 2 Set B Q1
Description: Program to take two strings as input, create sets of linked lists, then create a difference also implemented through linked lists.
			 Separate functions have been used wherever applicable, a global flag has been declared to reduce extra arguments.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int flag = 1;

typedef struct { // defining struct node for linked list
	char data;
	struct node* next;
} node; // defining node of list

void insertattail (node* head, node* tail, char c) { // function for insert at tail, ie end of linked list

	node* temp = (node*) malloc (sizeof(node));
	temp -> data = c;
	temp -> next = NULL;
	tail -> next = temp;
	tail = temp;

}

void printlist (node* head) { // printing list using recursion
    if (head == NULL) return;
    printf("%c ", head -> data);
    printlist (head -> next);
}


node* createlist (char s[]) { // function to create list as set

    node* head = (node*) malloc (sizeof(node));
    head -> next = NULL;
    node* curr = head;
    curr -> data = s[0]; // creating head
    int i = 1;
    while (s[i] != '\0') { // while not reaching end
    	flag = 1;
    	for (int j = 0; j < i; j++) { // checking for previous occurences
    		if (s[i] == s[j]) {
    			flag = 0;
    			break;
    		}
    	}
    	if (flag) { // if none create new element
        node* temp = (node*) malloc (sizeof(node));
        curr -> next = temp;
        temp -> data = s[i];
        curr = temp;
    	}
        i++;
    }
    return head;

}

node* creatediff (char s1[], char s2[]) { // function to create difference list

    node* head = (node*) malloc (sizeof(node)); // creating head
    head -> next = NULL;
    node* curr = head;
    
    for (int i = 0; s1[i] != '\0'; i++) { // for each element in first string
    	flag = 1;
    	for (int j = 0; s2[j] != '\0'; j++) { // appearing or not anywhere in second string
    		if (s1[i] == s2[j]) { 
    			flag = 0;
    			break;
    		}
    	}
    	if (flag) { // if not then add element
    		node* temp = (node*) malloc (sizeof(node));
        	curr -> next = temp;
        	temp -> data = s1[i];
        	curr = temp;
    	}
    }

    return head;

}



int main() {

char s1[100];
char s2[100]; // using strings to store the data
printf("Enter string: ");
scanf("%s", s1);
printf("Enter string: ");
scanf("%s", s2);


node* head1 = createlist (s1);
node* head2 = createlist (s2); // creating sets

node* head = creatediff (s1, s2); // creating difference list
printf("L1: {");
printlist(head1);
printf("}\nL2: {");
printlist(head2);
printf("}\nL: {");
printlist (head); // printing difference list
printf("}");
return 0;

}
