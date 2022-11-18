#include <stdio.h>
int main()
{
    char str[20];
    int x=0, i=0;
    printf("Enter expression: ");
    scanf("%s", str);
    while(str[i]!= '\0')
    {
        // checking the symbol is '('
        if(str[i]=='(')
        {
            x++;    // incrementing 'x' variable
        }
        // checking the symbol is ')'
        else if(str[i]==')')
        {
            x--;   // decrementing 'x' variable
            if(x<0)
                break;
        }
        i++;       // incrementing 'i' variable.
    }
    // Condition to check whether x is equal to 0 or not.
    if(x==0)
    {
        printf("\nMatched Paranthesis\n");
    }

    else
    {
        printf("\nUnmatched Parathesis\n");
    }
    return 0;
}
