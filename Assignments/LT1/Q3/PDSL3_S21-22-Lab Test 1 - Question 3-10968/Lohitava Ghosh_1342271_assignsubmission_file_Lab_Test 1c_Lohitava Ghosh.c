/*
Name:Lohitava Ghosh
Roll no.:21AE10023
Department:Aerospace Engg Btech.
Package:code blocks
Operating system: Windows
*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    srand(time(0));
    int n,i,num,a,b,j,k,suma=0,sumb=0,c1=0,c2=0,ca=0,cb=0,ra=0,rb=0,sa,sb;
    printf("Number of rounds: ");
    scanf("%d",&n);
    i=1;
    while (i<=n)
    {
        printf("Round-%d -->   ",i);
        suma=0;
        sumb=0;
        c1=0;
        c2=0;
        a=(rand() % (1000 - 5 + 1)) + 5;
        b=(rand() % (1000 - 5 + 1)) + 5;
        printf("A's number: %d     B's number: %d\n",a,b);
        j=a;
        while (j!=0)
        {
            suma=suma+(j%10);
            c1=c1+1;
            j=j/10;
        }
        k=b;
        while (k!=0)
        {
            sumb=sumb+(k%10);
            c2=c2+1;
            k=k/10;
        }
        if (c1!=c2)
        {
            ra=ra+c1;
            rb=rb+c2;
            printf("              A's point: %d     B's point: %d\n",c1,c2);
            if (c1<c2)
            {
                printf("              A's badge: 0     B's badge: 1\n");
                printf("               --B wins round %d--\n",i);
                cb=cb+1;
            }
            else
            {
                printf("              A's badge: 1     B's badge: 0\n");
                printf("               --A wins round %d--\n",i);
                ca=ca+1;
            }
        }
        else
        {
            ra=ra+suma;
            rb=rb+sumb;
            printf("              A's point: %d     B's point: %d\n",suma,sumb);
            if (suma<sumb)
            {
                printf("              A's badge: 0     B's badge: 1\n");
                printf("               --B wins round-- %d\n",i);
                cb=cb+1;
            }
            else
            {
                printf("              A's badge: 1     B's badge: 0\n");
                printf("               --A wins round-- %d\n",i);
                ca=ca+1;
            }
        }
        i=i+1;
    }
    sa=ra*ca;
    sb=rb*cb;
    printf("Final Result => A's total score: %d, B's total score: %d\n",sa,sb);
    if (sa>sb)
    {
        printf("      --A wins the game--");
    }
    else
    {
        printf("      --B wins the game--");
    }
}
