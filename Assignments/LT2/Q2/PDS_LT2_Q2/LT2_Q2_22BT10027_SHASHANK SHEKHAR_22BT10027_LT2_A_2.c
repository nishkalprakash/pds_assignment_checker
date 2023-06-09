/*
Name - Shashank Shekhar
Roll - 22BT10027
Sect. - 2
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,y;
    struct record *stud;
    printf("Enter the number of records to be stored \n");
    scanf("%d",&n);

    if(n>100)
    {
        printf("Invalid value of n");
    }
    stud = (struct record *)malloc(n * sizeof(struct record));
    printf("Enter the records\n");
    for (int i = 0; i < n; ++i)
        {
            printf("Enter rollno , branch and dob\n");
            scanf("%s %s", (stud + i)->rollNo, (stud + i)->branch);
            printf("Enter dob in dd mm yyyy");
            scanf("%d %d %d",&(stud+i)->dob->dd,&(stud+i)->dob->mm,&(stud+i)->dob->yy);
        }
        printf("Enter the year\n");
        y = scanf("%d",&y);
        for(int i=0;i<n;i++)
        {
            if((stud+i).dob.yy<y)
                printf("deleted record: %s %s %d/%d/%d",(stud+i).rollNo,(stud+i).branch,(stud+i).dob.dd,(stud+i).dob.mm,(stud+i).dob.yy)
        }
}
struct record
{
    char branch[2];
    char rollNo[10];
    struct dateOfBirth
    {
        int dd;
        int mm;
        int yy;
    } dob; /*created structure varoable DOB*/
};
