#include <stdio.h>

int main()
{
    int n, m, k, day, f;

    printf("Enter the number of machines");
    scanf("%d", &m);
    printf("Enter the day number (1-7)");
    scanf("%d", &day);

    switch (day)
    {
    case 1:
        n = m;
        printf("Number of manufactured car = %d", n);
        break;
    case 2:
        n = m + (m / 2) + (m / 4);
        printf("Number of manufactured car = %d", n);
        break;
    case 3:
        printf("Enter the number of machines under inspection :");
        scanf("%d", &k);
        n = (m - k) + (m - k) / 2 + (m - k) / 4;
        printf("Number of manufactured car = %d", n);
        break;
    case 4:
        printf("Enter the boosting fraction ");
        scanf("%d", &f);
        if (f < 0 || f > 1)
        {
            break;
        }
        n = m + f;
        printf("Number of manufactured car = %d", n);
        break;
    case 5:
        printf("Enter the boosting fraction ");
        scanf("%d", &f);
        if (f < 0 || f > 1)
        {
            break;
        }
        n = m + f;
        printf("Number of manufactured car = %d", n);
        break;
    case 6:
        printf("Enter the number of machines under inspection :");
        scanf("%d", &k);
        n = (m - k) + (m - k) / 2 + (m - k) / 4;
        printf("Number of manufactured car = %d", n);
        break;
        printf("Enter the boosting fraction ");
        scanf("%d", &f);
        if (f < 0 || f > 1)
        {
            break;
        }
        n = m + f;
        printf("Number of manufactured car = %d", n);
    case 7:

        break;
    }
}
