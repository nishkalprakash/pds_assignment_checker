/*
Rishabh Bhardwaj
21CE10052
Civil
sec-3
CodeBlock
windows
*/
#include<stdio.h>

int main(void)
{
    int i, length1, length2, pen=0;
    char seq1[100], seq2[100], p[100];
    printf("Sequence1: ");
    scanf("%s", seq1);
    printf("Sequence2: ");
    scanf("%s", seq2);

    for ( i = 0; seq1[i]!='\0'; i++)
    {
        length1++;
    }
    for(i = 0; seq2[i]!='\0'; i++)
    {
        length2++;
    }
    if ( length1 >= length2)
    {
        p[length1];

        for ( i = 0; seq1[i]!='\0'; i++)
        {
            if (seq1[i] == seq2[i])
            {
                p[i] = 0;
            }
            else if (seq1[i] != seq2[i])
            {
                p[i] = 1;
            }
            else
            {
                p[i] = 2;
            }
            pen = pen + p[i];
        }

        printf("Penalty: %s\n ", p);
        printf("Similarity score = %d", pen);
    }
    else
    {
        p[length2];
        for(i = 0; seq2[i]!='\0'; i++)
        {
            if (seq2[i] == seq1[i])
            {
                p[i] = 0;
            }
            else if (seq2[i] != seq1[i])
            {
                p[i] = 1;
            }
            else
            {
                p[i] = 2;
            }
            pen = pen + p[i];
        }

        printf("Penalty: %s\n ", p);
        printf("Similarity score = %d", pen);
    }
}
