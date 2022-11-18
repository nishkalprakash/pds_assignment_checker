/*
Anindita Malviya
21MI33004
Section3
Code blocks
Question 3
*/


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));
    int n;
    int tscoreA = 0, tscoreB = 0;
    int tBadgeA = 0, tBadgeB = 0;

    printf("Number of rounds played = ");
    scanf("%d",&n);
    for(int i = 1; i <= n; i++)
    {
        int scoreA = 0, scoreB = 0;
        int BadgeA = 0, BadgeB = 0;
        int nA,nB,countA = 0,countB = 0;
        int sumA = 0,sumB = 0;
        int numA = (rand() % (1000 - 5 + 1)) + 5;
        int numB = (rand() % (1000 - 5 + 1)) + 5;
        printf("Round %d\n",i);
        printf("A's number: %d\n",numA);
        printf("B's number: %d\n",numB);
        do
        {
            nA = numA % 10;
            numA = numA / 10;
            sumA = nA + sumA;
            ++countA;
        }
        while (numA > 0);


        do
        {
            numB = numB / 10;
            nB = numB % 10;
            sumB = nB + sumB;
            ++countB;
        }
        while (numB > 0);

        if (countA != countB)
        {

        scoreA = scoreA + countA;
        scoreB = scoreB + countB;

        if (countA > countB)
        {
            printf ("A is the winner of round %d\n",i);
            BadgeA++;
        }
        else
        {
            printf ("B is the winner of round %d\n",i);
            BadgeB++;
        }
        }
        else
        {
            scoreA = scoreA + sumA;
            scoreB = scoreB + sumB;
           if (sumA > sumB)
           {
            printf ("A is the winner of round %d\n",n);
            BadgeA++;
           }
           else if (sumB > sumA)
            {
                printf ("B is the winner of round %d\n",n);
                BadgeB++;
            }
        }

        printf("A's point = %d, A's badge = %d \n",scoreA,BadgeA);
        printf("B's point = %d, B's badge = %d \n",scoreB,BadgeB);

        tscoreA = tscoreA + scoreA;
        tscoreB = tscoreB + scoreB;
        tBadgeA = tBadgeA + BadgeA;
        tBadgeB = tBadgeB + BadgeB;

    }

    printf("A's total score = %d\n",tscoreA*tBadgeA);
    printf("B's total score = %d\n",tscoreB*tBadgeB);

    if (tscoreA*tBadgeA > tscoreB*tscoreB)
    {
        printf("A is the winner of this Game.\n");

    }
    else
    {
        printf("B is the winner of this Game.\n");
    }


}
