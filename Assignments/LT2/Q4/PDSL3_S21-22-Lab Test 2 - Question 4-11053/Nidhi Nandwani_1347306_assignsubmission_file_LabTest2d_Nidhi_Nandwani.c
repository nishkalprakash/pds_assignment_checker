/*
Name: Nidhi Nandwani
Roll no. : 21MA10036
Section: 3
Package: Visual Studio Code
*/
#include <stdio.h>
#define max 10000

typedef struct{
    char name[50];
    char gender[5];
    float marks;
}Student;

/*
void inputName(int index, Student a[])
{
    int ctr=0;
    
    for(int i=0; ctr == 2; i++)
    {
        scanf("%c", &a[index].name[i]);
        
        if(a[index].name[i]=='\0')
        ctr++;//counting the spaces twice to store both name and surname
    }
    
}*/

void printRecords(Student a[], int n)
{
    //function to print the records
    for(int i=0; i<n; i++)
    printf("%s %s %f\n", a[i].name, a[i].gender, a[i].marks);
}

int bestGirl(Student a[], int n)
{
    int maxmarksIndex =0;
    char g[4] = "girl";
    int ctr=0;
    for(int i=0; i<n; i++)
    {
        ctr =0;
        for(int j=0; j<3; j++)
        {
            if(a[i].gender[j] == g[j])//checking if the student is a girl
            ctr = 1;
            else
            ctr =0;
        }
        if(ctr == 1)
        {
            if(a[i].marks > a[maxmarksIndex].marks)
            maxmarksIndex = i;//storing the index of the student with greater marks
        }
    }
    return maxmarksIndex;
}

int main()
{
    Student a[max];
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    printf("Enter the student details: \n");//enter the first name, gender and marks of the student
    for(int i=0; i<n; i++)
    {
        //inputName(i,a);   
        scanf("% %s %f", a[i].name, a[i].gender, &a[i].marks);
    }

    printf("Printing the student records: \n");
    printRecords(a, n);

    int bestgirl = bestGirl(a, n);
    printf("Best girl Student: %s", a[bestgirl].name);

}