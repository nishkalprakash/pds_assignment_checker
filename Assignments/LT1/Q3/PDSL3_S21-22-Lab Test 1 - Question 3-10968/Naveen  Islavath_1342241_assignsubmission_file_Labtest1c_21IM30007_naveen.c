#include<stdlib.h>
#include<stdio.h>
#include<time.h>

int main()
{
    srand(time(0));

    int numa,numb;

    int n;
    int a_score=0,b_score=0,a_badge=0,b_badge=0,digits_a,digits_b;
    int a,b,i,counta,countb,x;

    printf("Enter the number of rounds the game is played: ");
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
    {
        // Creating a variable which generates a random integer between 5 and 1000 and assuming that to be the range in the game

        
        numa=(rand() % (1000 - 5 + 1)) + 5;
        numb=(rand() % (1000 - 5 + 1)) + 5;

        a=numa,b=numb;
        digits_a=0,digits_b=0;

        x=0;  // Used to know who won the round

        printf("Round-%d --> A's number: %d B's number: %d\n",i+1,a,b);

        //For finding the number of digits

        while(a>0)
        {
            a=a/10;
            digits_a++;
        }
        printf("             A's point: %d",digits_a);
        while(b>0)
        {
            b=b/10;
            digits_b++;
        }
        printf(" B's point: %d\n",digits_b);

        if(digits_a==digits_b)
        {
            counta=0; countb=0;
            while(a)
            {
                counta=counta+a%10;
                a=a/10;
            }
            while(b)
            {
                countb=countb+b%10;
                b=b/10;
            }

        }

        // The number which has the more no. of digits will definetly be greater
        if(digits_a>digits_b||((digits_a==digits_b)&&(counta>countb)))
        {
            printf("             A's badge: 1 B's badge: 0\n");
            a_badge++;
            x=1;
        }
        else
        {
            printf("             A's badge: 0 B's badge: 1\n");
            b_badge++;
        }

        a_score=a_score+digits_a;
        b_score=b_score+digits_b;

        if(x==0) printf("             -- B wins Round %d --\n",i+1);
        else printf("             -- A wins Round %d --\n",i+1);
    }

    printf("Final result => A's total score: %d, B's total score: %d\n",a_score*a_badge,b_score*b_badge);

    if(a_score*a_badge>b_score*b_badge) printf("             --- A wins the game ---");
    else printf("             --- B wins the game ---");

}