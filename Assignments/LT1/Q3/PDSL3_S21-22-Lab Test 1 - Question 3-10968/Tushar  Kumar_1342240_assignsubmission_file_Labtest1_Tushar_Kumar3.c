/*
Tushar Kumar
21CH30035
Chemical Engineering
Section 3
Code Blocks
Windows 10
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int number_of_digit(int n)
{
    int count = 0;
    while (n != 0)
    {
        n = n / 10;
        count++;
    }

    return count;
}

int sum_of_digit(int n)
{
    int sum = 0;
    while (n != 0)
    {
        sum = sum + n % 10;
        n = n / 10;
    }

    return sum;
}

int main()
{
    srand(time(0));
    // int num = (rand() % (1000 -5+1)) + 5;

    int rounds = 0;
    printf("Enter number of rounds: ");
    scanf("%d", &rounds);

    int player_1_score = 0;
    int player_2_score = 0;

    int player_1_point_sum = 0;
    int player_2_point_sum = 0;
    int i = 0;
    int player_1_badge_count = 0;
    int player_2_badge_count = 0;

    while (rounds--)
    {
        i++;
        int player1_rand = (rand() % (1000 - 5 + 1)) + 5;
        int player2_rand = (rand() % (1000 - 5 + 1)) + 5;
        int player_1_point;
        int player_2_point;
        int player_1_badge = 0;
        int player_2_badge = 0;


        if (number_of_digit(player1_rand) > number_of_digit(player2_rand))
        {
            player_1_score++;
            player_1_point = number_of_digit(player1_rand);
            player_2_point = number_of_digit(player2_rand);
            player_1_badge = 1;

        }
        else if (number_of_digit(player1_rand) < number_of_digit(player2_rand))
        {
            player_2_score++;
            player_1_point = number_of_digit(player1_rand);
            player_2_point = number_of_digit(player2_rand);
            player_2_badge = 1;
        }
        else if (number_of_digit(player1_rand) == number_of_digit(player2_rand))
        {
            if (sum_of_digit(player1_rand) > sum_of_digit(player2_rand))
            {
                player_1_score++;
                player_1_point = sum_of_digit(player1_rand);
                player_2_point = sum_of_digit(player2_rand);
                player_1_badge = 1;
            }
            else if (sum_of_digit(player1_rand) < sum_of_digit(player2_rand))
            {
                player_2_score++;
                player_2_point = sum_of_digit(player2_rand);
                player_1_point = sum_of_digit(player1_rand);
                player_2_badge = 1;
            }


        }
        player_1_point_sum += player_1_point;
        player_2_point_sum += player_2_point;
        player_1_badge_count += player_1_badge;
        player_2_badge_count += player_2_badge;
        printf("\n");
        printf("ROUND %d ---> A's number: %d\tB's number: %d\n", i, player1_rand, player2_rand);
        printf("ROUND %d ---> A's point: %d\tB's point: %d\n", i, player_1_point, player_2_point);
        printf("ROUND %d ---> A's badge: %d\tB's badge: %d\n", i, player_1_badge, player_2_badge);
        printf("\t-- %c -- wins round %d --", (player_1_score > player_2_score) ? 'A' : 'B', i);
        printf("\n");
    }

    printf("\n");
    printf("FINAL RESULT => A's total score: %d\tB's total score: %d\n", player_1_point_sum*player_1_badge_count, player_2_point_sum*player_2_badge_count);
    printf("\t-- %c wins the game ", (player_1_point_sum*player_1_badge_count > player_2_point_sum*player_2_badge_count) ? 'A' : 'B');
}
