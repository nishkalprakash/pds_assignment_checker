/*
RAKESH TARENDRA
21MT30031
*/
#include <stdio.h>
#include <stdlib.h>


// implementing stack
struct stack {
	char data;
	struct stack* next;
};
void push_in(struct stack** top_ref, int new_data)
{
	struct stack* new_node = (struct stack*)malloc(sizeof(struct stack));
	new_node->data = new_data;
	new_node->next = (*top_ref);
	(*top_ref) = new_node;
}
int pop_out(struct stack** top_ref)
{
	char res;
	struct stack* top;
		top = *top_ref;
		res = top->data;
		*top_ref = top->next;
		free(top);
		return res;
}


int isPair(char character1, char character2)
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

int isBalanced(char parenthesis[])
{
	int i = 0;

	struct stack* stack = NULL;

	while (parenthesis[i])
	{
		if (parenthesis[i] == '{' || parenthesis[i] == '(' || parenthesis[i] == '[')
			push_in(&stack, parenthesis[i]);
		if (parenthesis[i] == '}' || parenthesis[i] == ')'
			|| parenthesis[i] == ']') {
			if (stack == NULL)
				return 0;
			else if (!isPair(pop_out(&stack), parenthesis[i]))
				return 0;
		}
		i++;
	}
	if (stack == NULL)
		return 1;
	else
		return 0;
}

int main()
{
	char parenthesis[100] = "{()[]}";
    scanf("%s", &parenthesis);
	if (isBalanced(parenthesis))
		printf("Matched parenthesis\n");
	else
		printf("Unmatched parenthesis\n");
	return 0;
}
