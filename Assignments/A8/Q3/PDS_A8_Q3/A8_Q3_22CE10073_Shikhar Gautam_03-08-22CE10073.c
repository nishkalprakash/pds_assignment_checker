# include <stdio.h>
# include <stdlib.h>

    struct student{ // defining structure for student details

    char rollno[10];
    float marks[3];
    float total;

    };

int main(){

    int n; // declaring variable for no of student
    printf("Enter no of students : ");
    scanf("%d", &n); // taking input for no of student

    struct student s[n];// declaring structure array

    for(int i=0; i<n; i++){

            printf("Enter details for student %d", i+1);

            printf("Enter roll no. of student %d : ", i+1);
            scanf("%s", &s.rollno[i]); // taking input for student roll no

            printf("Enter marks for Student %d", i+1);
            scanf("%d", &s.marks[i]); // taking input for marks 1
            scanf("%d", &s.marks[i+1]); // taking input for marks 2
            scanf("%d", &s.marks[i+2]); // taking input for marks 3

            printf("Student roll no : %s", s.rollno[i]); // printing student roll no.
            printf("Total Marks for student %d : %d", i+1, s.marks[i]+s.marks[i+1]+s.marks[i+2]); // print total marks for student


    }


    return 0;
}
