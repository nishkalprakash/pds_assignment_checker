#include<stdio.h>
#include<stdlib.h>
typedef struct student{
char RollNo[10];
float marks[3];
float total;
}student;
void swap(student *ptr,student *ptr1)
{
    int i;
    student *temp;
    temp=malloc(sizeof(student));
    strcpy(temp->RollNo,ptr->RollNo);
    strcpy(ptr->RollNo,ptr1->RollNo);
    strcpy(ptr1->RollNo,temp->RollNo);
    for(i=0;i<3;i++)
    {
        temp->marks[i]=ptr->marks[i];
    }
    for(i=0;i<3;i++)
    {
        ptr->marks[i]=ptr1->marks[i];
    }
    for(i=0;i<3;i++)
    {
        ptr1->marks[i]=temp->marks[i];
    }
     temp->total=ptr->total;
     ptr->total=ptr1->total;
     ptr1->total=temp->total;
}
int main()
{
    int n,ctr,i;
    printf("Enter no of students:");
    scanf("%d",&n);
    student s[n];
    for(i=0;i<n;i++)
    {
        printf("Enter roll no of student %d:",i+1);
        scanf("%s",s[i].RollNo);
        printf("Enter marks scored in 3 subjects:");
        scanf("%f %f %f",&s[i].marks[0],&s[i].marks[1],&s[i].marks[2]);
        s[i].total=s[i].marks[0]+s[i].marks[1]+s[i].marks[2];
    }
    while(ctr!=0)
    {
        ctr=0;
        for(i=0;i<n-1;i++)
        {
            if(s[i].total<s[i+1].total)
            {
                ctr++;
                swap(&s[i],&s[i+1]);
            }
        }
    }
    printf("Sorted  student records:\n");
    printf("Student records:\n");
    for(i=0;i<n;i++)
    {

        printf("Roll nop:%s\n",s[i].RollNo);
        printf("Marks:%f %f %f\n",s[i].marks[0],s[i].marks[1],s[i].marks[2]);
        printf("Total:%f\n",s[i].total);
    }
    return 0;
}
