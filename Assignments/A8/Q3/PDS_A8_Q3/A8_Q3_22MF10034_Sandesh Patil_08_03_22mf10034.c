#include<stdio.h>
#include<stdlib.h>
#include<math.h>

 struct student
{
    char RollNo[10];
    float marks[3];
    float total;
};
int main()
{
    struct student a,s[100];
    int n;
    int i=0;
    for(i=0;i<3;i++)
    {
         printf("enter roll no of %d student",i+1);
         scanf("%d",&a.RollNo);
         printf("enter marks of %d student",i+1);
         scanf("%d%d%d",&a.marks,&a.marks,&a.marks);

    }
    printf("value of n \n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter roll no of %d student",i+1);
         scanf("%d",&s[i].RollNo);
         printf("enter marks of %d student",i+1);
         scanf("%d%d%d",&s[i].marks,&s[i].marks,&s[i].marks);
    }
    printf("student data");
    printf("rollno:%d",s[i].RollNo);






    return 0;

}
