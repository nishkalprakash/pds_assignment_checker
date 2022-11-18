#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    srand(time(0));
    int n;
    printf("Enter number of rounds:");
    scanf("%d", &n);
    int apoints[n], bpoints[n];
    for (int i = 0; i < n; i++) {
        int num_a = (rand() % (1000 - 5 + 1)) + 5,
            num_b = (rand() % (1000 - 5 + 1)) + 5;
        printf("Round-%d -->  A's number: %d  B's number: %d\n", i + 1, num_a,
               num_b);
        int count_a = 0, count_b = 0;
        do {
            num_a /= 10;
            ++count_a;
        } while (num_a != 0);

        do {
            num_b /= 10;
            ++count_b;
        } while (num_b != 0);

        if (count_a == count_b) {
            int sum_a = 0, sum_b = 0;
            while (num_a != 0) {
                sum_a = sum_a + num_a % 10;
                num_a = num_a / 10;
            }
            while (num_b != 0) {
                sum_b = sum_b + num_b % 10;
                num_b = num_b / 10;
            }
            apoints[i] = sum_a;
            bpoints[i] = sum_b;
            printf("\t\tA's points: %d  B's points: %d\n", apoints[i],
                   bpoints[i]);
        } else {
            apoints[i] = count_a;
            bpoints[i] = count_b;
            printf("\t\tA's points: %d  B's points: %d\n", apoints[i],
                   bpoints[i]);
        }

        int abad, bbad;
        if (apoints[i] > bpoints[i]) {
            abad = 1;
            bbad = 0;
            printf("\t\tA's badge : %d B's badge : %d\n", abad, bbad);
            printf("\t\t A wins Round-%d\n", i + 1);
        } else if (apoints[i] < bpoints[i]) {
            abad = 0;
            bbad = 1;
            printf("\t\tA's badge : %d B's badge : %d\n", abad, bbad);
            printf("\t\t B wins Round-%d\n", i + 1);
        }
    }
    return 0;
}
