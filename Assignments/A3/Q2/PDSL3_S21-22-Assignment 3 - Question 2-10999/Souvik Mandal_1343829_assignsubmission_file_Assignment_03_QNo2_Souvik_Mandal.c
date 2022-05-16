/*
Name : Souvik Mandal
Roll No. : 21MF10036
Section : 3
Group : 5
Department : Manufacturing Science And ENGG.
Package : VS Code
Operating System : Windows

*/

#include <stdio.h>

int main()
{
    char s1[100], s2[100];

    printf("Sequence1    ");
    scanf("%s", &s1);

    printf("Sequence2    ");
    scanf("%s", &s2);

    printf("Penalty      ");

    int i = 0, s = 0;

    while (s1[i] != '\0')
    {
        if (s1[i] == s2[i])
        {
            printf("%d", 0);
        }

        else if (s2[i] == '-')
        {
            printf("%d", 2);
            s += 2;
        }

        else
        {
            printf("%d", 1);
            s += 1;
        }

        i++;
    }

    printf("\nSimilarity score = %d", s);
}