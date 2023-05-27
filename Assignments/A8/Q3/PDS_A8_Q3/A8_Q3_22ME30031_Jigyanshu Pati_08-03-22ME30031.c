//Section 2
//RollNo:22ME30031
//Name:Jigyanshu Pati
// LAB 8
//description:Q3
#include<stdio.h>
struct student
{
    char RollNo[10];
    float marks[3];
    float total;
}stu[100];
int main()
{
    struct temp;
    int n,i,j;
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        scanf("%s",&stu[i].RollNo);
        scanf("%f",&stu[i].marks[0]);
        scanf("%f",&stu[i].marks[1]);
        scanf("%f",&stu[i].marks[2]);
    }
    printf("Student Records\n");
     for (i=0;i<n;i++)
    {
        printf("%s ",stu[i].RollNo);
        printf("%.2f ",stu[i].marks[0]);
        printf("%.2f ",stu[i].marks[1]);
        printf("%.2f",stu[i].marks[2]);
        printf("\n");
    }
    for (i=0;i<n;i++)
    {
        stu[i].total=stu[i].marks[0]+stu[i].marks[1]+stu[i].marks[2];
    }

    printf("Sorted Student Records\n");
    for (i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {

            if(stu[j].total<stu[j+1].total)
        {
            temp=stu[j];
            stu[j]=std[j+1];
            std[j+1]=temp;
        }
        }
    }
    for (i=0;i<n;i++)
    {
        printf(" Roll no: %s \n",stu[i].RollNo);
        printf("Marks: %.2f ",stu[i].marks[0]);
        printf("%.2f ",stu[i].marks[1]);
        printf("%.2f\n",stu[i].marks[2]);
        printf("%.2f",stu[i].total);
        printf("\n");
    }

}
