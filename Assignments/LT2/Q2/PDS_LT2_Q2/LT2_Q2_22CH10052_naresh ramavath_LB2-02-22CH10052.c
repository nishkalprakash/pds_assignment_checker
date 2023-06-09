
//Name:Naresh Ramavath
//Roll:22ch10052
//ques:02




#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int random_number(int p, int q) {
    return rand() % (q - p + 1) + p;
}
void random_numbers(int *numbers, int n, int p, int q) {
    for (int i = 0; i < n; i++) {
        numbers[i] = random_number(p, q);
    }
}


int max(int *a, int n) {
    if (n == 1) {
        return a[0];
    } else {
        int mid = n / 2;
        int max1 = max(a, mid);
        int max2 = max(a + mid, n - mid);
        return (max1 > max2) ? max1 : max2;
    }
}



int main() {
    int n, p, q;


    printf("Enter the number of random numbers to generate: ");
    scanf("%d", &n);

    printf("Enter the lower limit (p): ");
    scanf("%d", &p);

    printf("Enter the upper limit (q): ");
    scanf("%d", &q);


    if (n <= 0 || p > q) {
        printf("Invalid Value of n or p > q\n");
        return 0;
    }




    int *numbers = malloc(n * sizeof(int));
    srand(time(NULL));
    random_numbers(numbers, n, p, q);

   printf("List = [");
    for (int i = 0; i < n; i++) {
        printf("%d", numbers[i]);
        if (i != n - 1) {
            printf(", ");
        }
    }
    printf("]\n");

    int max_value = max(numbers, n);
    printf("Max = %d\n", max_value);


    free(numbers);

    return 0;
}




























