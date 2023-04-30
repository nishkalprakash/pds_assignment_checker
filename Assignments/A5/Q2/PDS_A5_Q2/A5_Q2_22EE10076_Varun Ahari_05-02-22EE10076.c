#include <stdio.h>

int primeCheck(int i);

int main() {
    int n, i, flag = 0;

    scanf("%d", &n);
    if (n <= 4 || n % 2 != 0) {
        printf("-1");
    } else {
        for (i = 2; i <= n / 2; ++i) {
            if (primeCheck(i) == 1) {
                if (primeCheck(n - i) == 1) {
                    printf("%d, %d\n", i, n - i);
                    flag = 1;
                }
            }
        }
        if (flag == 0) {
            printf("-1");
        }
    }
    return 0;
}

int primeCheck(int i) {
    int j, isPrime = 1;
    for (j = 2; j <= i / 2; ++j) {
        if (i % j == 0) {
            isPrime = 0;
            break;
        }
    }
    return isPrime;
}
