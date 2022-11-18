/*
Name : Divya Raj
Roll : 21MT10017
Dept : Metallurgy
Package : CodeBlocks
*/

#include<stdio.h>
#define MAX 50

//structure named student containing first name,
//last name, gender and marks secured in exam of each student
typedef struct student
{
    char fname[20];
    char lname[20];
    char gender[5];
    float marks; 
} student;

//function  to find and print the best girl
//student (one with highest marks) in the class.
void best_girl_student(student s[], int n){
    float max=0;
    int j;
    for(int i=0;i<n; i++){
        if((s[i].gender[0] == 'g') && (s[i].marks > max)){
                j = i;
                max = s[i].marks;
        }
    }
    printf("\nBest girl student: %s %s\n", s[j].fname, s[j].lname);
}

int main(){
    int n, j;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    struct student s[MAX];
    printf("Enter the student details:\n");

    //taking input from user
    for(int i=0; i<n; i++){
        scanf("%s", s[i].fname);
        scanf("%s", s[i].lname);
        scanf("%s", s[i].gender);
        scanf("%f", &s[i].marks);
    }

    //printing the input taken from the user.
    printf("\nPrinting the student records..\n\n");
    for(int i=0; i<n; i++){
        printf("%s %s %s %.2f\n", s[i].fname, s[i].lname, s[i].gender, s[i].marks);
    }
    //best_girl_student function called to print
    //the name of girl who scored highest in the class
    best_girl_student(s, n);
    return 0;
}
