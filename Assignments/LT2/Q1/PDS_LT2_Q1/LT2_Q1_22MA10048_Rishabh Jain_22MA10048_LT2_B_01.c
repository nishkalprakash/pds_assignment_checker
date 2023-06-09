#include <stdio.h>
#include <string.h>
/*  Section-2
    Name-Rishabh Jain
    Roll no-22MA10048
*/

typedef struct DOB{
    int dd;
    int mm;
    int yyyy;
}Dob;

typedef struct PERSON{
    char name[30];
    char passport_no[11];
    char nationality[15];
    Dob dob;
}Person;

int main()
{
    int n,m,count=0;
    Person *Persons,*Persons2,*Persons_merged;
    scanf("%d",&n);
    Persons = (Person*)malloc(n*sizeof(Person));
    for(int i=0;i<n;i++)
    {
        read(Persons[i]);
    }
    scanf("%d",&m);
    Persons2 = (Person*)malloc(m*sizeof(Person));
    for(int i=0;i<m;i++)
    {
        read(Persons2[i]);
    }
    Persons_merged = (Person*)malloc((n+m)*sizeof(Person));
    for(int i=0;i<n;i++)
    {
        printf("** Person %d **",i);
        print(Persons[i]);
    }
    for(int i=0;i<n;i++)
    {
        Persons_merged[i]=Persons[i];
    }
    for(int i=n;i<n+m;i++)
    {
        Persons_merged[i]=Persons2[i-n];
    }

    for(int i=0;i<n+m;i++)
    {
        if(Persons_merged[i].nationality=="India")
        {
            count++;
        }
    }
    if(count==0)
    {
        printf("No persons having nationality as India");
    }
    else
    {
        printf("All persons having nationality as India");
        for(int i=0;i<n+m;i++)
        {
        if(Persons_merged[i].nationality=="India")
            {
                printf("** Person %d **",i);
                print(Persons_merged[i]);
                count++;
            }
        }
    }
}

void read(Person abc)
{
    char ch;
    int c = 0;
    do
    {
    ch = getchar();
    abc.name[c] = ch;
    c++;
    }
    while (ch != '\n');
    c--;
    abc.name[c] = '\0';

    scanf("%s",abc.passport_no);
    scanf("%s",abc.nationality);
    scanf("%d-%d-%d",&abc.dob.dd,&abc.dob.mm,&abc.dob.yyyy);
}

void print(Person abc)
{
    printf("%s\n",abc.name);
    printf("%s %s %d-%d-%d\n",abc.passport_no,abc.nationality,abc.dob.dd,abc.dob.mm,abc.dob.yyyy);
}










