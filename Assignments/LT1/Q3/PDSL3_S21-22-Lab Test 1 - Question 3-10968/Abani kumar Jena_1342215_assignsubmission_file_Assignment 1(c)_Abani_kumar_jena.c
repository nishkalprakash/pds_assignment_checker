#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main()
{
    srand(time(0));
    printf("Number of rounds: ");
    int n;
    scanf("%d",&n);
    int suma=0,sumb=0,ca=0,cb=0;
    for(int i=1;i<=n;i++)
    {
        int a=rand()%1001+1;
        int b=rand()%1001+1;
        printf("Round : %d\n",i);
        printf("A's number:%d  B's number:%d",a,b);
        int k=a;
        int da=0,db=0,sa=0,sb=0;;
        while(k>0)
        {
            da++;
            sa=sa+k%10;
            k=k/10;
        }
        k=b;
        while(k>0)
        {
            db++;
            sb=sb+k%10;
            k=k/10;
        }
        if(da>db)
        {
            suma+=da;
            sumb+=db;
            printf("A's point:%d  B's point:%d\n",da,db);
            printf("A's badge:1  B's badge:0\n");
            printf("A wins the round.\n");
            ca++;
        }
        else if(da<db)
        {
            suma+=da;
            sumb+=db;
            printf("A's point:%d  B's point:%d\n",da,db);
            printf("A's badge:0  B's badge:1\n");
            printf("B wins the round.\n");
            cb++;
        }
        else if(sa>sb)
        {
            suma+=sa;
            sumb+=sb;
            printf("A's point:%d  B's point:%d\n",sa,sb);
            printf("A's badge:1  B's badge:0\n");
            printf("A wins the round.\n");
            ca++;
        }
        else
        {
            suma+=sa;
            sumb+=sb;
            printf("A's point:%d  B's point:%d\n",sa,sb);
            printf("A's badge:0  B's badge:1\n");
            printf("B wins the round.\n");
            cb++;
        }

    }
    printf("A total score : %d \nB total score : %d",suma*ca,sumb*cb);
    if((suma*ca)>(sumb*cb))
        printf("A wins the game.");
    else
        printf("B wins the game.");
}

