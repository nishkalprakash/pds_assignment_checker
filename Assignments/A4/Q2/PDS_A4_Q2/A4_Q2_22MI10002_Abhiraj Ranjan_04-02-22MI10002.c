/*
Section 2
Roll No. : 22MI10002
Name: Abhiraj Ranjan
Assignment No. : 1
Topic :Marks and Grades of students
*/
#include<stdio.h>
int main()
{
    int n,i,attendence,ct,midsem,endsem,count;
    float total_marks;
    printf("Enter the number of students: ");
    scanf("%d",&n);
    i=1;
    while(i<=n)
    {
        printf("\n\nEnter the marks for student %d:\n",i);
        {
            printf("Attendence[40]: ");
            scanf("%d",&attendence);
           while (attendence<0||attendence>40)//Repeats the iteration on wrong input.
            {
                printf("Invalid Input. Retry\n");
                printf("Attendence[40]: ");
                scanf("%d",&attendence);

            }
            printf("CT[20]: ");
            scanf("%d",&ct);
            while (ct<0||ct>20)//Repeats the iteration on wrong input.
            {
                printf("Invalid Input. Retry\n");
                 printf("CT[20]: ");
                 scanf("%d",&ct);
            }
            printf("Midsem[60]: ");
            scanf("%d",&midsem);
            while (midsem<0||midsem>60)//Repeats the iteration on wrong input.
            {
                printf("Invalid Input. Retry\n");
                printf("Midsem[60]: ");
            scanf("%d",&midsem);
            }
            printf("Endsem[100]: ");
            scanf("%d",&endsem);
            while (endsem<0||endsem>100)//Repeats the iteration on wrong input.
            {
                printf("Invalid Input. Retry\n");
                printf("Endsem[100]: ");
            scanf("%d",&endsem);
            }
            printf("\n\nStudent %d: \n",i);
            total_marks=(attendence*10/40.0)+(ct*20/20.0)+(midsem*30/60.0)+(endsem*40/100.0);
            printf("Total Marks: %.2f\n",total_marks);
            if(total_marks>=90)//Grade Distribution

                printf("Grade: EX\n");

            else if(total_marks>=80&&total_marks<90)

                printf("Grade: A\n");

            else if(total_marks>=70&&total_marks<80)
                printf("Grade: B\n");
            else if(total_marks>=60&&total_marks<70)
                printf("Grade: C\n");
            else if(total_marks>=50&&total_marks<60)
                printf("Grade: D\n");
            else if(total_marks>=35&&total_marks<50)
                printf("Grade: P\n");
            else if(total_marks<35)
                printf("Grade: F\n");
        }
        i++;//updating i
    }
    return 0;
}
