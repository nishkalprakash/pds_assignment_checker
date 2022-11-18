#include<stdio.h>
#define MAX 100

// Harsh Raj
// Roll : 21IE10017

struct student
{
    char firstname[15];
    char lastname[15];
    char gender[15];
    float marks;
};
int compare_name(char x[],char y[])
{
    int a,i;
    for(i=0;i<4;i++)
    {
        if(x[i]!=y[i]) {a=1; break;}
        else a=0;
    }
    return(a);
}
void show_result(struct student A[],int n)
{
    int k;
    for(k=0;k<n;k++)
    {
        printf("%s %s\n",A[k].firstname,A[k].lastname);
        printf("%s\n",A[k].gender);
        printf("%f\n",A[k].marks);
    }
}
void best_of_all(struct student A[],int n)
{
    int a,i,max_m=0,x;
    for(i=0;i<n;i++)
    {
        a=compare_name(A[i].gender,"girl");
        if(a==0)
        {
           if(A[i].marks>max_m)
            {
                max_m=A[i].marks;
                x=i;
            }
        }
        else continue;
    }
    printf("The Best of all is %s %s",A[x].firstname,A[x].lastname);
}
int main()
{
    int n,i;
    struct student A[MAX];
    printf("Enter number of Students \n");
    scanf("%d",&n);
    printf("Enter the Student details \n");
    for(i=0;i<n;i++)
    {
        scanf("%s%s",A[i].firstname,A[i].lastname);
        scanf("%s",A[i].gender);
        scanf("%f",&A[i].marks);
    }
     printf("Printing the Students records \n");
     show_result(A,n);
     best_of_all(A,n);
}
