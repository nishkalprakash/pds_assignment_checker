#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number n\n");
    scanf("%d", &n);
    printf("OUTPUT\n");


    int r = n % 2;

    if (r == 1)
    {
        int d = 0; // variable to check the number of digits
        int a = n; // start from variable
        while (a != 0)
        {
            a = a / 10;
            d = d + 1;
        }

        // d == number of digits



        int m = 1;
        while (d != 1)
        {
            m = m * 10;
            d = d-1;
        }

        // m = first divisor for n, like 100 for 3-digit number

        if (n < 0)
            n = n * (-1);


        printf("Most significant digits to least significant digits:\n");
        int b = n;
        while (m != 0)
        {
            b = n / m;
            printf("%d  ", b);
            m = m / 10;

        }





    }


    if (r == 0)
    {
        int d = 0; // variable to check the number of digits
        int a = n; // start from variable
        while (a != 0)
        {
            a = a / 10;
            d = d + 1;
        }

        // d == number of digits

        int m = 1;
        while (d != 0)
        {
            m = m * 10;
            d = d-1;
        }


        // m = first divisor for n, like 1000 for 3-digit number


        if (n < 0)
            n = n * (-1);

        printf("Least significant digits to most significant digits:\n");


        int b = n;

        while (m != 1)
        {
            b = b % m;
            printf("%d  ", b);
            m = m / 10;
        }



    }

    printf("\n");



    // to reverse number

    int b = 0;
    int p = n;

    while (p > 0)
    {
        b = (b*10) + (p % 10);
        p = p/10;
    }

    printf("Reverse number is %d\n", b);

    printf("Difference between Reverse and original number is %d", b-n);


    return 0;
}
