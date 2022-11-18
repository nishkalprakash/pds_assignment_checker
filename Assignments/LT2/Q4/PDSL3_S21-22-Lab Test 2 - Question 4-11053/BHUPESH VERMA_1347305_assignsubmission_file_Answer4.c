#include <stdio.h>

struct Student
{
    char name[100];
    char gender[100];
    float marks;
};

int main()
{
    int n, count;
    char first[100], last[100], gender[100];
    float marks;
    printf("enter the number of students:");
    scanf("%d",&n);
    struct Student students[n];
    printf("enter the student derails:\n");
    count = n;
    while(count--)
    {
        scanf(" %s %s %s %f",first, last, gender, &marks);
        int i = 0;
        while(first[i]!='\0')
        {
            students[count].name[i] = first[i];
            i++;
        }
        students[count].name[i] = ' ';
        i++;
        int j=0;
        while(last[j]!='\0')
        {
            students[count].name[i] = last[j];
            i++;
            j++;
        }
        students[count].name[i] = '\0';
        i=0;
        while(gender[i]!='\0')
        {
            students[count].gender[i] = gender[i];
            i++;
        }
        students[count].gender[i] = '\0';
        students[count].marks = marks;
    }

    printf("\n\nprinting the student records..\n\n");
    count = n;
    while(count--){
        printf("%s %s %f\n", students[count].name, students[count].gender, students[count].marks);
    }

    int max = -1, max_wali = -1;
    for(int i=0; i<n; i++)
    {
        if(students[i].gender[0] = 'g'){
            if(max<students[i].marks){
                max = students[i].marks;
                max_wali = i;
            }
        }
    }
    if(max_wali!= - 1)
        printf("\n\nBest girl student: %s", students[max_wali].name);
    return 0;


}
