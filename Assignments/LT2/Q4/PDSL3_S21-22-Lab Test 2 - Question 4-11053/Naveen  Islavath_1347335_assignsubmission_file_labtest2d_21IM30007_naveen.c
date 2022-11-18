#include <stdio.h>

int MAX = 100;

// struct definition
typedef struct student
{
    char name[100];
    char gender[10];
    float marks;

} student;

// function prototypes
void printArr(student arr[], int n);
void bestGirl(student arr[], int n);
int checkGirl(student person);

// driver program
int main()
{
    int n;
    student StudArr[MAX];
    printf("Enter the number of students: ");
    scanf("%d", &n);

    // populating the array
    for (int i = 0; i < n; i++)
    {
        printf("Student %d\n", i + 1);
        printf("Name: ");
        scanf("%s", StudArr[i].name);
        printf("Gender: ");
        scanf("%s", StudArr[i].gender);
        printf("Marks: ");
        scanf("%f", &StudArr[i].marks);
        printf("\n");
    }

    // printing the results
    printArr(StudArr, n);
    // printing the best girl
    bestGirl(StudArr, n);
    printf("\n");

    return 0;
}

void printArr(student arr[], int n)
{
    printf("\n\n*******Students of the class******\n");
    for (int i = 0; i < n; i++)
    {
        printf("Student %d\n", i + 1);
        printf("Name: %s\n", arr[i].name);
        printf("Gender: %s\n", arr[i].gender);
        printf("Marks: %f\n\n", arr[i].marks);
    }
}

void bestGirl(student arr[], int n)
{
    int index;
    // find first girl in array to initialise index variable
    for (int i = 0; i < n; i++)
    {
        if (checkGirl(arr[i]) == 1)
        {
            index = i;
            break; // when girl is find break from the for loop
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i].marks > arr[index].marks)
        {
            if (checkGirl(arr[i]) == 1)
            {
                index = i;
            }
        }
    }

    // printing the best girl student
    printf("\nThe best girl student: %s", arr[index].name);
}

// a function to check if the sutdent is a girl or not
int checkGirl(student person)
{

    if ((person.gender[0] == 'g' || person.gender[0] == 'G') && (person.gender[1] == 'i' || person.gender[1] == 'I') && (person.gender[2] == 'r' || person.gender[2] == 'R') && (person.gender[3] == 'l' || person.gender[3] == 'L'))
        return 1;
    else
        return 0;
}