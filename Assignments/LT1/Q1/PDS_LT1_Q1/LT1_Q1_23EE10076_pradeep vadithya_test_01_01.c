//NAME: Pradeep
//Roll No: 23EE10076
//set: 2
//question 1



#include <stdio.h>

int main() {
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d", i);
        }