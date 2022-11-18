// NAME: SWARNAVA DAS
// ROLL: 21NA10037
// DEPARTMENT: OCEAN ENGINEERING AND NAVAL ARCHITECTURE
// PACKAGE: VISUAL STUDIO CODE
// ASSIGNMENT CLASS:5

#include <stdio.h>
#define MAX 50
struct Student
{
    char name[30];
    char gender[4];
    float marks;
};

int main()
{
    int n, i;
    struct Student arr[MAX]; // my max is 50

    printf("enter the number of students\n");
    scanf("%d", &n);
    printf("enter the details\n");
    for (i = 0; i < n; i++)
    {
        printf("enter the name of the student %d\n",i+1);
        scanf("%s", arr[i].name);getchar();
        printf("enter the gender of the student %d\n",i+1);
        scanf("%s", arr[i].gender);getchar();
        printf("enter the marks of the student %d\n",i+1);
        scanf("%f", arr[i].marks);
    }

for (i = 0; i < n; i++)
    {
        printf(" %s\t",arr[i].name);
        
        printf(" %s\t",arr[i].gender);
        
        printf(" %f\t",arr[i].marks);
        
    }


    return 0;
}
