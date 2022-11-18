/*Name:- Shubhrashayak Sarkar;
Roll No:- 21NA30029
Package:- Visual Studio Code
Assignment class:- 6
*/
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int n;
char complementary_bracket(char a) // gives the complementary bracket
{
    if (a = '(')
    {
        return ')';
    }
    else if (a = '{')
    {
        return '}';
    }
    else
    {
        return ']';
    }
}

int Index(char a, char b[], int i)
{
    for (int j = i; j < n; j++)
    {
        if (a == b[j])
        {
            return j;
        }
    }
}

int main()
{
    printf("Enter the number of elements\n");
    scanf("%d", &n);
    char expression[n + 1]; // I assume that  only brackets would be given as user input
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &expression[i]); // Takes the expression form user
        getchar();                   // I assume that the user will give the input in different lines
    }
    if (n % 2 != 0)
    {
        printf("Unmatched\n");
        return 0;
    }
    char c;
    for (int i = 0; i < n; i++)
    {
        c = expression[i];
        char b = complementary_bracket(c);
        int j = Index(b, expression, i);
        if ((j - i) % 2 == 0)
        {
            printf("Unmatched\n");
            return 0;
        }
        else
        {
            i = j;
        }
    }
    printf("Matched\n");
    return 0;
}