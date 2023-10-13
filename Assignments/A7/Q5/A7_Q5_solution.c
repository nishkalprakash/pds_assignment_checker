/*
Write a C program to read the roll number (integer), age (integer) and marks of 20 students
admitted to a department. Generate random roll numbers in the range [1000,2000], age in
the range [15 to 25] and marks in the range [0,100] and populate the respective arrays..
Please use three one dimensional arrays for storing roll number, age, and mark.
a. Display the roll number, ages, and marks of all students having
the same age.
Example display:
Roll: 1025 Age: 20 Mark:83
Roll: 3021 Age:20 Mark:45
. . . . . . . . . . . . . . .
Roll 2450 Age:21 Mark:47
Roll 1975 Age 21: Mark:59
b. Display the roll number, ages, and marks of all students having
identical marks.
Example display:
Roll: 1027 Age: 23 Mark:85
Roll: 3025 Age:25 Mark:85
. . . . . . . . .. . . . . . . . . . . . . . .
Roll 2459 Age:21 Mark:77
Roll 1990 Age:23 Mark:77
c. Sort the students according to their roll numbers and display the
details nicely formatted.
Roll: 1027 Age: 23 Mark:85
Roll 1990 Age:23 Mark:77
. . . . . . . . .. . . . . . . . . . . . . . .
Roll 2459 Age:21 Mark:77
Roll: 3025 Age:25 Mark:85


*/

// Code Creator: NP (nishkal@iitkgp.ac.in)
// Roll: 19CS91R05
#include <stdio.h>
#include <stdlib.h>
void sort(int roll[],int age[],int mark[]){
    // use bubble sort to sort by roll number
    int i, j, temp;
    for (i=0;i<20;i++)
    {
        for (j=0;j<20-i-1;j++)
        {
            if (roll[j]>roll[j+1])
            {
                temp = roll[j];
                roll[j] = roll[j+1];
                roll[j+1] = temp;
                temp = age[j];
                age[j] = age[j+1];
                age[j+1] = temp;
                temp = mark[j];
                mark[j] = mark[j+1];
                mark[j+1] = temp;
            }
        }
    }
}
void display(int roll[],int age[],int mark[],int visited[]){
    int i;
    for (i=0;i<20;i++)
    {
        if (visited[i])
        {
            printf("Roll: %d\tAge: %d\t\tMark: %d\n", roll[i], age[i], mark[i]);
        }
    }
}
void same(int roll[], int age[], int mark[], int visited[])
{
    int i,j;
    // reset visited
    for (i=0;i<20;i++)
    {
        visited[i] = 0;
    }
    for (i=0;i<20;i++)
    {
        // visited[i] = 0;
        for (j=i+1;j<20;j++)
        {
            if (!visited[j] && age[i]==age[j])
            {

                visited[j] = 1;
                visited[i] = 1;
                // printf("Roll: %d\tAge: %d\tMark: %d\n", roll[j], age[j], mark[j]);
            }
        }
    }
    // return visited;
}
int main()
{
    int roll[20], age[20], mark[20],visited[20];
    int i, j, temp;
    for (i = 0; i < 20; i++)
    {
        roll[i] = rand() % 1000 + 1000;
        age[i] = rand() % 11 + 15;
        mark[i] = rand() % 101;
    }
    printf("Roll\tAge\tMark\n");
    for (i = 0; i < 20; i++)
    {
        printf("%d\t%d\t%d\n", roll[i], age[i], mark[i]);
    }
    printf("\n\n");
    // check for students having same age
    sort(age,roll,mark);
    printf("Students having same age\n");
    same(roll, age, mark,visited);
    display(roll,age,mark,visited);
    printf("\n\n");
    // check for students having same marks
    sort(mark,roll,age);
    printf("Students having same marks\n");
    same(roll, mark, age,visited);
    display(roll,age,mark,visited);
    printf("\n\n");
    // sort by roll number
    sort(roll,age,mark);
    printf("Sorted by roll number\n");
    for (i = 0; i < 20; i++)
    {
        printf("Roll: %d\tAge: %d\t\tMark: %d\n", roll[i], age[i], mark[i]);
    }

}