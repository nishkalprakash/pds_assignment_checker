/*Name : Ashwini Raj
  Roll No : 22CH10012*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//defined a structure named person
typedef struct
{
    char name[31];
    char passport[11];
    char nationality[16];
    char dob[15];
} person;
//creating function read to input data
void read(person *ptr)
{
    fflush(stdin);
    printf("Enter Name: \n");
    scanf("%s", ptr->name);
    printf("Enter passport no: \n");
    scanf("%s", ptr->passport);
    printf("Enter Nationality: \n");
    scanf("%s", ptr->nationality);
    printf("Enter DOB: \n");
    scanf("%s", ptr->dob);
}
//printing function
void print(person *ptr)
{
    printf("%s\n%s %s %s\n", ptr->name, ptr->passport, ptr->nationality, ptr->dob);
}

int main()
{
    printf("Enter number of entries n: ");
    int n;
    //input n
    scanf("%d", &n);
    person *persons1 = (person *)malloc(n * sizeof(person));
    for (int i = 0; i < n; i++)
    {
        read(&persons1[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("** Person %d **\n", i);
        print(&persons1[i]);
    }
    printf("Enter number of entries m: ");
    int m;
    //input m
    scanf("%d", &m);
    person *persons2 = (person *)malloc(m * sizeof(person));
    for (int i = 0; i < m; i++)
    {
        read(&persons2[i]);
    }
    for (int i = 0; i < m; i++)
    {
        printf("** Person %d **\n", i);
        print(&persons2[i]);
    }
    person *personsmerged = (person *)malloc((m + n) * sizeof(person));
    for (int i = 0; i < m + n; i++)
    {
        if (i < n)
        {
            strcpy(personsmerged[i].name, persons1[i].name);
            strcpy(personsmerged[i].dob, persons1[i].dob);
            strcpy(personsmerged[i].passport, persons1[i].passport);
            strcpy(personsmerged[i].nationality, persons1[i].nationality);
        }
        else
        {
            strcpy(personsmerged[i].name, persons2[i - n].name);
            strcpy(personsmerged[i].dob, persons2[i - n].dob);
            strcpy(personsmerged[i].passport, persons2[i - n].passport);
            strcpy(personsmerged[i].nationality, persons2[i - n].nationality);
        }
    }
    for (int i = 0; i < m + n; i++)
    {
        if (strcasecmp(personsmerged[i].nationality, "INDIA") == 0)
        {
            printf("** Person %d **\n", i);
            print(&personsmerged[i]);
        }
    }
}

