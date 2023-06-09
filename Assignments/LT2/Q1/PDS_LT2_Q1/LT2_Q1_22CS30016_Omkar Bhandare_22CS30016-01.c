/*
Section 2
Roll No. - 22CS30016
Name - Omkar Vijay Bhandare
Problem No. - 01
Description - Management of Records
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct
{
    char name[30];
    char passport_no[10];
    char nationality[10];
    struct dob
    {
        int dd;
        int mm;
        int yyyy;
    } dob;
} data;


void stringinput(char *line)
{
    int c = 0;
    char ch;
    do
    {
        ch = getchar();
        line[c] = ch;
        c++;
    }
    while (ch != '\n');
    --c;
    line[c] = '\0';
}

void read(data *person)
{
    getchar();
    stringinput(person->name);
    scanf("%s", person->passport_no);
    scanf("%s", person->nationality);
    scanf("%d", &person->dob.dd);
    getchar();
    scanf("%d", &person->dob.mm);
    getchar();
    scanf("%d", &person->dob.yyyy);
}

void print(data *person)
{
    printf("%s\n", person->name);
    printf("%s  ", person->passport_no);
    printf("%s  ", person->nationality);
    printf("%d-", person->dob.dd);
    printf("%d-", person->dob.mm);
    printf("%d", person->dob.yyyy);
}

int main()
{

    //Declaration,Input,Printing Persons
    int n;
    scanf("%d", &n);
    data Persons[n];
    for(int i=0; i<n; i++)
    {
        read(&Persons[i]);
    }
    for(int i=0; i<n; i++)
    {
        printf("** Person %d **\n", i);
        print(&Persons[i]);
        printf("\n");
    }

    //Declaration,Input,Printing Persons2
    int m;
    scanf("%d", &m);
    data Persons2[m];
    for(int i=0; i<m; i++)
    {
        read(&Persons2[i]);
    }

    //Copying in Persons_merged
    data Persons_merged[m+n];
    for(int i=0; i<n; i++)
    {
        Persons_merged[i] = Persons[i];
    }
    for(int i=n, j=0; i<m+n; i++,j++)
    {
        Persons_merged[i] = Persons2[j];
    }

    //Printing All the datasets having nationality India
    printf("All persons having Nationality as India\n");
    int flag = 0;

    for(int i=0; i<m+n; i++)
    {
        if(strcmp(Persons_merged[i].nationality, "India")==0)
        {
            printf("** Person %d **\n", i);
            print(&Persons_merged[i]);
            flag ++;
        }
        printf("\n");
    }

    if(flag==0) printf("No persons having nationality as Indian");
    return 0;
}
