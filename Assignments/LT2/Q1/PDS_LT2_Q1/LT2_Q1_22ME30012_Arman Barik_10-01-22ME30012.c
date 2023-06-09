# include <stdio.h>
# include <string.h>
# include <stdlib.h>
typedef struct dob
{
    int dd;// date must be in between 1-31 for respective months
    int mm;// months must be between 1-12;
    int yyyy;
} dob;
typedef struct Person
{
    char name[30];
    char passport_no[10];
    char nationality[15];
    dob* DOB;
} Person;
void read(Person* X)
{
    char _name[30];
    fgets((_name),30,stdin);
    strcpy((X->name),_name);
    scanf("%s", X->passport_no);
    scanf("%s", X->nationality);
    scanf("%d",&(X->DOB->dd));
    scanf("-%d",&(X->DOB->mm));
    scanf("-%d",&(X->DOB->yyyy));
}
void print(Person* X)
{
    printf("%s\n", X->passport_no);
    printf("%s ", X->passport_no);
    printf("%s ", X->nationality);
    printf("%d-",X->DOB->dd);
    printf("%d-",X->DOB->mm);
    printf("%d",X->DOB->yyyy);
}

int main()
{
    int n,m;
    scanf("%d",&n);
    Person* Persons;
    Persons=(Person*)calloc(n,sizeof(Person));
    for(int i=0;i<n;i++)
    {
        read(&Persons[i]);
    }
    for(int i=0;i<n;i++)
    {
        printf("** Person %d **",i);
        print(&Persons[i]);
        printf("\n");
    }

    scanf("%d",&m);
    Person* Persons2;
    Persons2=(Person*)calloc(n,sizeof(Person));
    for(int i=0;i<n;i++)
    {
        read(&Persons2[i]);
    }






    free(Persons);
    free(Persons2);
    return 0;
}
