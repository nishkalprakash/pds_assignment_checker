/*Name:- Shubhrashayak Sarkar;
Roll No:- 21NA30029
Package:- Visual Studio Code 
Assignment class:- 6
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main()
{
    int A, B, digitA[3], digitB[3], badgeA=0, badgeB=0, roundno, scoreA=0, scoreB=0;
    printf("Enter how many round you want to play?\n");
    scanf("%d", &roundno);
    for (int i = 0; i < roundno; i++)
    {
    A=(rand()%(1000-5+1))+5;
    B=(rand()%(1000-5+1))+5;
    printf("Round number is %d\n", i+1);
    printf("A's number= %d\n", A);
    printf("B's number= %d\n", B);
    for (int j = 0; j < 3; j++)
    {
        digitA[j]=(A%10);
        A/=10;
        digitB[j]=(B%10);
        B/=10;
    }
    for (int k = 0; k < 3; k++)
    {
        scoreA+=digitA[k];
        scoreB+=digitB[k];
    }
    if (scoreA>scoreB)
    {
        badgeA++;
        printf("A wins round %d\n", i+1);
    }
    else if (scoreB>scoreA)
    {
        badgeB++;
        printf("B wins round %d\n", i+1);
    }
    else
    {
        printf("A and B both have draw in the round %d\n", i+1);
    }
    }
    return 0;
}