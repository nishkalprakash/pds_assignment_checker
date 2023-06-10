#include<stdio.h>
#include<stdlib.h>

typedef struct dob{
    int day;
    int month;
    int year;
}dob;

typedef struct student{
    char roll_no[10];
    char branch[3];
    dob dob_var;
}stud;

int main()
{
    int n;
    printf("Enter number of records to be entered : ");
    scanf("%d", &n);

    // for(int i = 1; i >0; i++)
    // {
        if(n<= 0 || n>100)
            printf("Invalid N");
        else
        {

            stud *student_;
            student_ = (stud*) malloc (n*sizeof(stud));

            for(int i = 0; i < n; i++)
            {
                scanf("%s", &student_[i].roll_no);
                scanf("%s", &student_[i].branch);
                scanf("%d/%d/%d", &student_[i].dob_var.day, &student_[i].dob_var.month, &student_[i].dob_var.year);
            }

            int y;
            printf("Enter a year in format YYYY : ");
            scanf("%d", &y);

            int count = 0;

            int arr[100];

            for(int i = 0; i < n; i++)
            {
                if(student_[i].dob_var.year<y)
                {
                    printf("Deleted Record : %s %s %d/%d/%d", student_[i].roll_no, student_[i].branch, student_[i].dob_var.day, student_[i].dob_var.month, student_[i].dob_var.year);
                    printf("\n");
                    arr[count] = i;
                    count++;
                }
            }

            printf("m = %d, n-m = %d", count, n-count);

            printf("\nRemaining Records : \n");
            if(n-count == 0)
            {
                printf("No records remaining");
            }

            else
                for(int i = 0; i < n; i++)
                {
                    for(int j = 0; j < count; j++)
                    {
                        if(i != arr[j])
                            printf("%s %s %d/%d/%d", student_[i].roll_no, student_[i].branch, student_[i].dob_var.day, student_[i].dob_var.month, student_[i].dob_var.year);
                            printf("\n");
                    }
                }


        }
    // }


    return 0;
}
