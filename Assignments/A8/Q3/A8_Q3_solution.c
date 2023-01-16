// Code creator: Nishkal Prakash (nishkal@iitkgp.ac.in)
// Program to count vowels, words, letters and sentences

#include <stdio.h>
#include <string.h>

char check_alpabet(char c)
{
    if (65 <= c && c <= 90)
        return c;
    if (97 <= c && c <= 122)
        return c - 32;
    return 0;
}
int check_word_end_char(char c1)
{
    if (c1 == ' ' || c1 == ',' || c1 == ';' ||
        c1 == ':' || c1 == '-' || c1 == '(' ||
        c1 == ')' || c1 == '[' || c1 == ']' ||
        c1 == '/')
        return 1;
    return 0;
}

int check_sen_end_char(char c1)
{
    if (c1 == '\0' || c1 == '.' || c1 == '!' ||
        c1 == '?')
        return 1;
    return 0;
}

int check_vowel_char(char c1)
{
    if (c1 == 'A' || c1 == 'E' || c1 == 'I' ||
        c1 == 'O' || c1 == 'U')
        return 1;
    return 0;
}
int main()
{
    char c = 0, c1, S[100];        // c=temp character variable, S = String
    int A[29] = {};                // A = [0-25:A-Z, 26:Words, 27:Sentences, 28:Vowels]
    int i, v = 28, w = 26, s = 27; // ctr = Counter variable

    gets(S);

    for (i = 0; S[i] != '\0'; i++)
    {

        if (S[i] == ' ') continue;

        c = check_alpabet(S[i]);
        // else continue;
        if (c)
        {
            A[c - 65]++;
            if (check_vowel_char(c))
                A[v]++;
            c1 = S[i + 1];
            if (check_word_end_char(c1))
                A[w]++;
            else if (check_sen_end_char(c1))
            {
                A[s]++;
                A[w]++;
            }
        }
        // }
        
    }
    printf("Length counted without using library: %d\n", i);
    printf("Length using by strlen(): %d\n", strlen(S));
    printf("Number of words:%d\n", A[w]);
    printf("Number of sentences:%d\n", A[s]);
    printf("Number of vowels:%d\n", A[v]);
    printf("Frequency Count of each alphabet: \n");
    for (i = 0; i < 26; i++)
        printf("'%c' - %d, ", i + 97, A[i]);
    return 0;
}
