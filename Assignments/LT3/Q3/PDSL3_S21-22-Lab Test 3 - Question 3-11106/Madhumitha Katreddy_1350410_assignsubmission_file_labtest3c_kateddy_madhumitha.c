#include <stdio.h>

int main() {
    int c, d;
    printf("Enter two digits: ");
    scanf("%d %d", &c, &d);
    int n[5];
    for (int i = 0; i < (1 << 5); i++) {
        for (int j = 0; j < 5; j++) {
            // printf("%d ", i&(1<<j));
            if (i & (1 << j)) {
                n[j] = d;
            } else {
                n[j] = c;
            }
        }
        int num = n[0] * 100000 + n[1] * 10000 + n[2] * 1000 + n[3] * 100 +
                  n[4] * 10 + n[5];
        if (num % (c + d) != 0) {
            for (int j = 0; j < 5; j++) {
                printf("%d", n[j]);
            }
            printf(" ");
        }
    }
}
