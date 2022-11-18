/*
Name: Shashwata Roy
Roll: 21MA10055
Dept: Maths and Computing
Package: Codeblocks
Assignment class: 4
Test: 1
*/

#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int fun(){
    int num;
    num=(rand() % (1000 - 5 + 1)) + 5;
    return num;
}

int main(){
    srand(time(0));
    int n,num,a1,b1,a=0,b=0,sum_a,sum_b,q,p,ta=0,tb=0;
    printf("Number of rounds: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        a1=a=fun();
        b1=b=fun();
        sum_a=0;p=0;sum_b=0;q=0;
        while(a>=1||b>=1){
            if(a>=1){
                sum_a+=a%10;
                a/=10;
                p++;
            }
            if(b>=1){
                sum_b+=b%10;
                b/=10;
                q++;
            }
        }
        if(p>q){
            a=1;
            b=0;
        }
        if(p<q){
            b=1;
            a=0;
        }
        if(p==q){
            if(sum_a>sum_b){
                b=0;
                a=1;
            }
            if(sum_a<sum_b){
                b=1;
                a=0;
            }
        }
        printf("Round-%d -->  ",(i+1));
        printf("A's number: %d    B's number: %d\n",a1,b1);
        if(p!=q){
            ta+=a*p;
            tb+=b*q;
            printf("             A's point: %d     B's point: %d\n",p,q);
        }
        else{
            ta+=a*sum_a;
            tb+=b*sum_b;
            printf("             A's point: %d     B's point: %d\n",sum_a,sum_b);
        }
        printf("             A's badge: %d     B's badge: %d\n",a,b);
        if(a<b){
            printf("             -- B wins Round %d --\n",(i+1));
        }
        else
            printf("             -- A wins Round %d --\n",(i+1));
    }
    printf("Final result => A's total score: %d, B's total score: %d\n",ta,tb);
    if(ta>tb)
        printf("             -- A wins the game --");
    if(tb>ta)
        printf("             -- B wins the game --");
return 0;
}
