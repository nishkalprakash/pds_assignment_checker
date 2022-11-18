/*chityala raviteja
dept. -CSE Dual
roll no: 21CS30016
package : online compiler
os- windows 10 */

#include <stdio.h>
#include <stdlib.h>

#define MAX 20
//creating a new datatype structure with name student 
typedef struct student
{
    char name[20];
    char gen[5];
    float marks;
} student;
//defining a function to print the data
void print(student *s, int n)
{
    printf("Printing Student Records...\n\n");
    for (int i = 0; i < n; i++)
    {
        printf("%s \t--%s \t--%.4f\n", s[i].name, s[i].gen, s[i].marks);
    }
}

//defining a function to take input data from user
void fill(student *s, int n)
{
    for (int i = 0; i < n; i++)
    {
        char temp;
        printf("Enter name of student - %d : ", i + 1);
        scanf("%c", &temp);
        scanf("%[^\n]", s[i].name);
        printf("Enter gender of student - %d : ", i + 1);
        scanf("%s", s[i].gen);
        printf("Enter marks of student - %d : ", i + 1);
        scanf("%f", &s[i].marks);
        printf("\n");
    }
}
//defining function to find the best girl student with highest marks
void findbest(student *s, int n)
{
    float temp_marks = 0;
    int flag = 0, index = 0;
    char temp_name[20], temp_gender[5];
    for (int i = 0; i < n; i++)
    {
        char t1[] = {"girl"};
        int flag1 = 0, j = 0;
        while (s[i].gen[j] != '\0' && t1[j] != '\0')
        {
            if (s[j].gen[j] != t1[j])
            {
                flag1 = 1;
                break;
            }
            j++;
        }
        if (flag1 == 0)
        {
            flag=1;
            if (temp_marks < s[i].marks)
            {
                temp_marks = s[i].marks;
                index = i;
            }
        }
    }
    if (flag == 1)
    {
        printf("Best girl Student is %s.\n", s[index].name);
    }
    else
    {
        printf("No girl student in the given Data.\n");
    }
    return;
}

int main()
{
    int n;
    printf("Enter number of students : ");
    scanf("%d", &n);
    student s[MAX];
    fill(s, n);
    print(s, n);
    findbest(s, n);
    return 0;
}