// Roll No.: 23CS30049
// Name: Shikhar Burman

// Importing libraries
#include <stdio.h>
#include <stdlib.h>

void dist2city(int dist[][5])
{
    char s[2];
    printf("enter 2 characters in range A to E: ");
    scanf("%c%c", &s[0],&s[1]);

    for (int i = 0; i < 2; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
            s[i] = s[i] - 'a' + 'A';
    }

    if (s[0] >= 'A' && s[0] <= 'E' && s[1] >= 'A' && s[1] <= 'E')
    {
        if (dist[s[0] - 65][s[1] - 65] == -1)
            printf("%c and %c are disconnected cities\n", s[0], s[1]);
        else
            printf("distance between cities %c and %c is %d\n", s[0], s[1], dist[s[0] - 65][s[1] - 65]);
    }
    else
        printf("ERROR!!!\nPlease make sure the characters are in the specified range\n");
}

void DistThr1city(int dist[][5])
{
    char s[2];
    do
    {
        printf("enter 2 distinct characters in range A to E: ");
    scanf("%c%c", &s[0],&s[1]);
//        scanf("%s", s);
        if (s[0] == s[1])
            printf("make sure the characters are distinct!\n");
    } while (s[0] == s[1]);

    for (int i = 0; i < 2; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
            s[i] = s[i] - 'a' + 'A';
    }

    for (char c = 'A'; c <= 'E'; c++)
    {
        if (c == s[0] || c == s[1])
            continue;
        if (dist[s[0] - 65][s[1] - 65] == -1 || dist[s[0] - 65][c - 65] == -1 || dist[c - 65][s[1] - 65] == -1)
            printf("From %c to %c via %c unreachable\n", s[0], s[1], c);
        else
            printf("From %c to %c via %c %d kms\n", s[0], s[1], c, (dist[s[0] - 65][c - 65] + dist[c - 65][s[1] - 65]));
    }
}

int main()
{
    int dist[5][5];

    for (int i = 0; i < 5; i++)
    {
        for (int j = i; j < 5; j++)
        {
            if (i == j)
                dist[i][j] = 0;
            else
                dist[i][j] = dist[j][i] = 20 + rand() % 979;
        }
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d\t", dist[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (dist[i][j] > 150)
                dist[i][j] = -1;
            printf("%d\t", dist[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    dist2city(dist);
    printf("\n");
    DistThr1city(dist);
}