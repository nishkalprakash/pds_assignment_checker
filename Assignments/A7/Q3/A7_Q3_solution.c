/*You have to store n names (as alphabetic strings of first, middle and last names).
The lengths of the names are not known while you write the program.
This has to be decided at the time of the program execution.
In this context, do the following:
(a)	Declare a pointer array to store n names. Let the array be x.
Read n names from the keyboard and store them in the array x.
(b)	Declare another pointer array to store m names. Let the array be y.
Read m names from the keyboard and store them in the declared array.
(c)	Copy all the names in the array y after the array x.
(d)	Delete all the duplicate entries, if any, except one.

You should print all the arrays once they are loaded.

[(5+5) + 10 + 20 = 40]
Hint:
Use realloc() function to merge two string arrays. For example, if you want to merge x after y, then
x = realloc(x, n); Here, n denotes the size of the array y.
*/
// Code Creator: Nishkal Prakash (nishkal@iitkgp.ac.in)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

// Function to print names
void printNames(char **names, int n, char *var1, char *var2)
{
    printf("## %s ##\n", var2);
    printf("Printing %d names\n(names stored in %s): \n", n, var1);
    printf("#\tName\n");
    printf("===========================\n");
    for (int i = 0; i < n; i++)
        printf("%d\t%s\n", i + 1, names[i]);
}
void getLimit(int *n, char *var1, char *var2)
{
    printf("Enter %s (number of names to be stored in %s): ", var1, var2);
    scanf("%d", n);
    getchar(); // To consume the newline character
}
void init2Darray(char ***names, int n)
{
    // Allocate memory for x
    *names = (char **)calloc(n, sizeof(char *));
}
void readNames(char **names, int n, char *var1)
{
    // int input_len;
    char *input;
    input = (char *)calloc(MAX, sizeof(char));

    // Allocate memory for x
    // names = (char **)calloc(n, sizeof(char *));
    // Take input for n names and store them in x
    printf("Enter %d names (names to be stored in %s): \n", n, var1);
    for (int i = 0; i < n; i++)
    {
        gets(input);
        names[i] = (char *)calloc(strlen(input), sizeof(char));
        strcpy(names[i], input);
    }
    free(input);
}
void merge_helper(char **z, int start, char **x, int n)
{
    for (int i = 0; i < n; i++)
    {
        z[start + i] = (char *)calloc(strlen(x[i]), sizeof(char));
        strcpy(z[start + i], x[i]);
    }
}
// Function to merge two string arrays into x without using an extra variable
void merge(char **z, char **x, int n, char **y, int m)
{
    // Allocate memory for z
    // nm = n + m;
    // Copy all the names in y after x
    merge_helper(z, 0, x, n);
    merge_helper(z, n, y, m);
}
// Function to sort and delete duplicate entries in x
void sortAndDeleteDuplicates(char **x, int *n)
{
    int i, j;
    char *temp = NULL;
    for (i = 0; i < *n; i++)
    {
        for (j = i + 1; j < *n; j++)
        {
            if (strcmp(x[i], x[j]) > 0)
            {
                // swap the pointers of the rows
                temp = x[i];
                x[i] = x[j];
                x[j] = temp;
            }
            // remove duplicates
            else if (strcmp(x[i], x[j]) == 0)
                x[j--] = x[--*n];
        }
    }
}
int main()
{
    // Declare two pointer arrays to store n and m names
    char **X, **Y, **Z;
    int n, m, nm;
    // Take input for n
    getLimit(&n, "n", "X");
    init2Darray(&X, n);
    readNames(X, n, "X");
    printNames(X, n, "X", "After reading X");

    // Take input for m
    getLimit(&m, "m", "Y");
    init2Darray(&Y, m);
    readNames(Y, m, "Y");
    printNames(Y, m, "Y", "After reading Y");

    // Merge x after y
    nm = n + m;
    init2Darray(&Z, nm);
    merge(Z, X, n, Y, m);
    printNames(Z, nm, "Z", "After merging X and Y into Z");

    // Sort and delete duplicates in x
    sortAndDeleteDuplicates(Z, &nm);
    printNames(Z, nm, "Z", "After sorting and deleting duplicates in Z");

    // Free memory
    free(X);
    free(Y);
    free(Z);

    return 0;
}