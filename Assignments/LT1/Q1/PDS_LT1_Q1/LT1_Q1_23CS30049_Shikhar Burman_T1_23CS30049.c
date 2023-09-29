// Roll No.: 23CS30049
// Name: Shikhar Burman

// Importing libraries
#include <stdio.h>
#include <math.h>

int main()
{
    int n, temp;
    // Input integer n from user
    do
    {
        printf("Enter a positive integer: ");
        scanf("%d", &n);
        if (n <= 0 || n >= 9999)
            printf("Please make sure that the number is a positive integer less than 9999.\n");

    } while (n <= 0 || n >= 9999);

    temp = n;
    long int encoded = 0;
    int count = 0, flag = 0;

    // First encoding
    while (temp > 0)
    {
        if (flag == 0)
            encoded = encoded + ((temp % 10) + 1) * (pow(10, count));
        else
            encoded = encoded + ((temp % 10) + 1) * (pow(10, ++count));
        if (temp % 10 == 9)
            flag = 1;
        else
            flag = 0;
        temp = temp / 10;
        count++;
    }
    printf("encoded: %ld\n", encoded);

    long int with_checksum;
    int sum = 0;
    temp = encoded;

    // Adding 2 digit checksum
    while (temp > 0)
    {
        sum = sum + temp % 10;
        temp = temp / 10;
    }

    with_checksum = encoded * 100 + sum % 100;
    printf("with checksum: %ld\n", with_checksum);

    long int double_encoded = 0;
    temp = with_checksum;
    count = 0;

    // Second encoding
    while (temp > 0)
    {
        double_encoded += ((temp % 10) * 10) * pow(10, count);
        temp = temp / 10;
        count += 2;
    }

    printf("double encoded: %ld\n", double_encoded);

    return 0;
}