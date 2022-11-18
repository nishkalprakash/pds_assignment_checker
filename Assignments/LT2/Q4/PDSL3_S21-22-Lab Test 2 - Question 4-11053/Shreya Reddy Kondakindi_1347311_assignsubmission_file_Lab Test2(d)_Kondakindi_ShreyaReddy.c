/*Name:Kondakindi Shreya Reddy
Roll number:21CE10032
package:CodeBlocks
Operating System:Windows*/
#include <stdio.h>
#define MAX 50
struct Student
{
    char name[25];
    char gender[10];
    float marks;

}s[MAX];
int main()
{
    int n,i,j,k,bestIndex=0,bestMarks=0.0;//n=number of students

    printf("enter number of students:");
    scanf("%d",&n);
    printf("enter student details(name,gender,marks):");
    for(i=0;i<n;i++)
    {
        scanf("%s",s[i].name);
        scanf("%s",s[i].gender);
        scanf("%f",&s[i].marks);
        if(s[i].gender=='girl')
        {
            if (s[i].marks>bestMarks)
            {
                bestIndex=i;
                bestMarks=s[i].marks;
            }
        }
    }
    printf("printing student details...\n");
    for(i=0;i<n;i++)
    {
        printf("%s\t",s[i].name);
        printf("%s\t",s[i].gender);
        printf("%f",s[i].marks);
        printf("\n");
    }

    printf("Best girl student:%s",s[bestIndex].name);
    return 0;

}

