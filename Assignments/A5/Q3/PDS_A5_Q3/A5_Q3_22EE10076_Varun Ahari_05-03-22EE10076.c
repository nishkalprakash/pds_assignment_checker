#include <stdio.h>


void swap(int *p, int *q) {
    int temp = *p;
    *p = *q;
    *q = temp;
}


void reverse(int *a, int start, int end) {
    if (start >= end) {
        
    }
}

void syslisshift(int *a, int n, int direction) {
    if (n <= 1) {
    
    }
    if (direction == 1) {
        swap(&a[0], &a[n - 1]);
    } else if (direction == -1) {
        swap(&a[0], &a[1]);
    }
}

int main() {
    int n, direction, i;
    printf("Enter the size of the array and direction: ");
    scanf("%d %d", &n, &direction);
    int a[n];
    printf("Enter %d integers: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    printf("Original array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    reverse(a, 0, n - 1);
    printf("Array after reverse: ");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    printf("After cyclic shift: ");
    syslisshift(a, n, direction);
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}
