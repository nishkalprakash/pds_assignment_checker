// Code creator: Nishkal Prakash (nishkal@iitkgp.ac.in)
/*
Write a menu driven main program which should call the following functions (recursive implementation will be preferable, if it is solvable with recursion) in the following cases:
1.	Reverse the ordering of all elements in an array.

2.	Two strings are said to be anagrams if they satisfy two conditions, the length of both strings must be equal to each other and second the strings must have the same set of characters. For example, top and pot, study and dusty, debit card and bad credit, etc. You shluld not use any function defined in the string.h library.

3.	A string is called a palindrome, if it remains same when the characters in it are arranged in reverse order.
For examples, MADAM, MALAYALAM, 123321, etc.
Write a function int palindrome(char str[20])  to check if the input string, say str is a palindrome (return 1) or not (return 0).

*/

#include <stdio.h>
// MAX value of the array
#define MAX 100

// Function to swap two integers
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Function to reverse the ordering of all elements in an array using tail recursion
void reverse(int *arr, int n)
{
    if (n <= 0)
        return;
    swap(arr, arr + n - 1);
    reverse(arr + 1, n - 2);
}

// Recursive function to return strlen
int strlen(char *str)
{
    if (*str == '\0')
        return 0;
    return 1 + strlen(str + 1);
}

// Function to check if two strings are anagrams using recursion
// int anagram(char *str1, char *str2)
// {
//     if(*str1 == '\0' && *str2 == '\0')
//         return 1;
//     if(*str1 == '\0' || *str2 == '\0')
//         return 0;
//     if(*str1 != *str2)
//         return 0;
//     return anagram(str1+1, str2+1);
// }
// Helper function to remove a character from a string
void remove_char(char *str, int index)
{
    if (str[index] == '\0')
    {
        return;
    }
    str[index] = str[index + 1]; // Replace the current character with the next character
    remove_char(str, index + 1);
}

void check_char(char str, char *str2)
{
    if (*str2 == '\0')
        return;
    if (str == *str2)
        return remove_char(str2, 0);   // Remove the character from the string
    check_char(str, str2 + 1);
}
// Recursive function to check if two strings are anagrams
int anagram(char *str1, char *str2)
{
    if (*str1 == '\0' && *str2 == '\0')
        return 1; // Both strings are empty, so they are anagrams

    if (*str1 == '\0' && *str2 != '\0')
        return 0; // One string is empty and the other is not, so they cannot be anagrams
    check_char(*str1, str2); // Check if the first character of str1 is present in str2
    // anagram(str1, str2 + 1);    // Recurse on the remaining characters
    return anagram(str1 + 1, str2); // Try to find a matching character in str2
}

// Function to check if a string is a palindrome using recursion
int palindrome(char *str, int n)
{
    if (str[0] == '\0' || n <= 0)
        return 1;
    // int l = strlen(str);
    if (str[0] == str[n - 1])
        return palindrome(str + 1, n - 2);
    else
        return 0;
}

// menu driven main function
int main()
{
    int choice;
    printf("Enter your choice:\n1. Reverse the ordering of all elements in an array.\n2. Check if two strings are anagrams.\n3. Check if a string is a palindrome.\n");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
    {
        int n;
        int arr[MAX];
        printf("Enter the number of elements in the array: ");
        scanf("%d", &n);
        printf("Enter the elements of the array: ");
        for (int i = 0; i < n; i++)
            scanf("%d", &arr[i]);
        reverse(arr, n);
        printf("The reversed array is: ");
        for (int i = 0; i < n; i++)
            printf("%d ", arr[i]);
        printf("\n");
        break;
    }
    case 2:
    {
        fflush(stdin);
        char str1[MAX], str2[MAX];
        printf("Enter the first string: ");
        scanf("%[^\n]%*c", str1);
        printf("Enter the second string: ");
        scanf("%[^\n]%*c", str2);
        if (anagram(str1, str2))
            printf("The strings are anagrams.\n");
        else
            printf("The strings are not anagrams.\n");
        break;
    }
    case 3:
    {
        char str[MAX];
        printf("Enter the string: ");
        scanf("%s", str);

        if (palindrome(str, strlen(str)))
            printf("The string is a palindrome.\n");
        else
            printf("The string is not a palindrome.\n");
        break;
    }
    default:
        printf("Invalid choice.\n");
    }
    return 0;
}