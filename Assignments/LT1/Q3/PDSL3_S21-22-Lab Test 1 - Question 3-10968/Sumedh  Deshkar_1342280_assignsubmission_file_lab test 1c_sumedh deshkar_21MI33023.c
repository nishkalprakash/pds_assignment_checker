/*
Name-sumedh deshkar
roll no.-21MI33023
section -3
*/




#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int count_digit (int n)
{
    int x=0;
    while(n>0)
    {
        x++;
        n=n/10;
    }
    return x;
}

int sum_digit (int n)
{
    int x=0;
    while(n>0)
    {
        x=x+(n%10);
        n=n/10;
    }
    return x;

}



int main ()
{
    srand(time(0));

    int n;
    printf("Number of rounds:");
    scanf("%d", &n);

    int point_a=0;
    int point_b=0;
    int badge_a=0;
    int badge_b=0;

    for(int i=0; i<n; i++)
    {
        int a = (rand() % (1000 - 5 + 1)) + 5;
        int b = (rand() % (1000 - 5 + 1)) + 5;

        int a_p, b_p;

        a_p= count_digit(a);
        b_p= count_digit(b);

        if(a_p>b_p)
        {
            badge_a++;
            point_a+=a_p;
            point_b+=b_p;
        }
        else if(a_p<b_p)
        {
            badge_b++;
            point_a+=a_p;
            point_b+=b_p;
        }
        else
        {
            a_p=sum_digit(a);
            b_p=sum_digit(b);

            if(a_p>b_p)
            {
                badge_a++;
                point_a+=a_p;
                point_b+=b_p;
            }
            else if(a_p<b_p)
            {
                badge_b++;
                point_a+=a_p;
                point_b+=b_p;
            }
        }

        printf("Round-%d-->\n", i+1);
        printf("A's Number: %d               B's number: %d\n",a,b);
        printf("A's point:  %d               B's number: %d\n",a_p, b_p);

        if(a_p>b_p)
        {
            printf("A's badge: 1               B's badge: 0\n");
            printf("--A wins round %d--\n\n", i+1);
        }
        else
        {
            printf("A's badge: 0               B's badge: 1\n");
            printf("--B wins round %d--\n\n", i+1);
        }
    }
    printf("Final result => A's total score: %d, B's total score: %d\n", point_a*badge_a, point_b*badge_b);
    if(point_a*badge_a>point_b*badge_b)
    {
        printf("\n\n--- A wins the game ---");
    }
    else
    {
        printf("\n\n--- B wins the game ---");
    }


}
