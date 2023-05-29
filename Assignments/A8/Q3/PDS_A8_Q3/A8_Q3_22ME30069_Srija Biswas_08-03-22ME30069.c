#include<stdio.h>

struct Student
{
   char RollNo[10];
   float marks[3];
   float total;
};
int main()
{
    struct Student std[100];

    int n,i,j;
    printf("Enter total number of Students\n");
    scanf("%d",&n);
    printf("Enter student information for Students:\n");
    for(i=0;i<n;i++)
    {
        scanf("%s %f %f %f",&std[i].RollNo,&std[i].marks[0],&std[i].marks[1],&std[i].marks[2]);
    }
    printf("Students Records\n");
    for(i=0;i<n;i++)
    {
        printf("%s %.1f %.1f %.1f\n",std[i].RollNo,std[i].marks[0],std[i].marks[1],std[i].marks[2]);
    }
    for(i=0;i<n;i++)
    {
        std[i].total=std[i].marks[0]+std[i].marks[1]+std[i].marks[2];

    }
    printf("Sorted Student Records\n");
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(std[j].total<std[j+1].total);
            {
                struct Student temp=std[j];
                std[j]=std[j+1];
                std[j+1]=temp;

            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("Roll No.: %s\n",std[i].RollNo);
        printf("Marks: %.2f %.2f %.2f\n",std[i].marks[0],std[i].marks[1],std[i].marks[2]);
        printf("Total: %.2f\n",std[i].total);
    }
    return 0;

}
