// Roll No.: 23CS30049
// Name: Shikhar Burman

// Importing libraries
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a1[10] = {0}, a2[10] = {0}, a3[10] = {0}, a4[10] = {0}, a5[20], a6[20], a7[40];

    for (int i = 0; i < 10; i++)
    {
        a1[i] = 10 + rand() % 21;
        a2[i] = 30 + rand() % 31;
        a3[i] = 60 + rand() % 31;
        a4[i] = 90 + rand() % 31;
    }

    // Printing a1,a2,a3,a4
    for (int i = 0; i < 10; i++)
    {
        if (i != 9)
            printf("a1[%d] = %d, ", i, a1[i]);
        else
            printf("a1[%d] = %d\n", i, a1[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        if (i != 9)
            printf("a2[%d] = %d, ", i, a2[i]);
        else
            printf("a2[%d] = %d\n", i, a2[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        if (i != 9)
            printf("a3[%d] = %d, ", i, a3[i]);
        else
            printf("a3[%d] = %d\n", i, a3[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        if (i != 9)
            printf("a4[%d] = %d, ", i, a4[i]);
        else
            printf("a4[%d] = %d\n\n", i, a4[i]);
    }

    // Interpersing a1 and a2 into a5
    for (int i = 0; i < 20; i++)
    {
        if (i % 2 == 0)
            a5[i] = a1[i / 2];
        else
            a5[i] = a2[(i - 1) / 2];
    }

    // Printing a1,a2,a5
    for (int i = 0; i < 10; i++)
    {
        if (i != 9)
            printf("a1[%d] = %d, ", i, a1[i]);
        else
            printf("a1[%d] = %d\n", i, a1[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        if (i != 9)
            printf("a2[%d] = %d, ", i, a2[i]);
        else
            printf("a2[%d] = %d\n", i, a2[i]);
    }
    for (int i = 0; i < 20; i++)
    {
        if (i != 19)
            printf("a5[%d] = %d, ", i, a5[i]);
        else
            printf("a5[%d] = %d\n\n", i, a5[i]);
    }

    // Interpersing a3 and a4 into a6
    for (int i = 0; i < 20; i++)
    {
        if (i % 2 == 0)
            a6[i] = a3[(18 - i) / 2];
        else
            a6[i] = a4[(i - 1) / 2];
    }

    // Printing a3,a4,a6
    for (int i = 0; i < 10; i++)
    {
        if (i != 9)
            printf("a3[%d] = %d, ", i, a3[i]);
        else
            printf("a3[%d] = %d\n", i, a3[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        if (i != 9)
            printf("a4[%d] = %d, ", i, a4[i]);
        else
            printf("a4[%d] = %d\n", i, a4[i]);
    }
    for (int i = 0; i < 20; i++)
    {
        if (i != 19)
            printf("a6[%d] = %d, ", i, a6[i]);
        else
            printf("a6[%d] = %d\n\n", i, a6[i]);
    }

    // Merging a5 and a6 into a7
    for (int i = 0; i < 40; i++)
    {
        if (i % 2 == 0)
            a7[i] = a5[(38 - i) / 2];
        else
            a7[i] = a6[(39 - i) / 2];
    }

    // Printing a5,a6,a7
    for (int i = 0; i < 20; i++)
    {
        if (i != 19)
            printf("a5[%d] = %d, ", i, a5[i]);
        else
            printf("a5[%d] = %d\n", i, a5[i]);
    }
    for (int i = 0; i < 20; i++)
    {
        if (i != 19)
            printf("a6[%d] = %d, ", i, a6[i]);
        else
            printf("a6[%d] = %d\n", i, a6[i]);
    }
    for (int i = 0; i < 40; i++)
    {
        if (i != 39)
            printf("a7[%d] = %d, ", i, a7[i]);
        else
            printf("a7[%d] = %d\n", i, a7[i]);
    }
}