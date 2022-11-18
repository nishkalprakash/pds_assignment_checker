/*
Name: Indra Kumar Gupta
Roll: 21AE10043
Department: Aerospace Engineering
Package: CodeBlocks
Operating system: Windows
*/

//Lab Test 2 Question 4

#include <stdio.h>
#define MAX 100

struct Student
{
    char name[100];
    char gender[10];
    float marks;
} list[MAX];                      //declaring list of type student structure (global variable)

float input_studentlist(int a)       //function to take input from user
{
    int i;
    for(i=0; i<a; i++)
    {
        getchar();                       //to skip the empty line
        printf("Enter student's name : ");
        scanf("%[^\n]", list[i].name);   //to also store space between names

        printf("Enter student's gender (boy/girl): ");
        scanf("%s", list[i].gender);     //to store gender

        printf("Enter student's marks: ");
        scanf("%f", &list[i].marks);   //to store marks


    }
}

void output_studentlist(int a)   //to print all the student list
{
    int i;
    printf("\nPrinting the student records.. \n");
    for(i=0; i<a; i++)
    {
        printf("%s %s - %f\n", list[i].name, list[i].gender, list[i].marks);

    }
}

void check_girltopper(int a)       // to check highest scoring girl
{
    int i, max_mark=0, index=-1;
    for(i=0; i<a; i++)
    {

        if(list[i].gender[0]=='g'&&list[i].gender[1]=='i'&&list[i].gender[2]=='r'&&list[i].gender[3]=='l'&&list[i].gender[4]=='\0')
        {

            if(list[i].marks>max_mark)
            {
                max_mark=list[i].marks;                              //to store max marks and respective index
                index=i;
            }
        }

    }

    if(index==-1)
    {
        printf("\nThere is no girl in the list\n");
    }
    else
    {
        printf("\nBest girl student: %s", list[index].name);
    }


}



int main()
{

    int n,i;
    printf("Enter no. of students: ");
    scanf("%d", &n);                            //to store no of students

    input_studentlist(n);                       //calling function to take input
    output_studentlist(n);                      //calling function to print the results
    check_girltopper(n);                        //calling function to check highest scoring girl




    return 0;
}

