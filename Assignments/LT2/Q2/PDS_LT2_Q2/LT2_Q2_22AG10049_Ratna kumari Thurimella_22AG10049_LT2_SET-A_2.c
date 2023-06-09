//T.Ratna kumari
//22AG10049
//SEC2
#include<stdio.h>
#include<string.h>
struct student
{
    char roll[10];
    char dep[2];    //dep-department
    char dob[10];
}s[100];
int main()
{
    int i,n;

    printf("enter no of students:\n");
    scanf("%d",&n);
    printf("enter student records\n ");
    for(i=0;i<n;++i)
    {
      //s[i].roll=i;
      printf("enter roll number:\n");
      scanf("%s",&s[i].roll);

      printf("department:\n");
      scanf("%s",s[i].dep);

      printf("date of birth:\n");
      scanf("%s",&s[i].dob);
    }
    printf("displaying records\n");
    for(i=0;i<n;i++)
    {
        printf("roll number:%s\n",s[i].roll);
        printf("department:%s\n",s[i].dep);
        printf("date of birth:%s\n",s[i].dob);
        printf("\n");
    }
    return 0;
}