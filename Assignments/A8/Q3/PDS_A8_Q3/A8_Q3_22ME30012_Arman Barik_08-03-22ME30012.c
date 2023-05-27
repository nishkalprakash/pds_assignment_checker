# include <stdio.h>
# include <math.h>

typedef struct student
{
    char RollNo[10];
    float marks[3];
    float total;
} stu;
int main()
{
    int n;
    printf("Enter the number of students, of whom you want to store data: ");
    scanf("%d",&n);

    stu arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%s",&arr[i].RollNo);
        for(int j=0;j<3;j++) scanf("%f",&arr[i].marks[j]);
        arr[i].total=arr[i].marks[0]+arr[i].marks[1]+arr[i].marks[2];
    }

    printf("Sorted students records:\n");
    printf("Students record:\n");
    for(int i=0; i<n; i++)
    {
        printf("Roll No:%s\n",arr[i].RollNo);
        for(int j=0;j<3; j++) printf("Marks: %f\t",arr[i].marks[j]);
        printf("\n");

    }



    return 0;

}
