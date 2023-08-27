/*
Write a C program in which first declare two integer variables m and n. Then prompt the user to write the values of m and n and read them. Then, display the following information:
a. The sum m+n
b. The difference m-n
c. The product m*n
d. The integer quotient m/n
e. The integer remainder m%n
f. The floating point quotient m/n
g. The sum of the squares m2+n2
h. The square of the sum (m+n)2
i. The average (m+n)/2 as a floating point number
j. The average of the sum of the squares (m2+n2)/2 as a floating point number*/

// Roll No: 19CS91R05
// Name: Nishkal Prakash
#include <stdio.h>
int main()
{
    int m, n;
    printf("Enter the value of m: ");
    scanf("%d", &m);
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("The sum m+n: %d\n", m + n);
    printf("The difference m-n: %d\n", m - n);
    printf("The product m*n: %d\n", m * n);
    printf("The integer quotient m/n: %d\n", m / n);
    printf("The integer remainder m%%n: %d\n", m % n);
    printf("The floating point quotient m/n: %f\n", (float)m / n); // typecasting m to float will make the result of the division float
    printf("The sum of the squares m2+n2: %d\n", m * m + n * n);
    printf("The square of the sum (m+n)2: %d\n", (m + n) * (m + n));
    printf("The average (m+n)/2 as a floating point number: %f\n", (m + n) / 2.0); // dividing by 2.0 will make the result float
    printf("The average of the sum of the squares (m2+n2)/2 as a floating point number: %f\n", (m * m + n * n) / 2.0); // dividing by 2.0 will make the result float
    return 0;
}

/*
Enter the value of m: 100
Enter the value of n: 50
The sum m+n: 150
The difference m-n: 50
The product m*n: 5000
The integer quotient m/n: 2
The integer remainder m%n: 0
The floating point quotient m/n: 2.000000
The sum of the squares m2+n2: 12500
The square of the sum (m+n)2: 22500
The average (m+n)/2 as a floating point number: 75.000000
The average of the sum of the squares (m2+n2)/2 as a floating point number: 6250.000000
*/