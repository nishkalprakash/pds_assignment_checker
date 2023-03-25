//22EE10036//
#include<stdio.h>
int main(){
int x;
printf("If the number is a three digit number then type 3 or if it is a two digit number type 2\n");
scanf("%d", &x);
if(x == 3){
    int a, b, c, sum;
    printf("Write the first number\n");
    scanf("%d", &a);
    printf("Write the second number\n");
    scanf("%d", &c);
    b = a%10;
    sum = 0;
    sum = sum*10 + b;
    a = a/10;
    b = a%10;
    sum = sum*10 + b;
    a = a/10;
    sum = sum*10 + a;
    if(sum == c) {
        printf("Yes it is a perfect pair\n");
    }
    else
        printf("It is not a perfect pair\n");
    }
    if (x == 2) {
        int A, B, I, S;
        printf("Write first number\n");
        scanf("%d", &A);
        printf("second number\n");
        scanf("%d", &B);
        I = A%10;
        S = 0;
        S = S*10 + I;
        A = A/10;
        I = A%10;
        if (S = B) {
            printf("It is a perfect pair\n");
        }
    else
        printf("It is not a perfect pair\n");
    }
    return 0;
}
