//Roll No.: 23CS30049
//Name: Shikhar Burman

//Importing Standard Input-Output library
#include <stdio.h>

void main()
{
    int marks; 

    // Input marks from user
    printf("Enter marks(out of 100): ");
    scanf("%d", &marks);

    // Conditional statements for evaluating and outputing grade
    if (marks>=90)
        printf("Your grade is EX\n"); 
    if (marks>=80 && marks<90)
        printf("Your grade is A\n"); 
    if (marks>=70 && marks<80)
        printf("Your grade is B\n"); 
    if (marks>=60 && marks<70)
        printf("Your grade is C\n"); 
    if (marks>=50 && marks<60)
        printf("Your grade is D\n"); 
    if (marks>=35 && marks<50)
        printf("Your grade is P\n"); 
    if (marks<35)
        printf("Your grade is F\n"); 
}