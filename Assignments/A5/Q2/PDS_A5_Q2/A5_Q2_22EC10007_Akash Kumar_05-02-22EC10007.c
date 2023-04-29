/*
* Section 2
* Roll No. : 22EC!0007
* Name : Akash Kumar
* Assignment : 5
* Question 2
* Description : code to split an input number into sum of primes
*/

// Note : In the test cases, for input

#include <stdio.h>
#include <math.h>

int primecheck (int n)
{
    int s = sqrt(n);
    int a = 2;
    int result = 0;

    while (a <= s)
    {
        if (n % a == 0)
            result = 1;
        a++;
    }
    return result;
}

int main()
{
    int N;
    printf("Enter the number N\n");
    scanf("%d", &N);




    while (N == 2)
    {
        printf("-1\n");
        printf("Enter the number N\n");
        scanf("%d", &N);
    }

    while ((N % 2) == 1)
    {
        printf("-1\n");
        printf("Enter the number N\n");
        scanf("%d", &N);
    }

    int m = 2;
    while (m <= N)
    {
        int mcheck = primecheck(m);
        if (mcheck == 0)
        {
            int ncheck = primecheck(N-m);
            if (ncheck == 0)
            {
                printf("%d, %d\n", m, N-m);
                break;
            }
        }
        m++;
    }
    return 0;
}
