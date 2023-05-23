// Code creator: Yaman Kumar Sahu (yaman.sahu7620@gmail.com)

#include <stdio.h>
#include <stdlib.h> // this headerfile is needed for dynamic memory allocation (malloc, etc)
#include <time.h>

int isPerfectNumber(int number)
{
    // parameter : an integer
    // return type : integer (return 1 for valid perfect number otherwise 0)

    // initially sum will be 1 as 1 is factor of every number
    int sum = 1;

    // for loop starts from 2  to (number / 2) as next half will not be a factor of that number
    for (int i = 2; i <= number / 2; i++)
    {
        // if i divides the number then sum will increased by i
        if (number % i == 0)
            sum += i;
    }

    // if sum is equal to number then it's perfect number
    if (sum == number)
        return 1;
    // otherwise not a perfect number
    return 0;
}

// main function of the program
int main(int argc, char const *argv[])
{
    srand(time(0));

    /* Taking input from the user */
    int n, flag = 0;
    scanf("%d", &n);

    /* Allocate 1D Array dynamically of size n using malloc */
    int *arr = (int *)malloc(sizeof(int) * n);

    /* Generate n random numbers in range between p (= 2 say) and q (= 1000 say)*/
    int p = 1, q = 1000;

    printf("%d-random number array:\n",n);
    for (int i = 0; i < n; i++)
    {
        int r = p + rand() % q; // generate random number
        printf("%d ", r);
        arr[i] = r; // Initialize to the dynamic array
    }
    printf("\n");

    for (int i = 0; i < n; i++)
    {

        // check a number is perfect number or not
        if (isPerfectNumber(arr[i]))
        {
            // if yes, then print
            printf("%d", arr[i]);
            if (flag)
                printf(", ");
            flag++;

        }
        // otherwise not a perfect number
    }
    if (flag == 0)
        printf("\nNo perfect number found");
    else
        (flag == 1)?printf("is a perfect number\n"):printf("are perfect numbers\n");
    return 0;
}
