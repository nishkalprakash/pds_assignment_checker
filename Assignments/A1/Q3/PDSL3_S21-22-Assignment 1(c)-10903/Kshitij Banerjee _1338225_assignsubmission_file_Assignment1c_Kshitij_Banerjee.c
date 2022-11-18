#include <stdio.h>
int main()
{
    int m;
    printf("Enter the number of machines:");
    scanf("%d", &m);

    int d;
    printf("Enter the day number (1-7):");
    scanf("%d", &d);

    int n;
    int k;

    switch (d)
    {
    case 1:
        n = m;
        printf("Number of Manufactured cars = %d", n);
        break;
    case 2:
        n = m + m / 2.0 + m / 4.0;
        printf("Number of Manufactured cars = %d", n);
        break;
    case 3:;
        printf("Enter no. of machines under inspection:");
        scanf("%d", &k);
        n = m - k + (m - k) / 2.0 + (m - k) / 4.0;
        printf("Number of Manufactured cars = %d", n);
        break;
    case 6:;
        printf("Enter no. of machines under inspection:");
        scanf("%d", &k);
        n = m - k + (m - k) / 2.0 + (m - k) / 4.0;
        printf("Number of Manufactured cars = %d", n);
        break;
    default:;
        float f;
        printf("Enter boosting fraction:");
        scanf("%f", &f);
        n = m + f * m;
        printf("Number of Manufactured cars = %d", n);
        break;
    }
    return 0;
}
