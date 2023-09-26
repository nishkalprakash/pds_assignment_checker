/*
2.	Read the total  mark (Integer)  of a student in a  subject  out of 100. Display his/her grade in the subject.  Use the following Marks to Grade conversion table:
                     Mark>=90    Grade=EX
                     Mark>=80    Grade=A
                     Mark>=70    Grade=B
                     Mark>=60    Grade=C
                     Mark>=50    Grade=D
                     Mark>=35    Grade=P, 
                     Mark<35      Grade=F

*/

// Name: Nishkal Prakash
// Roll: 19CS91R05

#include <stdio.h>
int main()
{
    // Variable to store the marks
    int marks;

    // Input from user
    printf("Enter the marks: ");
    scanf("%d", &marks);

    // Check if marks are valid
    if(marks > 100 || marks < 0)
    {
        printf("Invalid marks entered. Please enter marks between 0 and 100.\n");
        return 0;
    }

    // Check the grade
    if(marks >= 90)
        printf("Grade: EX\n");
    else if(marks >= 80)
        printf("Grade: A\n");
    else if(marks >= 70)
        printf("Grade: B\n");
    else if(marks >= 60)
        printf("Grade: C\n");
    else if(marks >= 50)
        printf("Grade: D\n");
    else if(marks >= 35)
        printf("Grade: P\n");
    else
        printf("Grade: F\n");

    return 0;
}

/* Output
Enter the marks: 90
Grade: EX
Enter the marks: 80
Grade: A
Enter the marks: 70
Grade: B
Enter the marks: 60
Grade: C
Enter the marks: 50
Grade: D
Enter the marks: 35
Grade: P
Enter the marks: 34
Grade: F
Enter the marks: -100
Invalid marks entered. Please enter marks between 0 and 100.
*/