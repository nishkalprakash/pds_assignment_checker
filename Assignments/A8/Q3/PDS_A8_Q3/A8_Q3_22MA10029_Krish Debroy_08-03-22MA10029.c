#include <stdio.h>

typedef struct
{
    char RollNo[10];
    float marks[3];
    float total;
} Student;

int main()
{
    int n ;
    printf("Enter the number of students : \n");
    scanf("%d",&n);
    Student *Record = (Student *)malloc(n*sizeof(Student));

    for(int i=0;i<n;i++)
    {
        printf("\nEnter data for student %d :",(i+1));
        scanf("%s %f %f %f",(Record[i]).RollNo,&((Record[i]).marks[0]),&((Record[i]).marks[1]),&((Record[i]).marks[2]));
        Record[i].total=0;
        for(int j=0;j<3;j++)
        {
            Record[i].total+= Record[i].marks[j];
        }
    }

    printf("\n\n\nStudent Records:");
    for(int k=0;k<n;k++)
    {
        printf("\n\nStudent %d:",(k+1));
        printf("\nRoll No: %s",Record[k].RollNo);
        printf("\nMarks: %.2f %.2f %.2f",((Record[k]).marks[0]),((Record[k]).marks[1]),((Record[k]).marks[2]));
        printf("\nTotal: %.2f",Record[k].total);
    }

    Student temp;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            if(Record[j].total<Record[j+1].total)
                {
                    temp=Record[j];
                    Record[j] = Record[j+1];
                    Record[j+1]=temp;
                }
        }
    }



    printf("\n\n\nSorted Student Records:");
    for(int k=0;k<n;k++)
    {
        printf("\n\nStudent %d:",(k+1));
        printf("\nRoll No: %s",Record[k].RollNo);
        printf("\nMarks: %.2f %.2f %.2f",((Record[k]).marks[0]),((Record[k]).marks[1]),((Record[k]).marks[2]));
        printf("\nTotal: %.2f",Record[k].total);
    }



    return 0;
}
