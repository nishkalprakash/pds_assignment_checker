//NAME: TEJAARKA PIRIDI

//ROLL NO: 21MT10036

// LABTEST 2

// QUESTION 2


#include <stdio.h>

int MAX = 100;

// struct definition

typedef struct student
{
    char name[50];

    char gender[20];

    float marks;

} student;

// function prototypes


void printArr(student arr[], int n);

void bestGirl(student arr[], int n);

int checkGirl(student person);


// MAIN FUNCTION(DRIVER PROGRAMME)

int main()

{
    int n;

    student StudArr[MAX];


    printf("Enter the total no of students: ");


    scanf("%d", &n);


    // giving the details of students

    for (int i = 0; i < n; i++)

    {
        //providing student names respectievely

        printf("Student %d\n", i + 1);


        printf("Name: ");

        scanf("%s", StudArr[i].name);

        //mentioning about gender of the respective student.


        printf("Gender: ");

        scanf("%s", StudArr[i].gender);

        //mentioning about the obtained marks of respective student.

        printf("Marks: ");

        scanf("%f", &StudArr[i].marks);

        printf("\n");
    }

    // printing the results from given information.

    printArr(StudArr, n);

    // printing the best girl ina new line.

    bestGirl(StudArr, n);

    printf("\n");


    return 0;
}

void printArr(student arr[], int n)
{

    //obtaining the details of the students.

    printf("\n\n^^^^^Students of the class^^^^^\n");

    for (int i = 0; i < n; i++)

    {
        printf("Student %d\n", i + 1);

        printf("Name of student: %s\n", arr[i].name);

        printf("Gender of student: %s\n", arr[i].gender);

        printf("Marks of the student: %f\n\n", arr[i].marks);

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

            break; // when girl is found break from the for loop

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

    // printing the best girl student among

    printf("\nThe best girl student: %s", arr[index].name);
}

// a function to check if the sutdent is a girl or not

 int checkGirl(student person)

{

    if
    ((person.gender[0] == 'g' || person.gender[0] == 'G') && (person.gender[1] == 'i' || person.gender[1] == 'I') && (person.gender[2] == 'r' || person.gender[2] == 'R') && (person.gender[3] == 'l' || person.gender[3] == 'L'))

        return 1;

    else
        return 0;
}
