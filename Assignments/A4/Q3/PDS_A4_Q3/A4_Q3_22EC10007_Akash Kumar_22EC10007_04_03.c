/*
* Section 2
* Roll No : 22EC10007
* Name : Akash Kumar
* Assignment : 4
* Description : Code to print the "Numero-Pyramid" for a given height
*/


#include <stdio.h>

int main()
{
    int n;
    printf("Enter the height of the required pyramid\n");
    scanf("%d", &n);

    printf("Numero-pyramid of height %d\n", n);

    int r = 1;  // row number

    while (r <= n)
    {
        // to leave appropriate spaces

        int space = 1;
        while (space <= (n-r))
        {
            printf(" ");
            space = space + 1;
        }




        int s = r;
        int m = 2*r - 1;
        int z = s % 10;


        while (s <= m)
        {
           printf("%d", z);
           s = s + 1;
           z = s % 10;
        }

        s = s-2;

        while (s >= r)
        {
            printf("%d", z);
            s = s - 1;
            z = s % 10;
        }


        printf("\n");
        r = r + 1;
    }


    return 0;
}
