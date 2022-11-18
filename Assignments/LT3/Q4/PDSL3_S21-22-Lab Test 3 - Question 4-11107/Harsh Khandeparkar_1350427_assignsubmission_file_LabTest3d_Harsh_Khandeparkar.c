/*
	Name: Harsh Khandeparkar
	Roll: 21EC30023
	Dept: Electronics and Electrical Communication Engineering
	Package: Visual Studio Code, gcc v12.1.0
	LabTest: 3(d)
*/

#include <stdio.h>
#define MAX 50 // maximum length of the string

// pushes a character c into the stack
void push(
	char *stack,
	int *stackpos,
	char c
) {
	stack[*stackpos + 1] = c;

	*stackpos = *stackpos + 1;
}

// pops and returns a character from the stack
char pop(
	char *stack,
	int *stackpos
) {
	if (*stackpos >= 0) {
		// decrement stackpos
		*stackpos = *stackpos - 1;

		// return the element at the previous value of stackpos
		return stack[*stackpos + 1];
	}

	// if nothing is present in the stack, return null character
	return '\0';
}

int main() {
	char string[MAX + 1]; // size includes the null termination
	char stack[MAX + 1];

	// currently occupied highest index in the stack
	int stackpos = -1;

	printf("Enter the expression: ");
	scanf("%s", string);

	// position in the string
	int i = 0;

	// 1 if the parenthesis do not match
	int is_invalid = 0;

	while (string[i] != '\0') {
		char c = string[i];

		// if the character is {, (, or [ then push it on to the stack
		if (c == '{' || c == '(' || c == '[') push(stack, &stackpos, c);

		// if the character is }, ), or ] then pop the stack and compare
		if (c == '}' || c == ')' || c == ']') {
			char prev_parenthesis = pop(stack, &stackpos);

			// check if the popped character corresponds to the closing parenthesis
			if (
				!(c == '}' && prev_parenthesis == '{') &&
				!(c == ')' && prev_parenthesis == '(') &&
				!(c == ']' && prev_parenthesis == '[') ||
				prev_parenthesis == '\0' // invalid even if the stack is empty
			) {
				is_invalid = 1;
				break;
			}
		}

		// assuming that c cannot be anything other than the above characters

		i++;
	}

	// if the stack still has elements left, ie if there are any unmatched brackets left, it is invalid
	if (stackpos >= 0) is_invalid = 1;

	if (is_invalid) printf("Result: Unmatched parentheses.\n");
	else printf("Result: Matched parentheses\n");

	return 0;
}