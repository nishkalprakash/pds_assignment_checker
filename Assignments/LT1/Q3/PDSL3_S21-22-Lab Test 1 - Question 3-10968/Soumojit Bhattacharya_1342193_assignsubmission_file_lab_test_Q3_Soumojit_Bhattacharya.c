/*Soumojit Bhattacharya 
21EC10071 
macos visual studio code*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));
    int n,i,na,nb,sa=0,sb=0,ba=0,bb=0,ra,rb;
    /*n stores number of rounds
      i is loop variable
      na stores A's number   nb stores B's number
      sa stores A's total score   sb stores B's total score
      ba stores A's total badges   bb stores B's total badges
      ra stores A's score in round   rb stores B's score in round*/
    printf("Number of rounds: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Round-%d--> ",i+1);
        na = (rand() % (1000 - 5 + 1)) + 5;
        nb = (rand() % (1000 - 5 + 1)) + 5;
        printf("A's number: %d   ", na);
        printf("B's number: %d\n           ", nb);
        if(na>=1000)
        {
            ra=4;
        }
        else
        if(na>=100)
        {
            ra=3;
        }
        else
        if(na>=10)
        {
            ra=2;
        }
        else
        ra=1;
        if(nb>=1000)
        {
            rb=4;
        }
        else
        if(nb>=100)
        {
            rb=3;
        }
        else
        if(nb>=10)
        {
            rb=2;
        }
        else
        ra=1;
        if(ra==rb)
        {
            ra=0;
            rb=0;
            while(na>0)
            {
                //since ra=rb round score=sum of digits and not number of digits
                ra=ra+na%10;     
                na=na/10;
                rb=rb+nb%10;
                nb=nb/10;
            }
        }
        printf("A's point: %d      ", ra);
        printf("B's point: %d\n           ", rb);
        sa+=ra;
        sb+=rb;
        //if both score same points no one gets a badge(ambiguity in question)
        if(ra>rb)
        {
            printf("A's badge: 1       ");
            printf("B's badge: 0\n");
            printf("          -- A wins round %d --\n", i+1);
            ba++;
        }
        if(rb>ra)
        {
            printf("A's badge: 0       ");
            printf("B's badge: 1\n");
            printf("          -- B wins round %d --\n", i+1);
            bb++;
        }

    }
    printf("Final result => A's total score: %d, B's total score: %d\n              ", ba*sa, bb*sb);
    if(ba*sa>bb*sb)
    printf("      --- A wins the game ---");
    else
    if(ba*sa==ba*sb)
    printf("      ---Game tied---");//extra case for when points are equal(ambiguity in question)
    else
    printf("      --- B wins the game ---");
    printf("\n");
    
    return 0;
}