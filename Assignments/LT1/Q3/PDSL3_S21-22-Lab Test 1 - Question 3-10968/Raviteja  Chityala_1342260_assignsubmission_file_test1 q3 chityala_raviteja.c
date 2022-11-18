/*chityala raviteja
section 3
dept. -CSE Dual
roll no: 21CS30016
package : online compiler
os- windows 10 */

#include <stdio.h>
#include<time.h>
#include<stdlib.h>
#include <math.h>

int main() {
    srand(time(0));
    int rounds,round,a_num,b_num,a_digits,b_digits,a_badge,b_badge,a_badges,b_badges,a_sum,b_sum,a_points,b_points,a_score,b_score;
    printf("Number of rounds:");
    scanf("%d",&rounds);
    round=1;
    a_badges=0;
    b_badges=0;
    a_points=0;
    b_points=0;
    while (round<=rounds){
        int a_num = (rand() % (1000 - 5 + 1)) + 5;
        int b_num = (rand() % (1000 - 5 + 1)) + 5;
        //checking no. of digits
        a_digits=0;
        if (a_digits==0){
            a_digits=floor(a_num/100);
        }
         if (a_digits==0){
            a_digits=floor(a_num/10);
        }
         if (a_digits==0){
            a_digits=floor(a_num/1);
        }
        b_digits=0;
        if (b_digits==0){
            b_digits=floor(b_num/100);
        }
         if (b_digits==0){
            b_digits=floor(b_num/10);
        }
         if (b_digits==0){
            b_digits=floor(b_num/1);
        }
        //comparison
        if (a_digits!=b_digits){
            if (a_digits>b_digits){
                a_badge=1;
                b_badge=0;
            }
            else if (b_digits>a_digits){
                b_badge=1;
                a_badge=0;
            }
            printf("round-%d -->  A's number: %d    B's number: %d\n",round,a_num,b_num);
            printf("              A's point: %d    B's point: %d\n",a_digits,b_digits);
            printf("              A's badge: %d    B's badge: %d\n",a_badge,b_badge);
            
            a_points+=a_digits;
            b_points+=b_digits;
            a_badges+=a_badge;
            b_badges+=b_badge;
            
        }
        else {
            a_sum=((floor(a_num/100)+floor((a_num-(floor(a_num/100))*100)/10)+floor((a_num-(floor(a_num/100))*100-(floor((a_num-(floor(a_num/100))*100)/10)*10)))));
            b_sum=((floor(b_num/100)+floor((b_num-(floor(b_num/100))*100)/10)+floor((b_num-(floor(b_num/100))*100-(floor((b_num-(floor(b_num/100))*100)/10)*10)))));
            if (a_sum>b_sum){
                a_badge=1;
                b_badge=0;
            }
            else if (b_sum>a_sum){
                b_badge=1;
                a_badge=0;
            }
            printf("round-%d -->  A's number: %d    B's number: %d\n",round,a_num,b_num);
            printf("              A's point: %d    B's point: %d\n",a_sum,b_sum);
            printf("              A's badge: %d    B's badge: %d\n",a_badge,b_badge);
            
            a_points+=a_sum;
            b_points+=b_sum;
            
        }
        
    round++;   
    }
    a_score=a_points*a_badges;
    b_score=b_points*b_badges;
    printf("Final result--> A's total score : %d , B's total score: %d\n",a_score,b_score);
    if (a_score>b_score){
        printf("----A wins the game---");
    }
    else if (b_score>a_score){
        printf("----B wins the game---");
    }
    return 0;
    
}