/*
Name: R S Thiruvignesh
Roll no.:21BT10022
Department: Biotechnology 4yr
Package: Code blocks
Operating system: Windows 10 */

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void main(){
    srand(time(0));

    int n,num1,num2;
    int i,c1=0,c2=0,d1,d2;
    int sum1=0,sum2=0,b1,b2;
    int p1=0,p2=0,countA_b1=0,countB_b1=0;
    int s1,s2;

    printf("number of rounds:");
    scanf("%d",&n);

    for (i=1;i<=n;i++){
        num1=rand()% (1000-1+1) + 1;
        num2=rand()% (1000-1+1) + 1;
        printf("Round-%d -->  ",i);
        printf("A's number: %d\t",num1);
        printf("B's number: %d\n",num2);
        sum1=0;
        sum2=0;
        c1=0;
        c2=0;
        while(num1!=0||num2!=0){
            if (num1!=0){
                d1=num1%10;
                sum1+=d1;
                c1++;
                num1=num1/10;
            }
            if (num2!=0){
                d2=num2%10;
                sum2+=d2;
                c2++;
                num2=num2/10;
            }
        }
        printf("             ");
        if (c1!=c2){
            printf("A's point: %d\t",c1);
            printf("B's point: %d\n",c2);
            p1+=c1;
            p2+=c2;
            if (c1>c2){
                b1=1;
                b2=0;
                countA_b1++;
                printf("             ");
                printf("A's badge: %d\t",b1);
                printf("B's badge: %d\n",b2);
                printf("             ");
                printf("-- A wins Round %d --\n",i);
            }
            else{
                b1=0;
                b2=1;
                countB_b1++;
                printf("             ");
                printf("A's badge: %d\t",b1);
                printf("B's badge: %d\n",b2);
                printf("             ");
                printf("-- B wins Round %d --\n",i);
            }
        }
        else{
            printf("A's point: %d\t",sum1);
            printf("B's point: %d\n",sum2);
            p1+=sum1;
            p2+=sum2;
            if (sum1>sum2){
                b1=1;
                b2=0;
                countA_b1++;
                printf("             ");
                printf("A's badge: %d\t",b1);
                printf("B's badge: %d\n",b2);
                printf("             ");
                printf("-- A wins Round %d --\n",i);
            }
            else{
                b1=0;
                b2=1;
                countB_b1++;
                printf("             ");
                printf("A's badge: %d\t",b1);
                printf("B's badge: %d\n",b2);
                printf("             ");
                printf("-- B wins Round %d --\n",i);
            }
        }
    }
    s1=p1*countA_b1;
    s2=p2*countB_b1;
    printf("Final result => ");
    printf("A's total score: %d\t",s1);
    printf("B's total score: %d\n",s2);

    if (s1>s2){
        printf("               ");
        printf("--- A wins the game ---");
    }
    else{
        printf("               ");
        printf("--- B wins the game ---");
    }

}
