/*
* Name : Akash KUmar
* Roll : 22EC10007
* Problem 1: Management of Records
*/

#include <stdio.h>
#include <string.h>



typedef struct person {
    char name[30];
    char passport_no[10];
    char nationality[15];
    int date;
    int month;
    int year;
} person;

void read(int j, person persons[j])
{
    printf("\n");
    printf("Enter the details\n");
    printf("Name : ");
    scanf("%s", persons[j].name);
    printf("Passport No. : ");
    scanf("%s", persons[j].passport_no);
    printf("Nationality : ");
    scanf("%s", persons[j].nationality);
    printf("Enter the date of birth\n");

    printf("Date : ");
    scanf("%d", &persons[j].date);

    while (persons[j].date < 1 | persons[j].date > 31)
    {
        printf("Invalid Input\n");
        printf("Enter again\n");
        printf("Date : ");
        scanf("%d", &persons[j].date);
    }

    printf("Month : ");
    scanf("%d", &persons[j].month);

    while (persons[j].month < 1 | persons[j].month > 12)
    {
        printf("Invalid Input\n");
        printf("Enter again\n");
        printf("Month : ");
        scanf("%d", &persons[j].month);
    }

    printf("Year : ");
    scanf("%d", &persons[j].year);

    while (persons[j].year < 1000 | persons[j].month > 2023)
    {
        printf("Invalid Input\n");
        printf("Enter again\n");
        printf("Year : ");
        scanf("%d", &persons[j].year);
    }


    printf("\nDetails for this person completed\n \n");
}


void print(person m)
{
    printf("\n");
    printf("%s \n", m.name);
    printf("%s \n", m.passport_no);
    printf("%s \n", m.nationality);
    printf("%d-%d-%d \n", m.date, m.month, m.year);
}


int main()
{
    int n;

    printf("Enter the number of persons : ");
    scanf("%d", &n);
    printf("\n");

    person persons[n];

    int j = 0;
    while (j<n)
    {
        printf("Enter the details for person %d \n", j+1);

        printf("\n");
        printf("Name : ");
        scanf("%s", persons[j].name);
        printf("Passport No. : ");
        scanf("%s", persons[j].passport_no);
        printf("Nationality : ");
        scanf("%s", persons[j].nationality);
        printf("Enter the date of birth\n");

        printf("Date : ");
        scanf("%d", &persons[j].date);

        while (persons[j].date < 1 | persons[j].date > 31)
        {
            printf("Invalid Input\n");
            printf("Enter again\n");
            printf("Date : ");
            scanf("%d", &persons[j].date);
        }

        printf("Month : ");
        scanf("%d", &persons[j].month);

        while (persons[j].month < 1 | persons[j].month > 12)
        {
            printf("Invalid Input\n");
            printf("Enter again\n");
            printf("Month : ");
            scanf("%d", &persons[j].month);
        }

        printf("Year : ");
        scanf("%d", &persons[j].year);

        while (persons[j].year < 1000 | persons[j].month > 2023)
        {
            printf("Invalid Input\n");
            printf("Enter again\n");
            printf("Year : ");
            scanf("%d", &persons[j].year);
        }


        printf("\nDetails for this person completed\n \n");

        j++;
    }

    j = 0;


    printf("%s", persons[0].name);


    printf("Details stored\n");


    while (j<n)
    {

        printf("For person %d", j);
        print(persons[j]);
        j++;
    }


    return 0;
}
