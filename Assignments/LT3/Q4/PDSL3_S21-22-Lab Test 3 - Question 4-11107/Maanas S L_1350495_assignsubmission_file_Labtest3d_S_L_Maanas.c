/*
Name : S L Maanas
Roll No : 21CH10055
Department : Chemical Engineering
Package : VS Code
Assignment : Lab Test 3(d)
*/

#include <stdio.h>
#include <stdlib.h>
#define bool int
struct sNode //Defining a structure
{
	char data;
	struct sNode* next;
};
void push(struct sNode** top_ref, int new_data);
int pop(struct sNode** top_ref);
bool isMatchingPair(char character1, char character2)
{
	if (character1 == '(' && character2 == ')')
		return 1;
	else if (character1 == '{' && character2 == '}')
		return 1;
	else if (character1 == '[' && character2 == ']')
		return 1;
	else
		return 0;
}
bool areBracketsMatched(char exp[]) //function to check wheather the brackets are matched or not
{
	int i = 0;
	struct sNode* stack = NULL;
	while (exp[i])
	{
		if (exp[i] == '{' || exp[i] == '(' || exp[i] == '[')
			push(&stack, exp[i]);
		if (exp[i] == '}' || exp[i] == ')'
			|| exp[i] == ']') {
			if (stack == NULL)
				return 0;
			else if (!isMatchingPair(pop(&stack), exp[i]))
				return 0;
		}
		i++;
	}
	if (stack == NULL)
		return 1; // balanced
	else
		return 0; // not balanced
}
int main()
{
	char exp[100]; //declaring the variable for the expression
    printf("Enter the expression : "); //asking for the expression
    scanf("%s",exp); //taking in the expression

	if (areBracketsMatched(exp)) //calling the function to check wheter the brackets are matched or not
		printf("Matched parenthesis \n"); //if brackets are matched,it prints brackets matched parenthesis
	else
		printf("Unmatched parenthesis \n"); //if brackets are not matched,it prints unmatched parenthesis
	return 0;
}

// Function to push an item to stack
void push(struct sNode** top_ref, int new_data)
{
	struct sNode* new_node
		= (struct sNode*)malloc(sizeof(struct sNode));

	if (new_node == NULL) {
		printf("Stack overflow n");
		getchar();
		exit(0);
	}
	new_node->data = new_data;
	new_node->next = (*top_ref);
	(*top_ref) = new_node;
}
int pop(struct sNode** top_ref)
{
	char res;
	struct sNode* top;
	if (*top_ref == NULL) {
		printf("Stack overflow n");
		getchar();
		exit(0);
	}
	else 
    {
		top = *top_ref;
		res = top->data;
		*top_ref = top->next;
		free(top);
		return res;
	}
}
