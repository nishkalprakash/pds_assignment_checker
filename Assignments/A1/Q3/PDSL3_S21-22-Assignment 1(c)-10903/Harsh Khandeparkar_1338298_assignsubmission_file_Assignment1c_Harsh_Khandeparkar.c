/*
	Name: Harsh Khandeparkar
	Roll: 21EC30023
	Dept: Electronics and Electrical Communication Engineering
	Package: Visual Studio Code, gcc v11.2.0
	Assign: 1(c)
*/

#include <stdio.h>
#include <math.h>

int main() {
    int m; // number of available machines
    int day_number;

    printf("Enter the number of machines: ");
    scanf("%d", &m);

    printf("Enter the day number(1-7): ");
    scanf("%d", &day_number);

    int n; // number of cars manufactured

    switch (day_number) {
        case 1:
            n = m;
            break;

        case 2:
            n = round((float)m * (1 + 0.5 + 0.25));
            break;

        case 3:
        case 6:
            int k; // machines kept under inspection

            printf("Enter no. of machines under inspection: ");
            scanf("%d", &k);

            m -= k; // subtract machines under inspection from m

            // same calculation as day 2 but with changed value of m
            n = round((float)m * (1 + 0.5 + 0.25));
            break;

        default:
            float f; // boosting fraction

            printf("Enter boosting fraction: ");
            scanf("%f", &f);

            n = round((float)m + (float)m * f);

            break;
    }

    printf("Number of manufactured cars = %d\n", n);

    return 0;
}