#include <stdio.h>

typedef struct STudent{
    char RollNo[10];
    float marks[3];
    float total;
}student;

int main()
{
    int n;
    scanf("%d",&n);
    student data[n];
    for(int i=0; i<n;i++)
    {
        scanf("%s %f %f %f",&data[i].RollNo,&data[i].marks[0],&data[i].marks[1],&data[i].marks[2]);
        data[i].total=data[i].marks[0]+data[i].marks[1]+data[i].marks[2];
    }
    printf("Student Records:\n");
    for(int i=0;i<n;i++)
    {
        printf("Roll No: %s\n",data[i].RollNo);
        printf("Marks: %f %f %f\n",data[i].marks[0],data[i].marks[1],data[i].marks[2]);
        printf("Total: %f\n",data[i].total);
    }

    printf("\n");
    student t;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if (data[j].total < data[j+1].total)
                {
                    t = data[j];
                    data[j] = data[j+1];
                    data[j+1] = t;
                }
        }

    }
    printf("Sorted Student Records:\n");
    for(int i=0;i<n;i++)
    {
        printf("Roll No: %s\n",data[i].RollNo);
        printf("Marks: %f %f %f\n",data[i].marks[0],data[i].marks[1],data[i].marks[2]);
        printf("Total: %f\n",data[i].total);
    }
}
