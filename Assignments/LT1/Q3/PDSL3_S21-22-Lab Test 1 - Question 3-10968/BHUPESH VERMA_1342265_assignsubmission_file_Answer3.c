#include <stdio.h>
#include<time.h>
#include<stdlib.h>

int main() {
    srand(time(0));
    int a_badge=0,b_badge=0,n,a,b,i,j,sum_a,sum_b,c,points_a=0,points_b=0;
    printf("Number of rounds: ");
    scanf("%d",&n);
    int round = 1;
    while(n>0){
        printf("\nRound-%d-->  ",round);
        a = (rand() % (1000 - 5 + 1)) + 5;
        b = (rand() % (1000 - 5 + 1)) + 5;
        printf("A's Number: %d   ",a);
        printf("B's Number: %d",b);
        i=j=sum_a=sum_b=c=0;
        while(a>0){
            i=i+1;
            c = a%10;
            sum_a = sum_a+c;
            a=a/10;
        }
        while(b>0){
            j=j+1;
            c = b%10;
            sum_b = sum_b + c;
            b=b/10;
        }
        if(i!=j){
            points_a += i;
            points_b += j;
            if(i>j){
                printf("\n            A's point:%d   ",i);
                printf("B's point:%d",j);
                a_badge += 1;
                printf("\nA's Badge:1   ");
                printf("B's Badge:0");
                printf("\n   --A wins round %d--",round);
            }
            else{
                printf("\n            A's point:%d   ",i);
                printf("B's point:%d",j);
                b_badge += 1;
                printf("\n            A's Badge:0   ");
                printf("B's Badge:1");
                printf("\n   --B wins round %d--",round);
            }
        }
        if(i==j){
            points_a += sum_a;
            points_b += sum_b;
            if(sum_a>sum_b){
                printf("\n            A's point:%d   ",sum_a);
                printf("B's point:%d",sum_b);
                a_badge += 1;
                printf("\n            A's Badge:1   ");
                printf("B's Badge:0");
                printf("\n   --A wins round %d--",round);
            }
            else{
                printf("\n            A's point:%d   ",sum_a);
                printf("B's point:%d",sum_b);
                b_badge += 1;
                printf("\n            A's Badge:0   ");
                printf("B's Badge:1");
                printf("\n   --B wins round %d--",round);
            }
        }
        n--;
        round += 1;
    }
    printf("\nFinal Result =>   ");
    printf("\nA's total score: %d   ",a_badge*points_a);
    printf("B's total score: %d",b_badge*points_b);
    return 0;
}
