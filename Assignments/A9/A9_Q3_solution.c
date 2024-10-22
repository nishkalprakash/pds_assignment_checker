/*
Write a C program that takes a string as input and implements two functions: one function that removes all occurrences of a specified character from the string and another function that counts the total number of substrings in the modified string, treating all substrings as distinct, even if they consist of the same characters in different positions.

A substring should be considered distinct based on its position in the original modified string, even if it appears multiple times.

Example 1:
Enter a string: banana
Enter the character to remove: a

The modified string after removing 'a' is: bnn
Number of distinct substrings in bnn: 6
Explanation: The distinct substrings are "b", "n", "nn", "bn", "bnn", and "n".

*/

// Code creator: Nishkal Prakash (nishkal@iitkgp.ac.in)
// Date: 2024/10/22
// Program to remove all occurrences of a specified character and count the total number of distinct substrings

#include <stdio.h>
#include <string.h>

// Function to remove all occurrences of a specified character from the string
void removeCharacter(char *str, char ch)
{
    int len = strlen(str);
    int index = 0;

    for (int i = 0; i < len; i++)
    {
        if (str[i] != ch)
        {
            str[index++] = str[i];
        }
    }

    str[index] = '\0';
    printf("The modified string after removing '%c' is: %s\n", ch, str);
}

// Function to count the total number of distinct substrings
void countDistinctSubstrings(char *str)
{
    int len = strlen(str);
    int count = 0;

    for (int i = 0; i < len; i++)
    {
        for (int j = i; j < len; j++)
        {
            count++;
        }
    }

    printf("Number of distinct substrings in %s: %d\n", str, count);
}

int main()
{
    char str[100], ch;

    // Input string and character to remove
    printf("Enter a string: ");
    scanf("%s", str);
    printf("Enter the character to remove: ");
    scanf(" %c", &ch);

    removeCharacter(str, ch);
    countDistinctSubstrings(str);

    return 0;
}
