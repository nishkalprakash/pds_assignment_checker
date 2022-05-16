/*
Name: Sadique Amin
Roll Number: 21CE30027
Department: Civil Engineering
Package used: <math.h>, <stdio.h>, <time.h>, <stdlib.h>
Assignment Class: 6
*/

#include <stdio.h>
#include <math.h>
#include<time.h>
#include<stdlib.h>


int main()
{
    srand(time(0));
    int n,numa,numb,a=0,b=0,pa=0,pb=0,u,v;
    printf("Number of rounds: ");
    scanf("%d",&n);
    //printf("%d",n);3

    for (int i=1;i<=n;i++)
    {
        numa=(rand() % (1000 - 5 + 1)) + 5;
        numb=(rand() % (1000 - 5 + 1)) + 5;
        u=numa;
        v=numb;
        int da=0,db=0;
        while (u>0)
        {
            u=u/10;
            da++;
        }
        while (v>0)
        {
            v=v/10;
            db++;
        }
        u=numa;
        v=numb;

        int sa=0,sb=0,d;
        while (u>0)
        {
            d=u%10;
            sa=sa+d;
            u=u/10;
        }
        d=0;
        while (v>0)
        {
            d=v%10;
            sb=sb+d;
            v=v/10;
        }

        




        if(da>db)
        {
            a++;
            pa=pa+da;
            printf("Round-%d -->  A’s number: %d     B’s number: %d\n",i,numa,numb);
            printf("             A’s point: %d       B’s point: %d\n",da,db);
            printf("             A’s badge: 1        B’s badge: 0\n");
            printf("             -- A wins Round %d --\n",i);

        }
        else if(db>da)
        {
            b++;
            pb=pb+db;
            printf("Round-%d -->  A’s number: %d     B’s number: %d\n",i,numa,numb);
            printf("             A’s point: %d       B’s point: %d\n",da,db);
            printf("             A’s badge: 0        B’s badge: 1\n");
            printf("             -- B wins Round %d --\n",i);
        }
        else
        {
            if(sa>sb)
            {
                a++;
                pa=pa+sa;
                printf("Round-%d -->  A’s number: %d     B’s number: %d\n",i,numa,numb);
                printf("             A’s point: %d       B’s point: %d\n",sa,sb);
                printf("             A’s badge: 1        B’s badge: 0\n");
                printf("             -- A wins Round %d --\n",i);
            }
            else if (sb>sa)
            {
                b++;
                pb=pb+sb;
                printf("Round-%d -->  A’s number: %d     B’s number: %d\n",i,numa,numb);
                printf("             A’s point: %d       B’s point: %d\n",sa,sb);
                printf("             A’s badge: 0        B’s badge: 1\n");
                printf("             -- B wins Round %d --\n",i);
            }
        }
    }
    int f,g;
    f=pa*a;
    g=pb*b;
    printf("Final result => A’s total score: %d, B’s total score: %d\n",f,g);
    if(f>g)
    {
        printf("             --- A wins the game ---");
    }
    else
    {
        printf("             --- B wins the game ---");
    }
    return 0;
}