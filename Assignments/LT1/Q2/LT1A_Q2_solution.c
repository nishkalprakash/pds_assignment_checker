#include <stdio.h>
#include <stdlib.h>

int main() {

    // Part a
    int a1[10], a2[10], a3[10], a4[10], a5[20], a6[20], a7[40]; // Declaration

    // Fill a1 with random numbers in the range [10, 30] and print
    printf("a1: ");
    for (int i = 0; i < 10; i++) {
        a1[i] = rand() % 21 + 10; // Generates numbers in the range [10, 30]
        printf("a1[%d] = %d", i, a1[i]);
        if (i < 9) {
            printf(", ");
        }
    }
    printf("\n");

    // Fill a2 with random numbers in the range [30, 60] and print
    printf("a2: ");
    for (int i = 0; i < 10; i++) {
        a2[i] = rand() % 31 + 30; // Generates numbers in the range [30, 60]
        printf("a2[%d] = %d", i, a2[i]);
        if (i < 9) {
            printf(", ");
        }
    }
    printf("\n");

    // Fill a3 with random numbers in the range [60, 90] and print
    printf("a3: ");
    for (int i = 0; i < 10; i++) {
        a3[i] = rand() % 31 + 60; // Generates numbers in the range [60, 90]
        printf("a3[%d] = %d", i, a3[i]);
        if (i < 9) {
            printf(", ");
        }
    }
    printf("\n");

    // Fill a4 with random numbers in the range [90, 120] and print
    printf("a4: ");
    for (int i = 0; i < 10; i++) {
        a4[i] = rand() % 31 + 90; // Generates numbers in the range [90, 120]
        printf("a4[%d] = %d", i, a4[i]);
        if (i < 9) {
            printf(", ");
        }
    }
    printf("\n");

    // Part b
    // Intersperse the contents of a1 and a2 into a5
    int a5Index = 0;
    for (int i = 0; i < 10; i++) {
        a5[a5Index++] = a1[i];  
        a5[a5Index++] = a2[i];
    }

    // Display the contents of a1
    printf("a1: ");
    for (int i = 0; i < 10; i++) {
        printf("a1[%d] = %d", i, a1[i]);
        if (i < 9) {
            printf(", ");
        }
    }
    printf("\n");

    // Display the contents of a2
    printf("a2: ");
    for (int i = 0; i < 10; i++) {
        printf("a2[%d] = %d", i, a2[i]);
        if (i < 9) {
            printf(", ");
        }
    }
    printf("\n");

    // Display the contents of a5
    printf("a5: ");
    for (int i = 0; i < 20; i++) {
        printf("a5[%d] = %d", i, a5[i]);
        if (i < 19) {
            printf(", ");
        }
    }
    printf("\n");


    // Part c
    // Intersperse the contents of a3 and a4 into a6
    int a6Index = 0;
    for (int i = 0; i < 10; i++) {
        a6[a6Index++] = a3[9-i];
        a6[a6Index++] = a4[i];
    }

    // Display the contents of a3
    printf("a3: ");
    for (int i = 0; i < 10; i++) {
        printf("a3[%d] = %d", i, a3[i]);
        if (i < 9) {
            printf(", ");
        }
    }
    printf("\n");

    // Display the contents of a4
    printf("a4: ");
    for (int i = 0; i < 10; i++) {
        printf("a4[%d] = %d", i, a4[i]);
        if (i < 9) {
            printf(", ");
        }
    }
    printf("\n");

    // Display the contents of a6
    printf("a6: ");
    for (int i = 0; i < 20; i++) {
        printf("a6[%d] = %d", i, a6[i]);
        if (i < 19) {
            printf(", ");
        }
    }
    printf("\n");


    // Part d
    // Intersperse the contents of a5 and a6 into a7
    int a7Index = 0;
    for (int i = 0; i < 20; i++) {
        a7[a7Index++] = a5[19-i];
        a7[a7Index++] = a6[19-i];
    }

    // Display the contents of a5
    printf("a5: ");
    for (int i = 0; i < 20; i++) {
        printf("a5[%d] = %d", i, a5[i]);
        if (i < 19) {
            printf(", ");
        }
    }
    printf("\n");

    // Display the contents of a6
    printf("a6: ");
    for (int i = 0; i < 20; i++) {
        printf("a6[%d] = %d", i, a6[i]);
        if (i < 19) {
            printf(", ");
        }
    }
    printf("\n");

    // Display the contents of a7
    printf("a7: ");
    for (int i = 0; i < 40; i++) {
        printf("a7[%d] = %d", i, a7[i]);
        if (i < 39) {
            printf(", ");
        }
    }
    printf("\n");

    return 0;
}
