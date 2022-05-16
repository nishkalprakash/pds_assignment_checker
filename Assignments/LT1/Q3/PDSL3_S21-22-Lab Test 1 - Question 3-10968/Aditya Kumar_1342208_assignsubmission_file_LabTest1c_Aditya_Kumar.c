/*
Name:- Aditya Kumar
Roll no.:- 21ME10005
Dept:- Mechanical Engg
Sec-3
Group-4
Lab Test- 1c
Package- stdio.h,stdlib.h,time.h
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{ srand(time(0));
    int A=0;int B=0;int totalpointA=0;int totalpointB=0;int badgeA=0;int badgeB=0;int NumA,NumB,n,m;
printf("Enter the number of rounds:\n");
scanf("%d",&n);
for(int i =1;i<=n;i++)
{   int sumA=0;int sumB=0;int digitA=0;int digitB=0;int a=0;int b=0;char c;
int pointA,pointB;
    int NumA =  (rand() % (1000 - 5 + 1)) + 5;
    int NumB =  (rand() % (1000 - 5 + 1)) + 5;
    int tempA=NumA;int tempB=NumB;
    while(NumA>0)    
   {    
     m=NumA%10;    
     sumA=sumA+m;    
     NumA=NumA/10;
     digitA++;    
   }
    while(NumB>0)    
   {    
    m=NumB%10;    
    sumB=sumB+m;    
    NumB=NumB/10;
    digitB++;    
   } 
    if(digitA>digitB)
    {
       pointA=digitA;
       pointB=digitB;
       a=1;
       badgeA++;
       c='A';
    }
    else if(digitA<digitB)
    {
        pointA=digitA;
        pointB=digitB;
        b=1;
        badgeB++;
        c='B';
    }
    else{
        if(sumA>sumB)
        {
            pointA=sumA;
            pointB=sumB;
            a=1;
            badgeA++;
            c='A';
        }
        else if(sumA<sumB)
        {
            pointA=sumA;
            pointB=sumB;
            b=1;
            badgeB++;
            c='B';
        }
    }
    totalpointA+=pointA;
    totalpointB+=pointB;
    printf("Round-%d---> A's number: %d    B's number: %d\n",i,tempA,tempB);
    printf("             A's point: %d     B's point: %d\n",pointA,pointB);
    printf("             A's badge: %d     B's badge: %d\n",a,b);
    printf("             -- %c wins Round-%d --\n",c,i);
}
int TotalScoreA,TotalScoreB;
TotalScoreA=totalpointA*badgeA;
TotalScoreB=totalpointB*badgeB;
printf("Final Result => A's total score: %d, B's total score: %d\n",TotalScoreA,TotalScoreB);
if(TotalScoreA>TotalScoreB)
{
    printf("          --- A wins the game ---\n");
}
else if(TotalScoreA<TotalScoreB)
{
    printf("          --- B wins the game ---\n");
}
else
{
    printf("          --- DRAW ---\n");
}
    return 0;
}

