//Sarthak Gupta
//21IM10030
//Section 3
//Test2d
#include<stdio.h>
#define max 50
struct data// structure data for entering details about student
{
    char name[20];
    char gender[10];
    float marks;
};
void highest(struct data student[],int num)//funtion to find best girl student
{
    int i;
    struct data temp;
    for(i=0;i<num;i++)//for finding girl student with highest marks
    {
        if((student[i].gender[0]=='g')&&(student[i].marks>temp.marks))
        {
           temp=student[i];
        }
    }
    printf("Best girl student:%s\n",temp.name);

}
int main()
{
    int n,i;
    struct data student[max];
    struct data b;
    printf("Enter the number of students\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the details of student%d\n",i);
        printf("Name:");
        scanf("%s",student[i].name);
        scanf("%s",student[i].name);
        printf("\nGender(boy/girl):");
        scanf("%s",student[i].gender);
        printf("\nMarks:");
        scanf("%f",&student[i].marks);
        printf("\n");
    }
    for(i=0;i<n;i++)
    {
        printf("%s\t%s\t%f\n",student[i].name,student[i].gender,student[i].marks);
    }
    highest(student,n);
    return 0;
}

