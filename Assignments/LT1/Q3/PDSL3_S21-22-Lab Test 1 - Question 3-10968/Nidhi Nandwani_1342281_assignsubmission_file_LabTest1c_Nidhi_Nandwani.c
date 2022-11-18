/*
Name: Nidhi Nandwani
Roll no. : 21MA10036
Section: 3
Package: Visual Studio Code
*/
#include <stdio.h>
#include <math.h>
#include <time.h>
#include<stdlib.h>
int main()
{
    srand(time(0));
    int n, numA, numB,tempA, tempB, pointA=0, pointB=0, sumA=0, sumB=0, totalA=0, totalB = 0;
    printf("Number of rounds: ");
    scanf("%d", &n);
    for(int i=1; i<=n; i++)
    {
        numA = (rand() % (1000-5+1)) +5;
        numB = (rand() % (1000-5+1)) +5;
        tempA= numA; tempB = numB;
        pointA=0; pointB=0; sumA=0; sumB=0;
        do
        {
            sumA= sumA + (tempA%10);
            tempA = tempA/10;
            pointA++;
        } while (tempA !=0);
        do
        {
            sumB = sumB + (tempB%10);
            tempB = tempB/10;
            pointB++;
        } while (tempB !=0);
        printf("ROUND-%d\n", i);
        printf("A's number : %d, B's number : %d\n", numA, numB);
        
        if(pointA == pointB)
        {
            pointA = sumA;
            pointB = sumB;
        }
        printf("A's point : %d, B's point : %d\n", pointA, pointB);
        if(pointA>pointB)
        printf("A's badge: 1, B's badge: 0\n");
        else
        printf("A's badge: 0, B's badge: 1\n");
        totalA+=pointA;
        totalB+=pointB;
    }
    printf("FINAL RESULT\n");
    printf("A's total score: %d, B's total score: %d\n", totalA, totalB);
    if(totalA>totalB)
    printf("A wins the game");
    else 
    printf("B wins the game");

}