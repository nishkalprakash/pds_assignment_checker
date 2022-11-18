# include <stdio.h>

// Function declaration
char bracketPair(char b);

int main(void) {
    char stack[50]; // Array to implement the stack
    int stackSize = 0;

    char expression[100];
    printf("Enter expression: ");
    scanf("%s", expression);

    int isValid = 1;
    for (int i = 0; expression[i] != '\0'; i++) {
        char v = expression[i];
        if (v == ')' || v == '}' || v == ']') { // If the bracket is closing bracket
            if (stackSize <= 0) {
                isValid = 0;
                break;
            }
            if (stack[stackSize - 1] != bracketPair(v)) { // Then check whether the last bracket was corresponding opening bracket
                isValid = 0;
                break;
            }
            stackSize--;
        } else { // Else the bracket is opening bracket, so add it into the stack
            stack[stackSize++] = v;
        }
    }

    if (isValid) {
        isValid = stackSize == 0;
    }

    if (isValid) { // Display the result
        printf("Matched Parenthesis");
    } else {
        printf("Unmatched Parenthesis");
    }
}

char bracketPair(char b) {
    // Function to get the pair of the closing bracket
    if (b == ')') return '(';
    if (b == ']') return '[';
    if (b == '}') return '{';
    return '\0';
}