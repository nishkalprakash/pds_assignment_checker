/*
Tushar Kumar
21CH30035
Chemical Engineering
Section 3
Code Blocks
Windows 10
*/
#include<stdio.h>
#define MAX 5
struct student{
    char  name[100000];
    char  gender[8];
    float marks;
};

int main(){
    int n;
    printf("Enter the number of students: ");
    scanf("%f",&n);
    struct student students[n];
    char name1[100000];
    char gender1[8];
    float marks1;


    for(int i=0;i<n;i++){
        printf("Enter the student details :\n");
        fgets(name1,20000, stdin);
        fgets(gender1,8, stdin);
        scanf("%f",&marks1);
        strcpy(students[i].name,"name1");
        strcpy(students[i].gender,"gender1");
        strcpy(students[i].marks,"marks1");
    }

    printf("\nPrinting the student records...\n\n");
    for(int i=0;i<n;i++){
        printf("%s %s - %f",students[i].name,students[i].gender,students[i].marks);
    }
    return 0;
}
