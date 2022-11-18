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
#include <time.h>
#include <stdlib.h>

int main()
{
    int r, a, b, ap, bp, c = 0, d = 0;
    printf("Number of round : ");
    scanf("%d", &r);
    srand(time(0));

    for (int i = 1; i <= r; i++)
    {
        a = (rand() % (1000 - 5 + 1)) + 5;
        b = (rand() % (1000 - 5 + 1)) + 5;

        printf("Round-%d --> A's number: %d     B's number: %d\n", i, a, b);

        int ad = 0, bd = 0, as = 0, bs = 0, ap = 0, bp = 0;

        while (a > 0)
        {
            as = as + a % 10;
            a = a / 10;
            ad++;
        }


        while (b > 0)
        {
            bs = bs + b % 10;
            b = b / 10;
            bd++;
        }


        if (ad > bd)
        {
            ap++;
            c += ad;
            d += bd;

            printf("            A's point: %d   B's point: %d\n", ad, bd);
        }


        else if (ad < bd)
        {
            bp++;
            c += ad;
            d += bd;

            printf("            A's point: %d   B's point: %d\n", ad, bd);
        }



        else if (ad == bd)
        {
            if (as > bs)
            {
                ap++;
                c += as;
                d += bs;

                printf("            A's point: %d   B's point: %d\n", as, bs);
            }
            else
            {
                bp++;
                c += as;
                d += bs;
                
                printf("            A's point: %d   B's point: %d\n", as, bs);
            }
        }

        printf("            A's badge: %d   B's badge: %d\n", ap, bp);
    }
    
    
    printf("Final result => A's total score: %d, B's total score: %d\n", c, d);
    
    
    if (c > d)
    {
        printf("              --- A wins the game ---");
    }

    else
    {
        printf("              --- B wins the game ---");
    }
}