
/*
Name - Krishna Paikine
Roll no - 22EE10036
Section - 2
Set - B
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct Person{
    char *name[30];
    char *passport_no[10];
    char *nationality[15];
    char *dob[10];
}person;

void read(person *p, int n)
{
    int i;
    printf("Enter the number of persons :\n");
    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {
        printf("Enter the name of the Person %d\n", i+1);
        scanf("%s", p[i].name);
        printf("Enter the passport number of the Person %d\n", i+1);
        scanf("%s", p[i].passport_no);
        printf("Enter the nationality of the Person %d\n", i+1);
        scanf("%s", p[i].nationality);
        printf("Enter the DOB of the Person %d\n", i+1);
        scanf("%s", p[i].dob);
    }

}

void print(person *p, int n)
{
    int i;
    for(i=0; i<n; i++)
    {
        printf("%s %s %s", p[i].name, p[i].passport_no, p[i].nationality, p[i].dob);
    }

}

int main()
{
    int i, n;
    person *p = (char *)malloc(n*sizeof(char));

    read(p, n);

    print(p, n);
    return 0;




}

