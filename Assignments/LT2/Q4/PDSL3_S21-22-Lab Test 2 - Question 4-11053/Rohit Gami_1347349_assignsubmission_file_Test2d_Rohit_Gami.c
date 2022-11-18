#include <stdio.h>
#define MAX 100

struct Student
{
    char name[30];
    char gender[5];
    float marks;
} array[MAX];

void enterData(struct Student list[], int n)
{
    printf("Enter the student details:\n");
    for (int i = 0; i < n; i++)
    {

        printf("Enter name:");
        // fflush(stdin);
        scanf("%s %s",&list[i].name,&list[i].name);
        printf("Enter gender:");
        scanf("%s", &list[i].gender);
        printf("Enter marks:");
        scanf("%f", &list[i].marks);
        printf("\n");
    }
}

void printData(struct Student list[], int n)
{
    printf("Printing the student records.....\n\n");

    for (int i = 0; i < n; i++)
    {
        printf("%s %s marks - %.2f\n", list[i].name, list[i].gender, list[i].marks);
    }
}

void findBestGirl(struct Student list[], int n)
{
    char girl[] ="girl";
    
    float max = 0;
    int maxIndex = -1;

    for (int i = 0; i < n; i++)
    {
        int k = 0;
        for (int j = 0; j < 4; j++)
        {
            if (list[i].gender[j] != girl[j])
                k = 1; // checking if the gender is girl
        }

        if (k == 0)
        {
            if (list[i].marks > max)
            {
                max = list[i].marks;
                maxIndex = i;
            } // storing the index of girl having max marks in maxIndex variable
        }
    }
    if(maxIndex== -1) 
    {
    printf("\nNo Girl student found\n");  // if no girl student found exit the program
    return;
    }


    printf("\nBest Girl Student:%s", list[maxIndex].name); // printing the girl student with highest marks
}
int main()
{
    int n;
    printf("Enter value of n:");
    scanf("%d", &n);

    // calling the functions
    enterData(array, n);
    printData(array, n);
    findBestGirl(array, n);

    return 0;
}