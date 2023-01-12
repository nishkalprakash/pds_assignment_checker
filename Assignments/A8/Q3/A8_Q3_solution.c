// Code creator: Nishkal Prakash (nishkal@iitkgp.ac.in)
// Program to count vowels, words, letters and sentences

#include <stdio.h>
#include <string.h>
int main()
{
    char c, c1, S[100];                     // c=temp character variable, S = String
    int A[29] = {}, v = 28, w = 26, s = 27; // A = [0-25:A-Z, 26:Words, 27:Sentences, 28:Vowels]
    int i;                                  // ctr = Counter variable
    gets(S);
    for (i = 0; S[i] != '\0'; i++)
    {
        c = S[i];
        c1 = S[i + 1];
        if (65 <= c && c >= 122)
        {
            if (c >= 97)
                c -= 32;
            if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
                A[v]++;
            if (c > 90 || c1 == ' ' || c1 == ',' || c1 == ';' || c1 == ':' || c1 == '-' || c1 == '(' || c1 == ')' || c1 == '[' || c1 == ']')
            {
                A[w]++;
                // A[]++;
                continue;
            }
            else if (c1 == '\0' || c1 == '.' || c1 == '!' || c1 == '?')
            {
                A[w]++;
                A[s]++;
                continue;
            }
            A[c - 65]++;
        }
    }
    printf("Length counted without using library: %d\n", i);
    printf("Nength using by strlen(): %d\n", strlen(S));
    printf("Number of words:%d\n", A[w]);
    printf("Number of sentences:%d\n", A[s]);
    printf("Number of vowels:%d\n", A[v]);
    printf("Frequency Count of each alphabet: \n");
    for (i = 0; i < 26; i++)
        printf("'%c' - %d, ", i + 97, A[i]);
    return 0;
}
