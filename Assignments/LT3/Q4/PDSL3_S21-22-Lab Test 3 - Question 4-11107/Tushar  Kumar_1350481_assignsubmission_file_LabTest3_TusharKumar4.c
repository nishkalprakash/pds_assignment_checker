/*
Tushar Kumar
21CH30035
Chemical Engineering
Section 3
Code Blocks
Windows 10
*/
#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>

struct sNode {                           // writing a structure consisting of character named data
	char data;
	struct sNode* next;
};

void push(struct sNode** top_ref, int new_data)
{
	struct sNode* new_node
		= (struct sNode*)malloc(sizeof(struct sNode));

	new_node->data = new_data;
	new_node->next = (*top_ref);
	(*top_ref) = new_node;
}

int pop(struct sNode** top_ref)
{
	char res;
	struct sNode* top;

		top = *top_ref;
		res = top->data;
		*top_ref = top->next;
		free(top);
		return res;
}

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

bool areBracketsBalanced(char exp[])
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
		return 1;
	else
		return 0;
}

int main()                                                    //calling the main function
{
	char exp[100] ;                                           //defining a array which would consist our characters
    printf("Enter expression: ");
    scanf("%s",exp);                                           //taking the inputs

	if (areBracketsBalanced(exp))                              // if loop that is if by above conditions if brackets are balanced it would print Matched Parenthesis otherwise Unmatched parenthesis.
		printf("Result: Matched parenthesis\n");
	else
		printf("Result: Unmatched parenthesis\n");
	return 0;
}
