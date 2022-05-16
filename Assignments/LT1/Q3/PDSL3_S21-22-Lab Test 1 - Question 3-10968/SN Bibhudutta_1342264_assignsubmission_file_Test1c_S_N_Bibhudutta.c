// S N Bibhudutta
// 21EC30043
// E&ECE Department 
// Package: Codeblocks
// Test 1

#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main()
{
    srand(time(0));

    int i=0, a_num=0, b_num=0, a_po=0, b_po=0, a_bad=0, b_bad=0, tempa=0,tempb=0, counta=0, countb=0, suma=0, sumb=0, ma=0, mb=0 ;
    counta = 0;
    countb = 0;
    suma = 0;
    sumb = 0;
    int n;
    printf("\nNumber of Round:");
    scanf("%d",&n);

    for (i=1, tempa=0, tempb=0;i<=n ;i++)
    {
        int a_num = (rand() % (1000 - 5 + 1)) + 5;
        int b_num = (rand() % (1000 - 5 + 1)) + 5;

        printf("\nRound-%d -->  A's number: %d       B's number: %d", i,a_num,b_num);

        if (a_num==0) 
            counta = 1;
        while (a_num>0)
        {
            ma = a_num%10;
            suma = suma + ma;
            a_num /= 10;
            counta++;
        }

        if (b_num==0) 
            countb = 1;
        while (b_num>0)
        {
            mb = b_num%10;
            sumb = sumb + mb;
            b_num /= 10;
            countb++;
        }

        if (counta > countb || countb > counta)
        {
            a_po = counta;
            b_po = countb;
        }
        else if (counta == countb)
        {
            a_po = suma;
            b_po = sumb;
        }

        tempa += a_po;
        tempb += b_po;


        if (a_po > b_po)
        {
            printf("\n             A's badge : 1       B's badge: 0");
        }
        else if (a_po < b_po)
        {
            printf("\n             A's badge : 0       B's badge: 1");
        }

        if (a_po > b_po)
        {
            printf("\n              -- A wins Round %d --", i);
        }
        else if (a_po < b_po)
        {
            printf("\n              -- B wins Round %d --", i);
        }
    }

    if (tempa > tempb)
    {
        printf("\nFinal result  => A's total score: %d, B's total score: %d", tempa, tempb);
        printf("\n                 ---A wins the game ---");
    }
    else if (tempb > tempa)
    {
        printf("\nFinal result  => A's total score: %d, B's total score: %d", tempa, tempb);
        printf("\n                 ---B wins the game ---");
    }

    return 0;
}