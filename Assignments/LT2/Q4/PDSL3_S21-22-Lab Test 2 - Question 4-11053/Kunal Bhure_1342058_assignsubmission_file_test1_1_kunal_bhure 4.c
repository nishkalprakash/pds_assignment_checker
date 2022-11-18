#include<stdio.h>
#define MAX 20
//define structure Student
typedef struct
{
    char name[20];
    char gender[5];
    float marks;
} Student;

int main()
{
    Student a[MAX];
    int n,i;
    printf("Enter number of students- ");
    scanf("%d",&n);
    printf("Enter student details- \n");
    //scanning all student details
    for(i=0; i<n; i++)
    {
        scanf("%s",a[i].name);
        scanf("%s",a[i].name);
        scanf("%s",a[i].gender);
        scanf("%f",&a[i].marks);
    }
    printf("Printing student details \n");
    //printing every students details
    for(i=0; i<n; i++)
    {
        printf("%s ",a[i].name);
        printf("%s ",a[i].gender);
        printf("%f \n",a[i].marks);
    }
    //calling function for searching topper girl
    topper(a,n);
}
//function for serching girl topper
//assumption    there is atleast one girl
int topper(Student a[], int n)
{
    int i,k,max=0;
    for(i=0; i<n; i++)
    {
        if(a[i].gender[0]=='g')
        {
            if(a[i].marks>max)
            {
                max=a[i].marks;
                k=i;
            }
        }
    }
    //printing name of girls topper
    printf("Best girl student is %s ",a[k].name);

}
