// Roll No.: 23CS30049
// Name: Shikhar Burman

// Importing libraries
#include <stdio.h>
#include <stdlib.h>

void main()
{
    int roll[20], age[20], marks[20];

    for (int i = 0; i < 20; i++)
    {
        roll[i] = 1000 + (rand() % 1001);
        age[i] = 15 + (rand() % 11);
        marks[i] = rand() % 101;

        printf("Roll: %d\tAge: %d\tMark: %d\n", roll[i], age[i], marks[i]);
    }

    printf("\nMarks of all students having same age:\n");
    int flag1[20] = {0}, jflag1 = 0;

    for (int i = 0; i < 20; i++)
    {

        if (flag1[i] == 1)
            continue;
        for (int j = i + 1; j < 20; j++)
        {
            if (age[i] == age[j])
            {
                printf("Roll: %d\tAge: %d\tMark: %d\n", roll[j], age[j], marks[j]);
                flag1[j] = 1;
                jflag1 = 1;
            }
            if (jflag1 == 1 && j == 19)
            {
                flag1[i] = 1;
                jflag1 = 0;
                printf("Roll: %d\tAge: %d\tMark: %d\n", roll[i], age[i], marks[i]);
                printf(".............................\n");
            }
        }
    }

    printf("\nMarks of all students having same marks:\n");
    int flag2[20] = {0}, jflag2 = 0;

    for (int i = 0; i < 20; i++)
    {

        if (flag2[i] == 1)
            continue;
        for (int j = i + 1; j < 20; j++)
        {
            if (marks[i] == marks[j])
            {
                printf("Roll: %d\tAge: %d\tMark: %d\n", roll[j], age[j], marks[j]);
                flag2[j] = 1;
                jflag2 = 1;
            }
            if (jflag2 == 1 && j == 19)
            {
                flag2[i] = 1;
                jflag2 = 0;
                printf("Roll: %d\tAge: %d\tMark: %d\n", roll[i], age[i], marks[i]);
                printf(".............................\n");
            }
        }
    }

    int temp1 = 0, temp2 = 0, temp3 = 0;
    for (int i = 0; i < 20; i++)
    {
        for (int j = i + 1; j < 20; j++)
        {
            if (roll[i] > roll[j])
            {
                temp1 = roll[i];
                roll[i] = roll[j];
                roll[j] = temp1;
                temp2 = age[i];
                age[i] = age[j];
                age[j] = temp2;
                temp3 = age[i];
                marks[i] = marks[j];
                marks[j] = temp3;
            }
        }
    }

    for (int i = 0; i < 20; i++)
    {
        roll[i] = 1000 + (rand() % 1001);
        age[i] = 15 + (rand() % 11);
        marks[i] = rand() % 101;

        printf("Roll: %d\tAge: %d\tMark: %d\n", roll[i], age[i], marks[i]);
    }
}