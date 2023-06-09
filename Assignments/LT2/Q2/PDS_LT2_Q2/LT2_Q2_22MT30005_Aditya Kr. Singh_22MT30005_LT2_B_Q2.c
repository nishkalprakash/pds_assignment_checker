#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int generateRandomNumber(int p, int q) {
    return rand() % (q - p + 1) + p;
}


int max(int *a, int n) {
    if (n == 1)
        return a[0];
    else {
        int subMax = max(a, n - 1);
        return (a[n - 1] > subMax) ? a[n - 1] : subMax;
    }
}

int main() {
    int n, p, q, i;

    printf("Enter the number of random numbers: ");
    scanf("%d", &n);

    printf("Enter the range (p and q): ");
    scanf("%d %d", &p, &q);
    srand(time(0));


    int *number = (int *)malloc(n * sizeof(int));

    printf("\nGenerated Numbers:\n");
    for (i = 0; i < n; i++) {
        number[i] = generateRandomNumber(p, q);
        printf("%d ", number[i]);
    }

    int maxValue = max(number, n);


    printf("\n\nMaximum Value: %d\n", maxValue);

    free(number);

    return 0;
}
