#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int max(int *arr, int start, int end) {
    if (start == end) {
        return arr[start];
    } else {
        int mid = (start + end) / 2;
        int max1 = max(arr, start, mid);
        int max2 = max(arr, mid + 1, end);
        return (max1 > max2) ? max1 : max2;
    }
}

int main() {
    int n, p, q;
    printf("Enter the size of the array (n): ");
    scanf("%d", &n);
    printf("Enter the range (p and q, both inclusive): ");
    scanf("%d%d", &p, &q);

    int numbers[n];
    srand(time(NULL));

    // Generate random numbers and store them in the array
    for (int i = 0; i < n; i++) {
        numbers[i] = rand() % (q - p + 1) + p;
    }

    printf("Numbers stored in the array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    int max_value = max(numbers, 0, n - 1);
    printf("Maximum value: %d\n", max_value);

    return 0;
}

