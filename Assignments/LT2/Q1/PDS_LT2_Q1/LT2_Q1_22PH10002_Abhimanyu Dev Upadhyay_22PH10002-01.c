/*
* Section 2
* Roll No : 22PH1002
* Name : Abhimanyu Dev Upadhyay
* Assignment No : 1
* Description : Records
*/

#include <stdio.h>
#include <stdlib.h>


typedef struct
{
    int dd;
    int mm;
    int yy;
} dob;
typedef struct
{
    //One larger than given to accomodate null
    char name[31];
    char passport_no[11];
    char nationality[16];
    dob DOB;

} Person;

void read(Person *p, int i)
{
    gets((p+i)->name);
    //Using scanf because these are continuous strings without spaces
    scanf("%s", (p+i)->passport_no);
    scanf("%s", (p+i)->nationality);
    scanf("%d%d%d", &(p+i)->DOB.dd,&(p+i)->DOB.mm,&(p+i)->DOB.yy);
    return;
}

void print(Person *p, int i)
{
    printf("\n\n**Person %d**\n", i);
    puts((p+i)->name);
    printf("%s %s %d-%d-%d",(p+i)->passport_no,(p+i)->nationality, (p+i)->DOB.dd,(p+i)->DOB.mm,(p+i)->DOB.yy);
    return;
}


int main()
{
    //Taking no of people
    int n,i;
    printf("Enter no of people: ");
    scanf("%d", &n);
    printf("\n");

    //Allocating memory to Persons
    Person *Persons;
    Persons = (int *)malloc(n*sizeof(Person));

    //Reading data of Persons
    for(i = 0; i < n; i++)
    {
        char c;
        scanf("%c", &c);
        read(Persons,i);
    }

    //Printing data of Persons
    for(i = 0; i < n; i++)
    {
        print(Persons,i);
    }

    //Taking data for Persons 2
    int m,j;
    printf("\n\nEnter no of people: ");
    scanf("%d", &m);
    printf("\n");

    Person *Persons2;
    Persons2 = (int *)malloc(m*sizeof(Person));

    for(j = 0; j < m; j++)
    {
        char c;
        scanf("%c", &c);
        read(Persons2,j);
    }

    //Allocating Persons_Merged
    Person *Persons_merged;
    Persons_merged = (int *)malloc((m+n)*sizeof(Person));

    //Copying data onto Persons_Merged
    for(i = 0; i < n; i++)
    {
        Persons_merged[i] = Persons[i];
    }
    for(j = 0; j < m; j++)
    {
        Persons_merged[n+j] = Persons2[j];
    }

    //Comparing
    char s[] = "India";
    int ctr = 0,k; // Using counter to check if there are any with nationality India
    for(k = 0; k < m+n; k++)
    {
        if(strcmp((Persons_merged+k)->nationality,s)==0)
        {
            ctr++;
        }
    }
    if(ctr == 0)
    {
        printf("\nNo person having nationality as India");
    }
    else
    {
        printf("\nAll person having Nationality as India");
        for(k = 0; k < m+n; k++)
        {
            if(strcmp((Persons_merged+k)->nationality,s)==0)
            {
                print(Persons_merged,k);
            }
        }
    }

    free(Persons);
    free(Persons2);
    free(Persons_merged);
    return 0;
}
