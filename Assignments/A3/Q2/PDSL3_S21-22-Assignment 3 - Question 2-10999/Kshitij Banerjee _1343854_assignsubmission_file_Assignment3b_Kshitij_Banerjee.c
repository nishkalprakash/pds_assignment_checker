// Name: Kshitij Banerjee
// Roll No: 21CH10035
// Section: 3
// Department: Chemical
// Package: Codeblocks

#include <stdio.h>
int leng(char str[]);
int penalty(char str1[], char str2[], int penel[]);
void shift(int index, char str2[]);

int main()
{
    char s1[50], s2[50];
    printf("Enter Sequence1: ");
    scanf("%s", &s1);
    printf("Enter Sequence2: ");
    scanf("%s", &s2);
    char temp[50];
    for (int i = 0; i < leng(s2); i++)
    {
        temp[i] = s2[i];
        temp[i + 1] = '\0';
    }
    if (leng(s2) > leng(s1))
    {
        for (int i = 0; i < leng(s1); i++)
        {
            s2[i] = s1[i];
            s2[i + 1] = '\0';
        }
        for (int i = 0; i < leng(temp); i++)
        {
            s1[i] = temp[i];
            s1[i + 1] = '\0';
        }
        for (int i = 0; i < leng(s2); i++)
        {
            temp[i] = s2[i];
            temp[i + 1] = '\0';
        }
    }
    if (leng(s1) == leng(s2))
    {
        int penel[leng(s1)];
        int similarity = penalty(s1, s2, penel);
        printf("Penalty:\t");
        for (int i = 0; i < leng(s1); i++)
        {
            printf("%d ", penel[i]);
        }
        printf("\nSimilarity Score = %d\n", similarity);
    }
    else if (leng(s1) - leng(s2) == 1)
    {
        int penel[leng(s1)], similarity = leng(s1) + 1, index = 0;
        for (int i = 0; i < leng(temp); i++)
        {
            shift(i, s2);
            if (similarity > penalty(s1, s2, penel))
            {
                similarity = penalty(s1, s2, penel);
                index = i;
            }
            for (int j = 0; j < leng(temp); j++)
            {
                s2[j] = temp[j];
                s2[j + 1] = '\0';
            }
        }
        printf("\n\nFinal Sequence after inserting gaps:-\n");
        shift(index, s2);
        printf("Sequence 1: %s\nSequence 2: %s\n", s1, s2);
        similarity = penalty(s1, s2, penel);
        printf("Penalty:\t");
        for (int i = 0; i < leng(s1); i++)
        {
            printf("%d ", penel[i]);
        }
        printf("\nSimilarity Score = %d\n", similarity);
    }
    else if (leng(s1) - leng(s2) == 2)
    {
        int penel[leng(s1)], similarity = leng(s1) + 2, index1 = 0, index2 = 0;
        for (int i = 0; i < leng(temp); i++)
        {
            shift(i, s2);
            for (int j = i + 1; j < leng(temp) + 1; j++)
            {
                shift(j, s2);
                if (similarity > penalty(s1, s2, penel))
                {
                    similarity = penalty(s1, s2, penel);
                    index1 = i;
                    index2 = j;
                }
                for (int k = 0; k < leng(temp); k++)
                {
                    s2[k] = temp[k];
                    s2[k + 1] = '\0';
                }
                shift(i, s2);
            }
            for (int l = 0; l < leng(temp); l++)
            {
                s2[l] = temp[l];
                s2[l + 1] = '\0';
            }
        }
        shift(index1, s2);
        shift(index2, s2);
        printf("\n\nFinal Sequence after inserting gaps:-\n");
        printf("Sequence 1: %s\nSequence 2: %s\n", s1, s2);
        similarity = penalty(s1, s2, penel);
        printf("Penalty:\t");
        for (int i = 0; i < leng(s1); i++)
        {
            printf("%d ", penel[i]);
        }
        printf("\nSimilarity Score = %d\n", similarity);
    }
    return 0;
}
int leng(char str[])
{
    int len = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        len++;
    }
    return len;
}
int penalty(char str1[], char str2[], int penel[])
{
    int sum = 0;
    for (int i = 0; i < leng(str1); i++)
    {
        if (str1[i] != str2[i])
        {
            if (str2[i] != '-')
            {
                penel[i] = 1;
            }
            else
            {
                penel[i] = 2;
            }
        }
        else
        {
            penel[i] = 0;
        }
        sum += penel[i];
    }
    return sum;
}
void shift(int index, char str2[])
{
    char str3[100];
    for (int i = 0; i < leng(str2); i++)
    {
        str3[i] = str2[i];
        str3[i + 1] = '\0';
    }
    str2[index] = '-';
    for (int i = index + 1; i < leng(str2) + 1; i++)
    {
        str2[i] = str3[i - 1];
        str2[i + 1] = '\0';
    }
    return;
}
