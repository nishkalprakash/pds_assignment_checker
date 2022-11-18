
#include <stdio.h>
#define MAX 10
struct Student //defining structure
{
   char name[50];
   char gender[5];
   float mark;
};

void main()
{

    struct Student stud[MAX];
    int n;
    printf("Enter the number of students: ");
    scanf("%d",&n);
    printf("Enter the student details:\n");
    int index = -1;
    for(int i=0;i<n;i++) //taking entries of name,marks and gender.
    {
        char firstName[25],secondName[25],gender[5];
        scanf("%s %s %s",firstName,secondName,gender);

        float mark;
        scanf("%f",&mark);
        stud[i].mark = mark;

        int k=0,j=0;
        while (firstName[j] != '\0')
        {
            stud[i].name[k++] = firstName[j++];
        }
        stud[i].name[k++] = ' ';
        j = 0;
        while (secondName[j] != '\0')
        {
            stud[i].name[k++] = secondName[j++];
        }
        stud[i].name[k++] = '\0';
        j = 0;k = 0;
        while (gender[j] != '\0')
        {
            stud[i].gender[k++] = gender[j++];
        }
        stud[i].gender[k++] = '\0';

        if(stud[i].gender[3] != '\0'  && (index == -1 ||  mark > stud[index].mark))
        {
            index = i;
        }
    }
         printf("\n\nPrinting the student records..\n\n");
       for(int i=0;i<n;i++)
    {
        printf("%s %s %f\n",stud[i].name,stud[i].gender,stud[i].mark);
    }
    printf("\nBest girl student: %s",stud[index].name);
    getch();
}

