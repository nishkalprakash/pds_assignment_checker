#include <stdio.h>



struct student {
    char firstName[50];
    char gender[20];
    int roll;
    float marks;
} s[5];

int main() {
    int i;
    //getting info of the students
    printf("Enter information of students:\n");

    // storing information
    for (i = 0; i < 5; ++i) {
        s[i].roll = i + 1;
        printf("\NO.%d student:\n", s[i].roll);
        printf("Enter first name: ");
        scanf("%s", s[i].firstName);
        printf("Enter marks: ");
        scanf("%f", &s[i].marks);
        printf("enter gender:");
        scanf("%s",s[i].gender);
    }
    printf("Displaying Information:\n\n");

    // displaying information
    for (i = 0; i < 5; ++i) {
        printf("printing the students records...");
        printf("\n %d.", i + 1);
        printf("%s",s[i].firstName);
        printf(": %.1f", s[i].marks);
        printf(": %s",s[i].gender);
        printf("\n");





    }
    return 0;
}
