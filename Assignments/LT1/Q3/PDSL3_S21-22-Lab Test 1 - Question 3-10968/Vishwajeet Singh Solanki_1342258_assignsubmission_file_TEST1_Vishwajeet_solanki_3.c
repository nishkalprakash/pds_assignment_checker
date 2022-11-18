#include<stdio.h>
#include<stdlib.h>

int sumofDigits(int n){
    int sum = 0;
    while(n){
        sum += (n%10);
        n /= 10;
    }
    return sum;
}

int noofDigits(int n){
    int count = 0;
    while(n){
        count++;
        n /= 10;
    }
    return count;
}

int main(){
    srand(time(0));
    int tc;
    printf("Number of Rounds : ");
    scanf("%d", &tc);
    int a = 0, b = 0, counta = 0, countb = 0;
    for(int i = 1; i<=tc; i++){
        int numa = (rand() % (1000 - 5 + 1)) + 5;
        int numb = (rand() % (1000 - 5 + 1)) + 5;
        printf("Round-%d -->\tA's number : %d\t B's number : %d\n", i, numa, numb);
        int x = noofDigits(numa), y = noofDigits(numb);
        if(x != y){
            printf("\t\tA's point : %d\t\t B's point : %d\n", x, y);
            a += x, b += y;
            if(y > x){
                countb++;
                printf("\t\tA's badge : %d\t\t B's badge : %d\n", 0, 1);
                printf("\t\t\t-- B wins Round %d --\n", i);
            }
            else{
                counta++;
                printf("\t\tA's badge : %d\t\t B's badge : %d\n", 1, 0);
                printf("\t\t\t-- A wins Round %d --\n", i);
            }
        }
        else{
            int m = sumofDigits(numa), n = sumofDigits(numb);
            a += m, b += n;
            printf("\t\tA's point : %d\t\t B's point : %d\n", m, n);
            if(n > m){
                countb++;
                printf("\t\tA's badge : %d\t\t B's badge : %d\n", 0, 1);
                printf("\t\t\t-- B wins Round %d --\n", i);
            }
            else if(n < m){
                counta++;
                printf("\t\tA's badge : %d\t\t B's badge : %d\n", 1, 0);
                printf("\t\t\t-- A wins Round %d --\n", i);
            }
            else printf("\t\t\tCan't be Predicted\n");
        }
    }
    int i = a*counta, j = b*countb;
    printf("Final Result =>\tA's total score: %d, B's total score: %d\n", i, j);
    if(i > j) printf("\t\t\t-- A wins the game --\n");
    else if(j > i) printf("\t\t\t-- B wins the game --\n");
    else printf("\t\t\tTie\n");

    return 0;
}
