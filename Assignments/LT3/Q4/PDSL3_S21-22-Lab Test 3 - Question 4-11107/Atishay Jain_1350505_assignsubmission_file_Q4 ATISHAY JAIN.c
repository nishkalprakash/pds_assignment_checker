#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int isValid(char * s){
    int length = strlen(s);
   int stackSize = 0;
    char *stack = (char *)malloc(length  * sizeof(char));
    for (int i = 0; i < length ; i++)
    {
        char c = s[i];
        if (c == '(' || c == '[' || c == '{')
        {
            // push onto the stack
            stack[stackSize++] = c;
            if (stackSize > length  / 2) return 0;
        }
        else
        {
            // pop from the stack
            if (stackSize == 0) return 0;
            switch (c)
            {
                case ')':
                    if (stack[--stackSize] != '(')
                    {
                        return 0;
                    }
                    break;
                case ']':
                    if (stack[--stackSize] != '[')
                    {
                        return 0;
                    }
                    break;
                default:
                    if (stack[--stackSize] != '{')
                    {
                        return 0;
                    }
                    break;
            }
        }
    }

    free(stack);

    return (stackSize == 0);
}

int main()
{   char str1[100];
    printf("ENTER THE EXPRESSION: ");
    gets(str1);

    if(isValid(str1)){
        printf("   Matched parenthesis");
    }
else{
    printf("     Unmatched parenthesis");
}

    return 0;
}
