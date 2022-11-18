/*Name:- Shubhrashayak Sarkar;
Roll No:- 21NA30029
Package:- Visual Studio Code
Assignment class:- 6
*/
#include <stdio.h>
#define MAX 20 // Change here the maximum number of students allowed in the list

struct Students
{
    char name[21];
    char gender[5];
    float marks;
};

void PrintDetails(struct Students S[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%s %s %f\n", S[i].name, S[i].gender, S[i].marks); // prints the student details in a single line.
    }
}

int TopperGirl(struct Students S[], int n)
{
    float maxMarks = 0, temp = 0;
    int index = 0;
    for (int i = 0; i < n; i++)
    {
        if (S[i].gender[0] == 'g') // Checks if the given student is girl or not
        {
            temp = S[i].marks;
        }
        else
        {
            continue;
        }
        if (temp > maxMarks) // checks if the girl has obtained the maximum marks or not.
        {
            maxMarks = temp;
            index = i;
        }
    }
    return index;
}

int main()
{
    struct Students S[MAX];
    int n;
    printf("Enter the number of students\n");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) // This loops reads the details of each students
    {
        printf("Enter the name of the student %d\n", i + 1);
        scanf("%s", &S[i].name);
        printf("Enter the gender( 'boy' or 'girl' ) of the student %d\n", i + 1);
        scanf("%s", &S[i].gender);
        printf("Enter the marks of the student %d\n", i + 1);
        scanf("%f", &S[i].marks);
    }
    printf("Printing the student records\n");
    PrintDetails(S, n); // Prints the details of the students provided by the user.
    int i;
    i = TopperGirl(S, n);
    printf("The best girl student is %s and her marks is %f", S[i].name, S[i].marks);
    return 0;
}