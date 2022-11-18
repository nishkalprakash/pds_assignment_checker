/*
Name: Shubham Singh
Roll No: 21EX10032
Department: Geology and Geophysics
Package: Codeblocks
Lab test: 1(c)
*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include<math.h>

int main(void)
{
    srand(time(0));
    int n = 0;
    int i = 1;
    printf("Number of rounds: ");
    scanf("%d", &n);
    int badge_a=0;
    int badge_b=0;
    int point_a=0;
    int point_b=0;
    do
    {
        printf("Round-%d -->    ", i);
        int a;
        int b;
        do{
        a = (rand() % (996)) + 5;
        b = (rand() % (996)) + 5;}while(a==b);
        printf(" A's number: %d      B's number: %d\n", a, b);
        int j=0,k=0;
        int temp1=a;
        int temp2=b;

        for (j = 1;; j++)
        {
            temp1 = temp1 / 10;
            if (temp1 == 0)
            {
                break;
            }
        }
        for (k = 1;; k++)
        {
            temp2 = temp2 / 10;
            if (temp2 == 0)
            {
                break;
            }
        }
        if (j == k)
        {
            int sum1=0;
            int sum2=0;
            for(int x=0;x<j;x++)
            {
                int temp=a/pow(10,x+1);
                sum1+=a/pow(10,x)-temp*10;
                temp=b/pow(10,x+1);
                sum2+=b/pow(10,x)-temp*10;

            }
            point_a+=sum1;
            point_b+=sum2;
            printf("\t\tA's point: %d     B's point: %d\n",sum1,sum2);
            if (sum1>sum2)
            {
                badge_a++;
                printf("\t\tA's badge: %d     B's badge: %d\n",1,0);
                printf("\t\t-- A wins Round %d --\n",i);
            }
            else if(sum1<sum2)
            {
                badge_b++;
                printf("\t\tA's badge: %d     B's badge: %d\n",0,1);
                printf("\t\t-- B wins Round %d --\n",i);
            }
            else
            {
                badge_a++;
                badge_b++;
                printf("\t\tA's badge: %d     B's badge: %d\n",1,1);
                printf("\t\t-- no one wins Round %d --\n",i);
            }

        }
        else if (j>k)
        {
            printf("\t\tA's point: %d     B's point: %d\n",j,k);
            printf("\t\tA's badge: %d     B's badge: %d\n",1,0);
            badge_a++;
            point_a+=j;
            point_b+=k;
            printf("\t\t-- A wins Round %d --\n",i);

        }
        else{
             printf("\t\tA's point: %d     B's point: %d\n",j,k);
            printf("\t\tA's badge: %d     B's badge: %d\n",0,1);
            badge_b++;
            point_a+=j;
            point_b+=k;
            printf("\t\t-- B wins Round %d --\n",i);
        }
    i++;
    } while (i-1 != n);
    int final_A=badge_a*point_a;
    int final_B=badge_b*point_b;
    printf("Final result => A's total score: %d, B's total score: %d\n",final_A,final_B);
    if (final_A>final_B)
    {
        printf("\t\t--- A wins the game ---\n");
    }
    else if (final_A<final_B)
    {
        printf("\t\t--- B wins the game ---\n");
    }
    else{
        printf("\t\t--- It's a tie!! ---\n");

    }
}



























/*#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main()
{
    int n, A[2];
    srand(time(0));
    printf("number of rounds: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        printf("Round-%d --> ", i);
        for (int k = 0; k < 2; k++)
        {
            A[k] = (rand() % (1000 - 5 + 1)) + 5;
        }
        printf("A's number: %d     B's number: %d", A[0], A[1]);
        int trm1 = 0, trm2 = 0, r1 = 0, r2 = 0,p,q;
        p=A[0];
        q=A[1];
        while (p != 0)
        {
            p = p / 10;
             r1 = r1 + p;
            trm1++;
        }
        while (q != 0)
        {
            q = q / 10;
            r2 = r2 + q;
            trm2++;
        }

        printf("\n A's point: %d    B's point: %d", trm1, trm2);
        int z = 0, a = 0, b = 0;
        if (trm1 == trm2)
        {
            if (r1 > r2)
            {
                printf("\n--A wins Round %d", i);
                a = 1;
            }
            else
            {
                printf("\n--B wins Round %d", i);
                b = 1;
            }
            z = 1;
        }
        if (z == 0)
        {
            if (trm1 > trm2)
            {
                printf("\n--A wins Round %d", i);
                a = 1;
            }
            else
            {
                printf("\n--B wins Round %d", i);
                b = 1;
            }
        }
        if (a > b)
        {
            printf("\nA's badge: 1    B's badge:0");
        }
        else
            printf("\nA's badge:0     B's badge:1");
    }
}*/
