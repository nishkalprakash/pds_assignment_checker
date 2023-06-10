
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// Define the structure to store a student's data
struct Student
{
char rollno[10];
char branch[3];
char dob[10];
};

void readData(struct Student *students, int n)
{
for (int i = 0; i < n; i++)
{

scanf("%s %s %s", &students[i].rollno, &students[i].branch , &students[i].dob);


}
}


void printData(struct Student *students, int n)
{
printf("\nRemaining REcords:\n");

for (int i = 0; i < n; i++)
{

printf("%s %s %s\n", students[i].rollno, students[i].branch , students[i].dob);
printf("\n");
}
}



int main()
{
int n,y=0;
char r[4];

scanf("%d", &n);

struct Student *students = (struct Student *)malloc(n * sizeof(struct Student));

readData(students, n);


printData(students, n);



free(students);
return 0;}
