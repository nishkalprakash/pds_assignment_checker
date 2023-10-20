// Roll No.: 23CS30049
// Name: Shikhar Burman

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void display(char **sptr, int n)
{
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("%s\n", sptr[i]);
    }
    printf("\n");
}

void create(char ***sptr, int *n)
{
    do
    {
        printf("How many words do you want to enter? ");
        scanf("%d", n);
        if (*n < 0 || *n > 100)
            printf("Please make sure the choice is in correct range [1,100].\n");
    } while (*n < 0 || *n > 100);

    *sptr = (char **)malloc(*n * sizeof(char *));

    printf("\nEnter %d words:\n", *n);

    char t[100];
    for (int i = 0; i < *n; i++)
    {
        scanf("%s", t);

        (*sptr)[i] = (char *)malloc(strlen(t) * sizeof(char));

        for (int j = 0; j < strlen(t); j++)
            (*sptr)[i][j] = t[j];
    }

    display(*sptr, *n);
}
void lengthStat(char **sptr, int n)
{
    int count1 = 0, count2 = 0, count3 = 0;
    for (int i = 0; i < n; i++)
    {

        if (strlen((sptr)[i]) >= 1 && strlen((sptr)[i]) <= 2)
            count1++;

        if (strlen((sptr)[i]) >= 3 && strlen((sptr)[i]) <= 5)
            count2++;

        if (strlen((sptr)[i]) > 5)
            count3++;
    }
    printf("\nNumber of words with length 1-2 : %d\n", count1);
    printf("Number of words with length 3-5 : %d\n", count2);
    printf("Number of words with length >5 : %d\n\n", count3);
}
void letterStat(char **sptr, int n)
{
    int aCount = 0, eCount = 0, iCount = 0, oCount = 0, uCount = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < strlen(sptr[i]); j++)
        {
            if (sptr[i][j] == 'a')
                aCount++;
            if (sptr[i][j] == 'e')
                eCount++;
            if (sptr[i][j] == 'i')
                iCount++;
            if (sptr[i][j] == 'o')
                oCount++;
            if (sptr[i][j] == 'u')
                uCount++;
        }
    }

    printf("Number of occurunces of a = %d\n", aCount);
    printf("Number of occurunces of e = %d\n", eCount);
    printf("Number of occurunces of i = %d\n", iCount);
    printf("Number of occurunces of o = %d\n", oCount);
    printf("Number of occurunces of u = %d\n\n", uCount);
}
void search(char **sptr, int n)
{
    char s[100];
    printf("Enter string to be searched: ");
    scanf("%s", s);

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        count = 0;
        if (strlen(sptr[i]) == strlen(s))
        {
            for (int j = 0; j < strlen(s); j++)
            {
                if (s[j] == sptr[i][j])
                    count++;
                else
                    break;
            }
        }

        // printf("#%d  %d\n", i, count);
        if (count == strlen(s))
            printf("Found at index %d\n", i);
    }
    printf("\n");
}
void removeDuplicate(char ***sptr, int *n)
{
    int count = 0;
    int countDuplicates = 0;
    for (int i = 0; i < *n; i++)
    {
        for (int j = i; j < *n; j++)
        {
            count = 0;
            if (strlen((*sptr)[i]) == strlen((*sptr)[j]))
            {
                for (int k = 0; k < strlen((*sptr)[i]); k++)
                {
                    if ((*sptr)[i][k] == (*sptr)[j][k])
                        count++;
                    else
                    {
                        count = 0;
                        break;
                    }
                }
                if (count == strlen((*sptr)[i]))
                {
                    (*n)--;
                    // free((*sptr)[j]);
                    // *sptr=realloc(*sptr, *n*sizeof(char));
                    countDuplicates++;
                }
            }
            else
                break;
        }
    }
    display(*sptr, *n-countDuplicates);
}
void searchReplace(){}
void arrange();

int main()
{
    char **sptr;
    int c;
    int n = 0;
    do
    {
        printf("1 -> create\n2 -> lengthStat\n3 -> letterStat\n4 -> search\n5 -> removeDuplicate\n6 -> searchReplace\n7 -> searchDuplicate\n1 -> arrange\n0 -> end\n");
        printf("Enter choice:");
        scanf("%d", &c);
        if (c < 0 || c > 7)
            printf("Please make sure the choice is in correct range.\n");

        switch (c)
        {
        case 1:
            create(&sptr, &n);
            break;
        case 2:
            lengthStat(sptr, n);
            break;
        case 3:
            letterStat(sptr, n);
            break;
        case 4:
            search(sptr, n);
            break;
        case 5:
            removeDuplicate(&sptr, &n);
            break;
        case 6:
            searchReplace();
            break;
        default:
            break;
        }

    } while (c != 0);

    return 0;
}
