// Name : Krishna Chaudhari
// Roll.: 22MT10012
//Assingment 8, Q-3

#include<stdio.h>

struct student
{
    char roll[10];
    float marks[3];
    float total;
};


int main()
{

    int n;
    printf("Enter the number of students :");
    scanf("%d",&n);
    struct student data[n];

    for(int i=0; i<n; i++)
    {
        printf("Enter the Roll number:");
        scanf("%s",data[i].roll);
        printf("\nEnter the marks :");

        scanf("%f",&(data[i].marks));
        scanf("%f",&(data[i].marks));
        scanf("%f",&(data[i].marks));
    }
    printf("%d",data[0].marks[0]);
    for(int i=0;i<n;i++){
        printf("\nStudent %d",i+1);
        printf("\nRoll number : %s",data[i].roll);
        printf("\nMarks :");
        for(int m=0;m<3;m++){
            printf("%d ",data[i].marks[m]);
            (data[i].total)+=data[i].marks[m];
        }
       printf("total: %d",data[i].total);
    }
    return 0;
}
