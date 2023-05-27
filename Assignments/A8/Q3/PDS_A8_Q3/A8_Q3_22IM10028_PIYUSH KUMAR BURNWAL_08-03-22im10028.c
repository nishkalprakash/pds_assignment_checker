#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student{
    char RollNo[10];
    float marks[3];
    float total;
};

int main()
{
    int i,j,n;
    struct Student *A;
    char t2[10];
    float t3,t4,t5;
    printf("Enter the no. of students");
    scanf("%d",&n);
    A=(struct Student *) malloc(n*sizeof(struct Student));
    //accepting roll no. and marks of three subjects
    for(i=0;i<n;i++)
    {
        scanf("%s%f%f%f",(A+i)->RollNo,&(A+i)->marks[0],&(A+i)->marks[1],&(A+i)->marks[2]);

    }
    for(i=0;i<n;i++)
    {
        (A+i)->total=(((A+i)->marks[0])+((A+i)->marks[1])+((A+i)->marks[2]));

    }
    printf("Student records\n");
    for(i=0;i<n;i++)
    {
        printf("Roll no: %s",(A+i)->RollNo);
        printf("Marks: %0.2f\t%0.2f\t%0.2f",(A+i)->marks[0],(A+i)->marks[1],(A+i)->marks[2]);
        printf("\n");

    }

    printf("Sorted Students Record\n");
    int t;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(((A+j)->total)<((A+j+1)->total))
            {
                t=(A+j)->total;
                (A+j)->total=(A+j+1)->total;
                (A+j+1)->total=t;
                strcpy(t2,(A+j)->RollNo);
                strcpy(((A+j)->RollNo),((A+j+1)->RollNo));
                strcpy((A+j+1)->RollNo,t2);
                t3=(A+j)->marks[0];
                (A+j)->marks[0]=(A+j+1)->marks[0];
                (A+j+1)->marks[0]=t3;
                t4=(A+j)->marks[1];
                (A+j)->marks[1]=(A+j+1)->marks[1];
                (A+j+1)->marks[1]=t4;
                t5=(A+j)->marks[2];
                (A+j)->marks[2]=(A+j+1)->marks[2];
                (A+j+1)->marks[2]=t5;

            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("Roll no: %s\n",(A+i)->RollNo);
        printf("Marks: %0.2f\t%0.2f\t%0.2f \n",(A+i)->marks[0],(A+i)->marks[1],(A+i)->marks[2]);
        printf("Total: %0.2f \n",(A+i)->total);
        printf("\n");

    }


}
