// Name=Kshitij Banerjee
// Roll No=21CH10035
// Department=Chemical
// Package=Codeblocks
// OS=Windows11

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand(time(0));
    int n;
    printf("Number of rounds: ");
    scanf("%d", &n);

    int a, b;
    int a_P = 0, b_P = 0, a_B = 0, b_B = 0;

    printf("\n");
    for (int i = 1; i <= n; i++)
    {
        int a_S = 0, b_S = 0, a_D = 0, b_D = 0;
        printf("Round-%d -> ", i);
        a = (rand() % (1000 - 5 + 1)) + 5;
        b = (rand() % (1000 - 5 + 1)) + 5;

        printf("A's number: %d B's number: %d\n", a, b);
        int temp_a = a, temp_b = b;
        while (temp_a != 0)
        {
            a_S = a_S + temp_a % 10;
            temp_a = temp_a / 10;
            a_D++;
        }
        while (temp_b != 0)
        {
            b_S = b_S + temp_b % 10;
            temp_b = temp_b / 10;
            b_D++;
        }
        if (a_D != b_D)
        {
            printf("\t A's point: %d\tB's point: %d\n", a_D, b_D);
            a_P = a_P + a_D;
            b_P = b_P + b_D;
            if (a_D > b_D)
            {
                printf("\t A's badge: 1\tB's badge: 0\n");
                printf("\t -- A wins round %d --\n", i);
                a_B++;
            }
            else if (a_D < b_D)
            {
                printf("\t A's badge: 0\tB's badge: 1\n");
                printf("\t -- B wins round %d --\n", i);
                b_B++;
            }
            else
            {
                printf("\t A's badge: 0\tB's badge: 0\n");
                printf("\t -- Noone wins round %d --\n", i);
            }
        }
        else
        {
            printf("\t A's point: %d\tB's point: %d\n", a_S, b_S);
            a_P = a_P + a_S;
            b_P = b_P + b_S;
            if (a_S > b_S)
            {
                printf("\t A's badge: 1\tB's badge: 0\n");
                printf("\t -- A wins round %d --\n", i);
                a_B++;
            }
            else if (a_S < b_S)
            {
                printf("\t A's badge: 0\tB's badge: 1\n");
                printf("\t -- B wins round %d --\n", i);
                b_B++;
            }
            else
            {
                printf("\t A's badge: 0\tB's badge: 0\n");
                printf("\t -- Noone wins round %d --\n", i);
            }
        }
    }
    int t_A = a_P * a_B;
    int t_B = b_P * b_B;
    printf("\nFinal result => A's total score: %d,\tB's total score: %d\n", t_A, t_B);
    if (t_A > t_B)
    {
        printf("\t--- A wins the game ---\n");
    }
    else if (t_A < t_B)
    {
        printf("\t--- B wins the game ---\n");
    }
    else
    {
        printf("\t--- Tie ---\n");
    }
    return 0;
}
