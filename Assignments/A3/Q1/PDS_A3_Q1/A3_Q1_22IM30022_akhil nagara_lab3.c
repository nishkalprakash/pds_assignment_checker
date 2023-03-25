#include <stdio.h>

int main()
{
    int number, a, b, c, d, e, f

    printf("Enter one 5 digit number: \n");
    sscanf("%d", &number );

    a = number;
    b = a / 10000;
    c = a / 1000 % 10;
    d = a / 100 % 10;
    e = a / 10 %10;
    f = a % 10;

    printf("%d %d %d %d %d\n", b, c, d, e, f);

    max = int( input("Enter max number:"));
        odd_numbers = [];
        for i in range(1 , max);
        if i % 2 == 1;
        odd_numbers.append(i)
    printf("Odd number:" , odd_numbers);


    return 0;
}






