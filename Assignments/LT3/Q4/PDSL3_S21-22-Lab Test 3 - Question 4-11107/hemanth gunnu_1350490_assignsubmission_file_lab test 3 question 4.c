//21BT30006
//GUNNU HEMANTH
//SEC-3

#include <stdio.h>
#include <stdlib.h>


struct DATA {                 // structure for stack
    char data;
    struct DATA* next;
};


void push(struct DATA** first, int new_data);// Function fo pushing an item to stack


int pop(struct DATA** first);  // Function to pop an item from stack

// Returns 1 if ch1 and ch2 are matching left and right Brackets

int isMatchingPair(char ch1, char ch2)

{
    if (ch1 == '(' && ch2 == ')')
        return 1;
    else if (ch1 == '{' && ch2 == '}')
        return 1;
    else if (ch1 == '[' && ch2 == ']')
        return 1;
    else
        return 0;
}

// Return 1 if expression has balanced Brackets
int areBracketsBalanced(char str[])
{
    int i = 0;

    // Declare an empty character stack
    struct DATA* stack = NULL;

    // Traverse the given expression to check matching
    // brackets
    while (str[i])
    {
        // If the str[i] is a starting bracket then push
        // it
        if (str[i] == '{' || str[i] == '(' || str[i] == '[')
            push(&stack, str[i]);

        // If str[i] is an ending bracket then pop from stack and check if the popped bracket is a matching pair

        if (str[i] == '}' || str[i] == ')'
            || str[i] == ']') {

            // If we see an ending bracket without a pair
            // then return false
            if (stack == NULL)
                return 0;

            // Pop the first element from stack, if it is not a pair bracket of character then there is a mismatch. his happens for expressions like {(})

            else if (!isMatchingPair(pop(&stack), str[i]))
                return 0;
        }
        i++;
    }

    // If there is something left in expression then there is a starting bracket without a closing bracket

    if (stack == NULL)
        return 1; // balanced
    else
        return 0; // not balanced
}

// Driver code
int main()
{
    char str[100] ;
    printf("enter the expression\n");
    gets(str);


    if (areBracketsBalanced(str))//calling the function.
        printf("Balanced \n");
    else
        printf("Not Balanced \n");
    return 0;
}


void push(struct DATA** first, int new_data)// Function for stack
{
    // allocate node
    struct DATA* new_node
        = (struct sNode*)malloc(sizeof(struct DATA));

    if (new_node == NULL) {
        printf("Stack overflow n");
        getchar();
        exit(0);
    }

    // put in the data
    new_node->data = new_data;

    // link the old list off the new node
    new_node->next = (*first);

    // move the head to point to the new node
    (*first) = new_node;
}

// Function to pop an item from stack
int pop(struct DATA** first)
{
    char res;
    struct DATA* top;

    // If stack is empty then error
    if (*first == NULL) {
        printf("Stack overflow n");
        getchar();
        exit(0);
    }
    else {
        top = *first;
        res = top->data;
        *first = top->next;
        free(top);
        return res;
    }
}
