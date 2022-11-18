/*
Rishabh Bhardwaj
21CE10052
Civil
sec-3
CodeBlock
windows
*/
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>


int main(void)
{
    srand(time(0));

    int n, i, a[1000], b[1000], counta=0, countb=0, ia=0, ib=0, ma, mb, suma=0, sumb=0, sa=0, sb=0, pa=0, pb=0;

    printf("Number of rounds: ");
    scanf("%d", &n);

    int num = (rand() % (1000 - 5 + 1)) + 5;

    for (i=1; i<=n; i++)
    {
        printf("Round-%d\n", i);

        a[i] = (rand() % (1000 - 5 + 1)) + 5;
        b[i] = (rand() % (1000 - 5 + 1)) + 5;

        printf("A's number: %d      B's number: %d\n", a[i], b[i]);

        while(a[i]!= 0)
        {
            ma = a[i]%10;
            suma+= ma;

            a[i]= a[i]/10;
            counta++;
        }
         while(b[i]!= 0)
        {
            mb = b[i]%10;
            sumb+= mb;

            b[i]= b[i]/10;
            countb++;
        }

        if ( counta > countb)
        {
            ia+=1;
            printf("A's points: %d      B's points: %d\n", counta, countb);
            printf("A's badge: %d      B's badge: %d\n", ia, ib);

            pa+= counta;
            pb+= countb;

            if (ia > ib)
        {
            printf("----A wins the round %d----\n", i);
        }
        else if ( ia < ib)
        {
            printf("----B wins the round %d----\n", i);
        }
        else
        {
            printf("No one wins the round\n");
        }

        }
        else if( counta < countb)
        {
            ib+=1;
            printf("A's points: %d      B's points: %d\n", counta, countb);
            printf("A's badge: %d      B's badge: %d\n", ia, ib);
             pa+= counta;
            pb+= countb;

            if (ia > ib)
        {
            printf("----A wins the round %d----\n", i);
        }
        else if ( ia < ib)
        {
            printf("----B wins the round %d----\n", i);
        }
        else
        {
            printf("No one wins the round\n");
        }
        }
        else if ( counta == countb)
        {
            if (suma > sumb)
            {
                sa+=1;
                printf("A's points: %d      B's points: %d\n", suma, sumb);
                printf("A's badge: %d      B's badge: %d\n", sa, sb);
                 pa+= suma;
            pb+= sumb;
                if (sa > sb)
        {
            printf("----A wins the round %d----\n", i);
        }
        else if ( sa < sb)
        {
            printf("----B wins the round %d----\n", i);
        }
        else
        {
            printf("No one wins the round\n");
        }
            }
            if (suma < sumb)
            {
                sb+=1;
                printf("A's points: %d      B's points: %d\n", suma, sumb);
                printf("A's badge: %d      B's badge: %d\n", sa, sb);
                pa+= suma;
            pb+= sumb;
                if (sa > sb)
                {
                printf("----A wins the round %d----\n", i);
                }
                else if ( sa < sb)
        {
            printf("----B wins the round %d----\n", i);
        }
        else
        {
            printf("No one wins the round\n");
        }
            }
        }
    }
    printf("Total points of A is %d.\n Total points of B is %d\n", pa, pb);

        if (pa > pb)
        {
            printf("-------------A's wins the game-----------\n");
        }
        else if (pa < pb)
        {
            printf("-------------B's wins the game-----------\n");
        }
        else
        {
            printf("DRAW");
        }



}
