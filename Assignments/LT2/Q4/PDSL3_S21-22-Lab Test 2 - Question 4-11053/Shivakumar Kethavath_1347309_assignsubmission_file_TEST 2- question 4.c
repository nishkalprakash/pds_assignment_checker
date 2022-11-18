/* kethavath shivakumar
 21MI31013 */
 #include <stdio.h>

int MAX = 100;

// definition of struct
typedef struct student
{
    char name[100];
    char gender[10];
    float marks;

} student;

// function prototypes
void printArr(student arr[], int k);
void bestGirl(student arr[], int k);
int checkGirl(student person);

// driver program
int main()
{
    int k;
    student StudArr[MAX];
    printf("Enter the number of students: ");
    scanf("%d", &k);

    // populating the array
    for (int i = 0; i < k; i++)
    {
        printf("STUDENT %d\n", i + 1);
        printf("NAME: ");
        scanf("%s", StudArr[i].name);
        printf("GENDER: ");
        scanf("%s", StudArr[i].gender);
        printf("MARKS: ");
        scanf("%f", &StudArr[i].marks);
        printf("\n");
    }

    // printing results
    printArr(StudArr, k);
    // printing best girl
    bestGirl(StudArr, k);
    printf("\n");

    return 0;
}

void printArr(student arr[], int k)
{
    printf("\nSTUDENT \n");
    for (int i = 0; i < k; i++)
    {
        printf("STUDENT %d\n", i + 1);
        printf("NAME: %s\n", arr[i].name);
        printf("GENDER: %s\n", arr[i].gender);
        printf("MARKS: %f\n\n", arr[i].marks);
    }
}

void bestGirl(student arr[], int k)
{
    int index;
    // finding first girl in the array to initialise the index variable
    for (int i = 0; i < k; i++)
    {
        if (checkGirl(arr[i]) == 1)
        {
            index = i;
            break; // when a girl is found break from the for loop
        }
    }

    for (int i = 0; i < k; i++)
    {
        if (arr[i].marks > arr[index].marks)
        {
            if (checkGirl(arr[i]) == 1)
            {
                index = i;
            }
        }
    }

    //  best girl student printed
    printf("\nThe best girl student: %s", arr[index].name);
}

// function to check the sutdent (girl or not)
int checkGirl(student people)
{

    if ((people.gender[0] == 'g' || people.gender[0] == 'G') && (people.gender[1] == 'i' || people.gender[1] == 'I') && (people.gender[2] == 'r' || people.gender[2] == 'R') && (people.gender[3] == 'l' || people.gender[3] == 'L'))
        return 1;
    else
        return 0;
}
