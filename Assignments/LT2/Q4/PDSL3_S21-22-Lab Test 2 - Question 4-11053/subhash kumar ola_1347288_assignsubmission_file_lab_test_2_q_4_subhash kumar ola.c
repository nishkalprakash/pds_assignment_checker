#include<stdio.h>
struct student{
    char name[20];
char gender[5];
float marks;
};
int main()
{
    struct student A[100];

    int n,i,j;
    printf("Enter number of students: ");
    scanf("%d",&n);
        printf("Enter details of students\n ");

    for(i=0;i<n;++i)
    {
        scanf("%s%s%f",A[i].name,&A[i].gender,&A[i].marks);
    }
  printf("\n\nPrinting the student records....\n\n");
    for(i=0;i<n;++i)
    {
        printf("%s %s %f\n",A[i].name,A[i].gender,A[i].marks);
    }
    float g_marks[20];
    j=0;
    for(i=0;i<n;++i)
    {
        if(A[i].gender[0]=='g')
        {
            g_marks[j]=A[i].marks;++j;
        }
    }
    float max=g_marks[0];
    for(i=0;i<j-1;++i)
    {
        if(g_marks[i+1]>g_marks[i])max=g_marks[i+1];
    }
       for(i=0;i<n;++i)
    {
        if(A[i].marks==max)
        {
            printf("\n\nBest girl student");
             printf("\n\n%s %s %f\n",A[i].name,A[i].gender,A[i].marks);
        }
    }

return 0;
}
