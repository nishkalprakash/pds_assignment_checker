/*Name:-Aditya Akolkar
 Roll no:-22EX10002
 Sec:-2
 Set:-B*/


#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct person
{
    char name[30];
    char passport_no [10];
    char nationality[15];
    char dob[10];
};


void read(struct person *a, int n)
{
    int i;
    for(i=0; i<n; i++)
    {
        scanf("%s", a[i].name);
        scanf("%s", a[i].passport_no);
        scanf("%s", a[i].nationality);
        scanf("%s", a[i].dob);
    }
}


void print(struct person *a, int i, int n)
{
    printf("%s\n", a[i].name);
    printf("%s\t", a[i].passport_no);
    printf("%s\t", a[i].nationality);
    printf("%s\t\n", a[i].dob);
}

void nation_check(struct person *a,int n)
{
    int i;
    int count = 0;

    for(i=0; i<n; i++)
    {
        if (a[i].nationality[0]== 'I'&& a[i].nationality[1]== 'n'&& a[i].nationality[2]== 'd'&& a[i].nationality[3]== 'i'&& a[i].nationality[5]== 'a')//Problem
        {
            printf("All persons having nationality as India:\n");
            print(a,i,n);
            printf("\n");
            count ++;
        }

    }
    if(count == 0)
        {
            printf("No persons have nationality as India");
        }
}


int main()
{
    int n, m, i, j;
    struct person *Persons;
    struct person *Persons2;
    struct person *Persons_merged;

    printf("n:");
    scanf("%d", &n);
    Persons = (struct person*)malloc(n*(sizeof(struct person)));
    read(Persons, n);

    printf("\nm:");
    scanf("%d", &m);
    Persons2 = (struct person*)malloc(m*(sizeof(struct person)));
    read(Persons2, m);




    Persons_merged = (struct person*)malloc((m+n)*(sizeof(struct person)));
    for(j=0; j<n; j++)
    {
        Persons_merged[j] = Persons[j];
    }
    for(i=n; i<m+n; i++)
    {
        Persons_merged[j] = Persons2[j];
    }


    for(i=0; i<n; i++)
    {
        printf("** Person %d **\n", i);
        print(Persons, i, n);
    }

    printf("\n\n");


    nation_check(Persons_merged,m+n);

    return 0;
}
