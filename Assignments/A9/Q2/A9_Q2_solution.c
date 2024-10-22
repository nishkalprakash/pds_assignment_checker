/*
2.	Write a C program that takes a string as input and performs a two-step transformation:
Step 1: Remove all consecutive duplicate characters, leaving only one occurrence of each character.
Step 2: For the modified string from Step 1, group the characters by whether they are vowels or consonants, maintaining the order in which they appeared. The program should then return the modified string in the format Vowels: <vowel_string> Consonants: <consonant_string>. If there are no vowels or consonants, that part of the output should be omitted.
If the original string does not contain any consecutive duplicates or if it contains only vowels or consonants, the program should still perform both steps and format the output as described.
Example 1:
Enter a string: AAAaaBBBbbbAaCc
String after deleting the consecutive duplicate characters: AaBbAaCc
Vowels: AaAa Consonants: BbCc

Example 2:
Enter a string: xyz
String after deleting the consecutive duplicate characters: xyz
Consonants: xyz

Example 3:
Enter a string: 
String after deleting the consecutive duplicate characters:
The input string is empty.
*/

// Code creator: Nishkal Prakash (nishkal@iitkgp.ac.in)
// Date: 2024/10/22
// Program to remove consecutive duplicate characters and group characters by vowels and consonants

#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Function to check if a character is a vowel
int isVowel(char c)
{
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

// Function to remove consecutive duplicate characters
void removeConsecutiveDuplicates(char *str)
{
    if (str[0] == '\0')
    {
        printf("String after deleting the consecutive duplicate characters:\n");
        return;
    }

    int len = strlen(str);
    int index = 0;

    for (int i = 0; i < len; i++)
    {
        if (str[i] != str[i + 1])
        {
            str[index++] = str[i];
        }
    }

    str[index] = '\0';
    printf("String after deleting the consecutive duplicate characters: %s\n", str);
}

// Function to group characters by vowels and consonants
void groupCharacters(char *str)
{
    int len = strlen(str);
    char vowels[len], consonants[len];
    int vIndex = 0, cIndex = 0;

    for (int i = 0; i < len; i++)
    {
        if (isVowel(str[i]))
        {
            vowels[vIndex++] = str[i];
        }
        else
        {
            consonants[cIndex++] = str[i];
        }
    }

    vowels[vIndex] = '\0';
    consonants[cIndex] = '\0';

    if (vIndex > 0)
    {
        printf("Vowels: %s ", vowels);
    }

    if (cIndex > 0)
    {
        printf("Consonants: %s\n", consonants);
    }
}

int main()
{
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    if (str[0] == '\n')
    {
        printf("The input string is empty.\n");
        return 0;
    }

    str[strcspn(str, "\n")] = '\0';

    removeConsecutiveDuplicates(str);
    groupCharacters(str);

    return 0;
}