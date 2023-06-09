/*NAME:ENUGANTI YASHASWINI
 ROLL:22NA10011
 */

#include<stdio.h>
#include<string.h>
struct person{
    char name[30];
    char passport_no[10];
    char nationality[15];
    struct dob{
        int dd;
        int mm;
        int yyyy;
        }dob;
}person;
void read(struct person person)
{
    printf("Enter the name of person:");
    scanf("%s", &person.name);
    printf("\nEnter the passport no:");
    scanf("%s",&person.passport_no);
    printf("\nEnter the nationality of the person-");
    scanf("%s",&person.nationality);
    printf("\nEnter the date of birth of the person in the format dd-mm-yyyy");
    scanf("%d %d %d",&person.dob.dd,&person.dob.mm,&person.dob.yyyy);
    //return person;
}
void print(struct person person)
{
    printf("\nDetails of the person");
    printf("%s \n", person.name);
    printf("%s \n",person.passport_no);
    printf("%s \n",person.nationality);
    printf("%d-%d-%d",person.dob.dd,person.dob.mm,person.dob.yyyy);
}
int main()
{
    int n,i,m,j;
    printf("Enter the value of n:");
    scanf("%d",&n);
    struct person persons[n];


    for(i=0;i<n;i++)
    {
    read(persons[i]);
    }
    for(i=0;i<n;i++)
    {
    printf("**Person %d**",i);
    print(persons[i]);
    }
    printf("Enter the value of m:");
    scanf("%d",&m);
    struct person persons2[m];
    for(j=0;j<n;j++)
    {
    read(persons2[j]);
    }

}

