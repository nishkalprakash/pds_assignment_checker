#include <stdio.h>

int main()
{
    int n1, n2, n3, n4, n5;

    printf("Enter the five numbers\n");
    scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);

    int r1 = n1 % 2, r2 = n2 % 2, r3 = n3 % 2, r4 = n4 % 2, r5 = n5 % 2;

    int count_odd = r1 + r2 + r3 + r4+ r5;
     // even number give remainders 0 and odd numbers give remainder 1, so adding them all gives the number of odd numbers

     printf("No. of odd numbers is %d\n", count_odd);

    if (count_odd == 2) // // two odd numbers or three even numbers
    {
        if (n1 > n2 && n1 > n3 && n1 > n4 && n1 > n5)
            printf("The largest number is %d\n", n1);
        else if (n2 > n1 && n2 > n3 && n2 > n4 && n2 > n5)
            printf("The largest number is %d\n", n2);
        else if (n3 > n1 && n3 > n2 && n3 > n4 && n3 > n5)
            printf("The largest number is %d\n", n3);
        else if (n4 > n1 && n4 > n2 && n4 > n3 && n4 > n5)
            printf("The largest number is %d\n", n4);
        else if (n5 > n1 && n5 > n2 && n5 > n3 && n5 > n4)
            printf("The largest number is %d\n", n5);
    }

    if (count_odd == 3)
    {
        printf("Print the ascending order\n");
    }




    return 0;

}


