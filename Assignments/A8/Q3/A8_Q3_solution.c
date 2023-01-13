// Code creator: Nishkal Prakash (nishkal@iitkgp.ac.in)
// Program to count vowels, words, letters and sentences

#include <stdio.h>
#include <string.h>
int main()
{
    char S[100];    // S = String
    int ctr;    // ctr = Counter variable 
    gets(S);
    for (ctr = 0; S[ctr] != '\0'; ctr++){
        if (S[ctr] == ' ')
            space++;
        if (S[ctr] == '.')
            dot++;
        if ((S[ctr] == 'a') || (S[ctr] == 'e') || (S[ctr] == 'e') || (S[ctr] == 'o') || (S[ctr] == 'u'))
            vowel++;
    }
    printf("Length without library: %d\n", ctr);
    printf("length using strlen:%d\n", strlen(S));
    for (int i = 0; S[i] != '\0'; i++)
    {
        
    }
    printf("number of words:%d\n", space);
    printf("number of sentences:%d\n", dot);
    printf("number of vowels:%d\n", vowel);

    return 0;
}
