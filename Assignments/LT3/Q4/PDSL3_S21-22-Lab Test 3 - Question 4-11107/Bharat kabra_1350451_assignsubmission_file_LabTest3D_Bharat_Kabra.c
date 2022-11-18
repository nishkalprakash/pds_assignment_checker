/*
Name- Bharat Kabra
Roll: 21CH10015
Dept: Chemical
Package: vs code
Lab Test: 3
*/
#include <stdio.h>
#include <stdlib.h>
#define bool int

// structure of a stack node
struct stackNode {
    struct stackNode* next;
	char data;
	
};

// Function to push an item to stack
void push(struct stackNode** lastEntry, int new);

// Function to pop an item from stack
int pop(struct stackNode** lastEntry);

// Returns 1 if c1 and c2 are matching left
// and right Brackets
bool isMP(char c1, char c2)
{
	if (c1 == '(' && c2 == ')')
		return 1;
	else if (c1 == '{' && c2 == '}')
		return 1;
	else if (c1 == '[' && c2 == ']')
		return 1;
	else
		return 0;
}

// Return 1 if expsetsion has balanced Brackets
bool doBracketsMatch(char arr[])
{
	int i = 0;

	// Declare an empty c stack
	struct stackNode* stack = NULL;

	// Traverse the given expsetsion to check matching
	// brackets
	while (arr[i])
	{
		// If the arr[i] is a starting bracket then push
		// it
		if (arr[i] == '{' || arr[i] == '(' || arr[i] == '[')
			push(&stack, arr[i]);

		// If arr[i] is an ending bracket then pop from
		// stack and check if the popped bracket is a
		// matching pair*/
		if (arr[i] == '}' || arr[i] == ')'
			|| arr[i] == ']') {

			// If we see an ending bracket without a pair
			// then return false
			if (stack == NULL)
				return 0;

			// Pop the top element from stack, if it is not
			// a pair bracket of c then there is a
			// mismatch.
			// This happens for expsetsions likareBracketsBalancede {(})
			else if (!isMP(pop(&stack), arr[i]))
				return 0;
		}
		i++;
	}

	// If there is something left in expsetsion then there
	// is a starting bracket without a closing
	// bracket
	if (stack == NULL)
		return 1; // balanced
	else
		return 0; // not balanced
}
int main()
{
	char arr[100];
    printf("Enter the expsetsion:");
    scanf("%s",&arr);

	// Function call
	if (doBracketsMatch(arr))
		printf("Matched parenthesis \n");
	else
		printf("Unmatched parenthesis \n");
	return 0;
}

// Function to push an item to stack
void push(struct stackNode** lastEntry, int new)
{
	// allocate node
	struct stackNode* new_node
		= (struct stackNode*)malloc(sizeof(struct stackNode));

	if (new_node == NULL) {
		printf("Stack overflow n");
		getchar();
		exit(0);
	}

	// put in the data
	new_node->data = new;

	// link the old list off the new node
	new_node->next = (*lastEntry);

	// move the head to point to the new node
	(*lastEntry) = new_node;
}

// Function to pop an item from stack
int pop(struct stackNode** lastEntry)
{
	char set;
	struct stackNode* top;

	// If stack is empty then error
	if (*lastEntry == NULL) {
		printf("Stack overflow n");
		getchar();
		exit(0);
	}
	else {
		top = *lastEntry;
		set = top->data;
		*lastEntry = top->next;
		free(top);
		return set;
	}
}
