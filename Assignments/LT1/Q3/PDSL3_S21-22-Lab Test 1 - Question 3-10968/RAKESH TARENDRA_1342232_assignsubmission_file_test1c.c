/*
rakesh tarendra
21MT30031
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    srand(time(0));
    int n;
    printf("Number of rounds: ");
    scanf("%d",&n);
    int num;
    int a,b;
    a=0;
    b=0;
    int as,bs;
    as=0;
    bs=0;
    int x = 0;
    int y = 0;
    int ab = 0;
    int bb = 0;
    for(int i = 0; i<n; i++){
        printf("Round - %d --> ",i+1);
        num = (rand() % (1000 - 5 + 1)+5);
        printf(" A's number: %d",num);
        while(num != 0){
            a++;
            as = as+(num%10);
            num = num / 10;
            }
        num = (rand() % (1000 - 5 + 1)+5);
        printf("   B's number: %d",num);
        while(num != 0){
            b++;
            bs = bs+(num%10);
            num = num / 10;
            }
        printf("\n");

        if(a>b){
            printf("          A's point: %d   B's point: %d ",a,b);
            printf("\n");
            printf("          A's batch: 1   B's batch: 0 ");
            printf("\n");
            printf("-- A Wins Round %d --",i+1);
            printf("\n");
            ab++;
            x=a+x;
            y=b+y;

        }
        else if(b>a){
            printf("          A's point: %d   B's point: %d ",a,b);
            printf("\n");
            printf("          A's batch: 0   B's batch: 1 ");
            printf("\n");
            printf("          -- B Wins Round %d --",i+1);
            printf("\n");
            bb++;
            x=a+x;
            y=b+y;
        }
        else{
            printf("          A's point: %d   B's point: %d ",as,bs);
            printf("\n");
            if(as>bs)
            {printf("          A's batch: 1   B's batch: 0 ");
            printf("\n");
            ab++;
            x=a+x;
            y=b+y;
            }
            else{
                printf("          A's batch: 0   B's batch: 1 ");
            printf("\n");
            bb++;
            x=a+x;
            y=b+y;
            }
            printf("          -- A Wins Round %d --",i+1);
            printf("\n");

        }
        }

        x=x*ab;
        y=y*bb;
        if(x>y){
            printf("Final result => A's total score: %d , B's total score: %d ",x,y);
            printf("\n");
            printf("--- A wins the game ---");
        }
        else{
            printf("Final result => A's total score: %d , B's total score: %d ",x,y);
            printf("\n");
            printf("--- B wins the game ---");
        }


return 0 ;



}
