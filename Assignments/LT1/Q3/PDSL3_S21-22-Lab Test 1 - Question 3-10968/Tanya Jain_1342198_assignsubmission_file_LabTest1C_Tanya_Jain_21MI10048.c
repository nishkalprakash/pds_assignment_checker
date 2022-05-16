#include <stdio.h>
#include<time.h>
#include<stdlib.h>

int dig(int a);// calculates the number of digits

int sum(int a);// calculates the sum of digits

int main()
{
    srand(time(0));
    int n;
    printf("Enter of rounds: ");
    scanf("%d",&n);

    int An[n];
    int Bn[n];
    int Ap[n];
    int Bp[n];
    int Ab[n];
    int Bb[n];
    int ab=0;
    int ap=0;
    int bb=0;
    int bp=0;

    for(int i=0;i<n;i++)
    {
        An[i]=0;
        Bn[i]=0;
        Ap[i]=0;
        Bp[i]=0;
        Ab[i]=0;
        Bb[i]=0;
    }

    printf("Output: \n");

    for(int i=0;i<n;i++)
    {
        An[i]= (rand() % (1000 - 5 + 1)) + 5;
        Bn[i]= (rand() % (1000 - 5 + 1)) + 5;
        if(dig(An[i])>dig(Bn[i]))
        {
            Ap[i]=dig(An[i]);
            Bp[i]=dig(Bn[i]);
        }
        else if(dig(Bn[i])>dig(An[i]))
        {
            Bp[i]=dig(Bn[i]);
            Ap[i]=dig(An[i]);
        }
        else
        {
            Ap[i]=sum(An[i]);
            Bp[i]=sum(Bn[i]);
        }

        if(Ap[i]>Bp[i])
        {
            Ab[i]=1;
            Bb[i]=0;
        }
        else
        {
            Bb[i]=1;
            Ab[i]=0;
        }

        ab+=Ab[i];
        ap+=Ap[i];
        bb+=Bb[i];
        bp+=Bp[i];


        printf("Round %d\n",(i+1));
        printf("A's number: %d\t\tB's number: %d\n",An[i],Bn[i]);
        printf("A's point: %d\t\tB's point: %d\n",Ap[i],Bp[i]);
        printf("A's badge: %d\t\tB's badge: %d\n",Ab[i],Bb[i]);

        if(Ab[i]>Bb[i])
        {
            printf("---A wins Round %d ---\n",(i+1));
        }
        else
        {
            printf("---B wins Round %d ---\n",(i+1));
        }
    }

    int af=ab*ap;
    int bf=bb*bp;

    printf("Final Results\n");
    printf("A's total score: %d,  B's total score: %d",af,bf);
    if(af>bf)
    {
        printf("\n---A wins the game--\n");
    }
    else
    {
        printf("\n---B wins the game--\n");
    }

    return 0;

}

int dig(int a)
{
    int a1=a;
    int c=0;
    while(a1>0)
    {
        a1/=10;
        c++;
    }
    return c;
}

int sum(int a)
{
    int a1=a;
    int sum=0;
    while(a1>0)
    {
        sum+=a1%10;
        a1/=10;
    }
    return sum;
}