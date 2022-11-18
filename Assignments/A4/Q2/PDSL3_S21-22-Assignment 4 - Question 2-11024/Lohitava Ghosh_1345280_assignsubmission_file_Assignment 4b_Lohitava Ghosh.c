/*
Name:Lohitava Ghosh
Roll no.:21AE10023
Department:Aerospace Engg Btech.
Package:code blocks
Operating system: Windows
*/

#include <stdio.h>

int number(int x, int l, int k, int L, int R) //function to count the number of ways to take k items in n days
{
    if (x == k) {
        if (l == 0)
            return 1;
        else
            return 0;
    }
    if (l == 0) //if k items cannot be shifted in n days
        return 0;

    int c = 0;
    for (int i = L; i <= R; i++) {
        if (i > l)
            break;
        c = c + (number(x + 1,l - i, k, L, R)); //recursive calling and adding the number of ways
    }
    return c;
}

int divide(int n, int k, int L, int R) //function that drives the main recursive function
{
    return number(0, n, k, L, R); //L is 1 and R is m, the minimum number of items allowed
}

int main()
{
    int N,K,M;
    printf("Enter the number of items:");
    scanf("%d",&N);
    printf("Enter the number of days:");
    scanf("%d",&K);
    printf("Enter the number of items:");
    scanf("%d",&M);
    printf("All possible journeys: %d",divide(N, K, 1, M));
    return 0;
}
