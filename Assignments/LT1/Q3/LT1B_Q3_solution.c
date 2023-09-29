/*
3. Write a program to ask the user how many random numbers to generate. 
Generate that many random numbers between 0 and 100. 
Display the random numbers.  
Display the percentage of random numbers that were generated between 0—9, 10—19,20—29, …, and 90—100.  
*/


// Name: Nishkal Prakash
// Roll: 19CS91R05
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int N; // N is the number of random numbers to be generated (user defined)
    int i; // i is the loop variable
    int random_number; // random_number is the random number generated
    int count[10] = {0}; // count is the array to store the count of numbers in each range
    int range; // range is the range of the random number generated

    printf("Enter the number of random numbers to be generated: ");
    scanf("%d", &N);

    // srand(time(0)); // Seeding the random number generator
    srand(55); // Seeding the random number generator

    for (i = 0; i < N; i++) // i is the loop variable
    {
        random_number = rand() % 100; // Generating a random number between 0 and 100
        printf("%d ", random_number); // Printing the random number generated
        range = random_number / 10; // Calculating the range of the random number generated
        count[range]++; // Incrementing the count of the range
    }
    printf("\n");

    for (i = 0; i < 10; i++) // i is the loop variable
    {
        printf("The percentage of numbers in the range %d-%d is %0.1f%%\n", i * 10, (i + 1) * 10 - 1, (float)count[i] / N * 100); // Printing the percentage of numbers in each range
    }
    return 0;
}