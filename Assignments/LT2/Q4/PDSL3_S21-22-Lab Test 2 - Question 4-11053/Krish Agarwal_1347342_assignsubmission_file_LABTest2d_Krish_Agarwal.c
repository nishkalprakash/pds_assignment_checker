/*
Name- Krish Agarwal
Roll No.- 21NA10018
Department- Ocean Engineering and Naval Architecture
Section- 3
IDE-VS code
*/
#include <stdio.h>
#define MAX 1000
//Declaring structure 
struct Student
{
    char name[100];
    char gender[10];
    float marks;
};

void read(int n, struct Student grp[])//To accept data from user
{
    printf("Enter the student details :\n");
    for (int i = 0; i < n; i++)
    {
        printf("\nFor student %d:-\n", i + 1);
        printf("Enter name: ");
        scanf("%[^\n]s", grp[i].name);

        printf("Gender : ");
        scanf("%s", grp[i].gender);

        printf("Marks : ");
        scanf("%f", &grp[i].marks);

        getchar();
    }
}

void grpPrint(int n, struct Student grp[])//Displaying the records
{
    printf("\nPrinting the student records..\n\n");
    for (int i = 0; i < n; i++)
    {
        printf("%s %s - %0.2f\n", grp[i].name, grp[i].gender, grp[i].marks);
    }
}

void findbest(int n, struct Student grp[])//Finding the best girl
{
    struct Student best;
    best.marks = -999999999999;
    //inialising best.gender[] as "girl" to compare the gender and find girl 
    best.gender[0] = 'g';
    best.gender[1] = 'i';
    best.gender[2] = 'r';
    best.gender[3] = 'l';
    best.gender[4] = '\0';

    for (int i = 0; i < n; i++)
    {
        //searching for best girl according to marks
        if (best.gender[0] == grp[i].gender[0] && best.marks < grp[i].marks)
        {
            best = grp[i];
        }
    }
    printf("\nBest girl student: %s\n", best.name);//displaying her details
}

int main()
{
    int n;
    struct Student grp[MAX];
    printf("Enter the number of students: ");//Taking required inputs
    scanf("%d", &n);
    getchar();

    read(n, grp);//Calling read() to accept data
    grpPrint(n, grp);//Calling grpPrint() to display data
    findbest(n, grp);//Calling findbest() to get best girl

    return 0;
}