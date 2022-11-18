/*
Name- Rishi Dhoble
Dept- Mechanical Engnn
Roll no- 21ME30053
Section- 3
package- code blocks
Q4
*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    srand(time(0));
    int n;
    printf("Numer of rounds: ");
    scanf("%d",&n);

    int a,b;
    int badge_a=0, badge_b=0;
    int score_a=0, score_b=0;

    int sum_a, sum_b;
    int n_a, n_b;

    int a_copy, b_copy;

    for(int i=1; i<=n; i++){                                   // rounds of play

        printf("\nRound-%d -->\n",i);

        a=(rand()%(1000-5+1))+5;
        b=(rand()%(1000-5+1))+5;

        printf("A's number: %d\t",a);
        printf("B's number: %d\n",b);

        sum_a=0;
        sum_b=0;

        n_a=0;
        a_copy=a;


        while(a_copy>0){

            sum_a=sum_a+a_copy%10;

            a_copy/=10;

            n_a++;
        }

        n_b=0;
        b_copy=b;


        while(b_copy>0){

            sum_b=sum_b+b_copy%10;
            b_copy/=10;

            n_b++;
        }


        if(n_a>n_b){                                                             //for badge

            badge_a++;

            printf("A's point: %d\tB's point: %d\n",n_a, n_b);
            printf("A's badge: 1\tB's badge: 0\n");
            printf("-- A wins Round %d--\n",i);

            score_a=score_a+n_a;
            score_b=score_b+n_b;
        }


        else if(n_b>n_a){                                                                     // final comparison

            badge_b++;

            printf("A's point: %d\tB's point: %d\n",n_a, n_b);
            printf("A's badge: 0\tB's badge: 1\n");
            printf("-- B wins Round %d--\n",i);

            score_a=score_a+n_a;
            score_b=score_b+n_b;
        }


        else{

            if(sum_a>sum_b){
                badge_a++;
                printf("A's point: %d\tB's point: %d\n",sum_a, sum_b);
                printf("A's badge: 1\tB's badge: 0\n");
                printf("-- A wins Round %d--\n",i);
                score_a=score_a+sum_a;
                score_b=score_b+sum_b;
            }


            else{

                badge_b++;
                printf("A's point: %d\tB's point: %d\n",sum_a, sum_b);
                printf("A's badge: 0\tB's badge: 1\n");
                printf("-- B wins Round %d--\n",i);
                score_a=score_a+sum_a;
                score_b=score_b+sum_b;
            }
        }

    }
    score_a*=badge_a;
    score_b*=badge_b;
    printf("\nFinal Result => ");
    printf("A's total score: %d\tB's total score: %d\n",score_a,score_b);


    if(score_a>score_b){

        printf("---A wins the game---\n");
    }

    else if(score_a<score_b){
        printf("---B wins the game---\n");
    }


    else{
        printf("---Game Tied---\n");
    }


return 0;
}
