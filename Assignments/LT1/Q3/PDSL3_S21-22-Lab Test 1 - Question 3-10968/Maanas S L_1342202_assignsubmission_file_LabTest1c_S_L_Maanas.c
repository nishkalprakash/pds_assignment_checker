/*
Name : S L Maanas
Roll No : 21CH10055
Department : Chemical Engineering
Package : VS Code
Assignment : Lab Test 1(c)
*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main()
{
    srand(time(0));
    int n;
    int badsuma=0, badsumb=0 ;
    int pointsuma=0, pointsumb=0 ;
    printf("Number of rounds : ");
    scanf("%d",&n);
    for (int i=1;i<=n;i++)
    {
        int A[i],B[i];
        int bada[i], badb[i], pointa[i],pointb[i] ;
        A[i] = (rand() % (1000 - 5 + 1)) + 5;
        B[i] = (rand() % (1000 - 5 + 1)) + 5;
        printf("Round %d --> A's Number = %d  B's Number = %d\n",i,A[i],B[i]);
        int counta = 0,countb = 0, suma = 0, sumb = 0, ra, rb ;
        while (A[i] != 0 )
        {
            ra = A[i]%10;
            A[i]=A[i]/10 ;
            suma = suma + ra ;
            counta++ ;
        }
        while (B[i] != 0 )
        {
            rb = B[i]%10;
            B[i]=B[i]/10 ;
            sumb = sumb + rb ;
            countb++ ;
        }
        if (counta > countb)
        {
            bada[i] = 1;
            badb[i] = 0;
            pointsuma = pointsuma + counta;
            pointsumb = pointsumb + countb;
            printf("            A's Point = %d  B's Point = %d\n",counta,countb);
            printf("            A's Badge = %d B's badge = %d\n",bada[i],badb[i]);
        }
        if (countb > counta)
        {
            bada[i] = 0;
            badb[i] = 1;
            pointsuma = pointsuma + counta;
            pointsumb = pointsumb + countb;
            printf("            A's Point = %d  B's Point = %d\n",counta,countb);
            printf("            A's Badge = %d B's badge = %d\n",bada[i],badb[i]);
        }
        if (counta == countb)
        {
            printf("            A's Point = %d  B's Point = %d\n",suma,sumb);
            if (suma>sumb)
            {
                bada[i] = 1;
                badb[i] = 0;
                pointsuma = pointsuma + suma;
                pointsumb = pointsumb + sumb;
                printf("            A's Badge = %d B's badge = %d\n",bada[i],badb[i]);
            }
            if (sumb>suma)
            {
                bada[i] = 0;
                badb[i] = 1;
                pointsuma = pointsuma + suma;
                pointsumb = pointsumb + sumb;
                printf("            A's Badge = %d B's badge = %d\n",bada[i],badb[i]);
            }    
        }
        if (bada[i] > badb[i])
        {
            printf("            --A Wins Round %d--\n",i);
        }
        if (badb[i] > bada[i])
        {
            printf("            --B Wins Round %d--\n",i);
        }
        badsuma = badsuma + bada[i];
        badsumb = badsumb + badb[i];
    }
    printf("Final Result => A's Total Score = %d  B's Total Score = %d\n",pointsuma*badsuma,pointsumb*badsumb);
    if ((pointsuma*badsuma) > (pointsumb*badsumb))
    {
        printf("                ---A Wins the Game---\n");
    }
    if ((pointsuma*badsuma) < (pointsumb*badsumb))
    {
        printf("                ---B Wins the Game---\n");
    }
    return 0;
}