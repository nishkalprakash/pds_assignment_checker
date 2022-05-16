#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));
    int n, badges_a = 0, badges_b = 0, badge_a = 0, badge_b = 0, total_point_a = 0, total_point_b = 0, digits_a = 0, digits_b = 0, digit_sum_a = 0, digit_sum_b = 0, temp, total_score_a = 0, total_score_b = 0, flag;
    // badges_a = number of badges won by A, badges_b = number of badges won by B
    // badge_a = A's badge in that round, badge_b = B's badge in that round
    // total_point_a = total points secured by A until a particular round,  total_point_b = total points secured by B until a particular round
    // digits_a = digits in A, digits_b = digits in B
    // digit_sum_a = sum of digits in A, digit_sum_b = sum of digits in B
    // total_score_a = total score of A, total_score_b = total score of B
    printf("Number of rounds: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int a = (rand() % (1000 - 5 + 1) + 5), b = (rand() % (1000 - 5 + 1) + 5);
        printf("Round-%d --> A's number: %d     B's number: %d\n", i + 1, a, b);
        temp = a;
        while (temp != 0)
        {
            digit_sum_a += temp % 10;
            digits_a++;
            temp = temp / 10;
        }
        temp = b;
        while (temp != 0)
        {
            digit_sum_b += temp % 10;
            digits_b++;
            temp = temp / 10;
        }
        if (digits_a != digits_b)
        {
            flag = 1;
            total_point_a += digits_a;
            total_point_b += digits_b;
            if (digits_a > digits_b)
            {
                badge_a = 1;
                badges_a++;
            }
            else
            {
                badge_b = 1;
                badges_b++;
            }
        }
        else
        {
            flag = 0;
            total_point_a += digit_sum_a;
            total_point_b += digit_sum_b;
            if (total_point_a > total_point_b)
            {
                badge_a = 1;
                badges_a++;
            }
            else
            {
                badge_b = 1;
                badges_b++;
            }
        }
        if (flag == 1)
            printf("            A's point %d     B's point: %d\n", digits_a, digits_b);
        else
            printf("            A's point %d        B's point: %d\n", digit_sum_a, digit_sum_b);
        printf("            A's badge: %d        B's badge: %d\n", badge_a, badge_b);
        if (badge_a == 1)
            printf("            --  A wins Round %d  --\n", i + 1);
        else
            printf("            --  B wins Round %d  --\n", i + 1);

        badge_a = 0, badge_b = 0, digits_a = 0, digits_b = 0, digit_sum_a = 0, digit_sum_b = 0;
    }
    total_score_a = badges_a * total_point_a;
    total_score_b = badges_b * total_point_b;
    printf("\nFinal Result => A's total score: %d, B's total score: %d\n", total_score_a, total_score_b);
    if (total_score_a > total_score_b)
        printf("            --  A wins the game  --\n");
    else
        printf("            --  B wins the game  --\n");
    return 0;
}
