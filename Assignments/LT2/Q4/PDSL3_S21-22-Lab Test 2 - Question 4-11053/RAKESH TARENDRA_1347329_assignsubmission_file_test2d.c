/*
RAKESH TARENDRA
21MT30031
*/
#include<stdio.h>
#include<string.h>
#define MAX 100
struct student
{
    char name_of_student[20],gender_of_student[4];
    float marks;
}list[MAX];
int n;
char b[3]="boy";
void input()
{
    int i;
    printf("Enter the student details:\n");
    for(i=0;i<n;i++)
    {
        printf("Enter details of student %d(name,gender,marks):- ",i+1);
        scanf("%s%s%f",list[i].name_of_student,list[i].gender_of_student,&list[i].marks);
    }
}
void list_print()
{
    printf("\nPrinting the student records:\n\n");
    for(int i=0;i<n;i++) printf("%s      %s      %f\n\n",list[i].name_of_student,list[i].gender_of_student,list[i].marks);
}
void best_student_girl()
{
    int i,index_with_highest_girl_marks;
    float temp_marks;
    for(i=0; i<n; i++)
    {
        if(strcmp(list[i].gender_of_student,b)==0) continue;
        else
        {
            temp_marks=list[i].marks;
            break;
        }
    }
    for(i=0; i<n; i++)
    {
        if(strcmp(list[i].gender_of_student,b)==0) continue;
        if(temp_marks<=list[i].marks)
        {
            temp_marks=list[i].marks;
            index_with_highest_girl_marks=i;
        }
    }
    printf("Best girl student: %s",list[index_with_highest_girl_marks].name_of_student);
}
int main()
{
    int i;
    printf("Enter the number of students:- ");
    scanf("%d",&n);
    input();
    list_print();
    best_student_girl();
    return 0;
}
