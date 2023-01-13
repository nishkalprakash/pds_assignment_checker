// Code creator: Nishkal Prakash (nishkal@iitkgp.ac.in)
// Program to find Palindromic Substrings

#include <stdio.h>
int check_palindrome(char *A, int b, int e)
{ // Checking Palindrome subsring
    for (int i = 0; i < (e - b + 1) / 2; i++)
        if (A[b + i] != A[e - i])
            return 0;
    return 1;
}

int print_substring(char *A, int b, int e)
{ // Printing Palindrome subsring
    for (int i = b; i <= e; i++)
        printf("%c", A[i]);
    printf(", ");
    return 1;
}
int main()
{
    char A[100];  // A = Char array
    int i, j;     // i,j = Loop Vars
    int l;        // l = Lenth of String in A
    int flag = 0; // flag = flag to check for at least one palindrome

    printf("Enter a string: ");
    scanf("%s", A);

    for (; A[++l] != '\0';)
        ; // Counting String Len of A

    for (i = 0; i < l; i++)
        for (j = i + 1; j < l; j++)
            if (check_palindrome(A, i, j))
                flag = print_substring(A, i, j); // Printing Palindrome subsring

    if (!flag)
        printf("No palindrome substring present");

    return 0;
}
