/*name bimal gayali
question 4 */
#include<stdio.h>
struct student  // declare struct for record diff students data
{
    int name[20],gender[20];
    int roll;
    float marks;

};
int main()
{
    int i,n;    //here we initialize type of variable
    float highest;
    struct student s[n];
    printf("Enter students Record :\n ");
    printf("enter the number of students :\n");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        // printf("eneter student name");
        scanf("%s",&s[i].name);
        scanf("%s",&s[i].name);
        // printf("enter the gender of the students : %s");
        scanf("%s",s[i].gender);
        // printf("enter the students roll : ");
        // scanf("%d",&s[i].roll);
        // printf("Enter the marks of the students0 :");
        scanf("%f",&s[i].marks);


    }
    for (i = 0; i < 10; i++) // for loop for  highest marks calculation
    {

        if (s[i].marks > highest)
            highest = s[i].marks;
    }
    printf("students Record :\n ");
    for(i=0; i<n; i++)
    {
        printf(" student name %s\n ",s[i].name);
        printf("students gender %s\n",s[i].gender);

        printf("the students roll :%d\n ",s[i].roll);

        printf("the marks of the students : %f\n",s[i].marks);
        printf("heighest marks %f",highest);
    }
    return 0;
}
