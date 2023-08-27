/*Write a program to read an integral value representing the age of a person in months and display the age of the person in years. Example: for a person aged 241 months, the display should be “The person is 21 years old”.
 */
// Roll No: 19CS91R05
// Name: Nishkal Prakash
#include <stdio.h>
int main()
{
    int age_in_months, age_in_years;
    printf("Enter the age of the person in months: ");
    scanf("%d", &age_in_months);
    age_in_years = age_in_months / 12 + 1; // dividing the age in months by 12 will give the age in years
    if (age_in_months % 12 == 0)           // this is optional
        age_in_years--;
    printf("The person is %d years old\n", age_in_years);
    return 0;
}

/*
Enter the age of the person in months: 241
The person is 21 years old

Enter the age of the person in months: 240
The person is 21 years old
The person is 20 years old (also allowed)
*/