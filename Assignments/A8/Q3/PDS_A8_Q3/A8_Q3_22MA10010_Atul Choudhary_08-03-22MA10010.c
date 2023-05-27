
#include<stdio.h>

struct student
{
    char rollno[10];
    float marks[3];
    float total;
};


int main(){
    int i,j,n;
    printf("How many record you want to add?");
    scanf("%d", &n);
    struct student stud[n];
    struct student s;
    for(i=0; i<n; i++)
    {
        printf("\nEnter record for student:: %d\n", i+1);
        printf("\nEnter roll-no: ");
        scanf("%s", &stud[i].rollno);
        stud[i].total =0;

        for(j=0;j<3;j++){
            printf("Enter marks %d: ", j+1);
            scanf("%f", &stud[i].marks[j]);
            stud[i].total=stud[i].total +stud[i].marks[j];

        }

        printf("------------------------------");
    }

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n; j++)
        {
            if(stud[i].total < stud[j].total)
            {
                s = stud[i];
                stud[i] = stud[j];
                stud[j] = s;
            }
        }
    }

    printf("\nrecords in descending order of total marks\n");

    printf("\n Rollno          Total marks ");
    for (i=0;i<n;i++)
    {
        printf("\n %s\t %.2f\t", stud[i].rollno, stud[i].total);

    }
    return 0;
}
