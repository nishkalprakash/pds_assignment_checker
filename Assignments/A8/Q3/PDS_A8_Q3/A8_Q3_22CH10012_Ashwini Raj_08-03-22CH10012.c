
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//defining structure to store records
typedef struct
{
    char rollno[10];
    float marks[3];
    float total;
} student;
//creating an array
student *sort(student *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (arr[i].total < arr[j].total)
            {
                student copy;
                copy = arr[i];
                arr[i] = arr[j];
                arr[j] = copy;
            }
        }
    }
    return arr;
}

int main()
{   //inputing number of students
    int n;
    scanf("%d", &n);
    student *class_list;
    class_list = (student *)malloc(n * sizeof(student));
    for (int i = 0; i < n; i++)
    {
        char s[10];
        float a, b, c;
        scanf("%s%f%f%f", &s, &a, &b, &c);
        strcpy(class_list[i].rollno, s);
        class_list[i].marks[0] = a;
        class_list[i].marks[1] = b;
        class_list[i].marks[2] = c;
        class_list[i].total = a + b + c;
    }
    //normal order as entered by user
    printf("Student Records:\n");
    for (int i = 0; i < n; i++)
    {
        printf("Roll no: %s\nMarks: %0.2f  %0.2f  %0.2f\nTotal: %0.2f\n", class_list[i].rollno, class_list[i].marks[0], class_list[i].marks[1], class_list[i].marks[2], class_list[i].total);
    }
    //printing after sorting of data
    class_list = sort(class_list, n);
    printf("\nStudent Records(After Sorting):\n\n");
    for (int i = 0; i < n; i++)
    {
        printf("Roll no: %s\nMarks: %0.2f  %0.2f  %0.2f\nTotal: %0.2f\n", class_list[i].rollno, class_list[i].marks[0], class_list[i].marks[1], class_list[i].marks[2], class_list[i].total);
    }
}
