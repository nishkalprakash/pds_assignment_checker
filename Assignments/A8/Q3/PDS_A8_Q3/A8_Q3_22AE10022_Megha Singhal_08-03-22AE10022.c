#include<stdio.h>
#include<math.h>
#include<string.h>
struct student
{
    char rn[10];
    float m[3];
    float total;
};
int main()
{
    int n,i,j;
    printf("Enter number of students: ");
    scanf("%d",&n);
    struct student *d,t;
    d=(struct student*) malloc(n*sizeof(struct student));
    printf("Enter data of students:\n");
    for(i=0;i<n;i++)
    {
        scanf("%s",d[i].rn);
        for(j=0;j<3;j++)
            scanf("%f",&d[i].m[j]);
        printf("\n\n");
        d[i].total=d[i].m[0]+d[i].m[1]+d[i].m[2];
    }
    printf(" Sorted Student Records:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(d[j].total>d[j+1].total)
                t=d[j];d[j]=d[j+1];d[j+1]=t;
        }
    }
    for(i=0;i<n;i++)
        printf("Roll No. = %s\nMarks = %.2f %.2f %.2f\nTotal = %.2f\n",d[i].rn,d[i].m[0],d[i].m[1],d[i].m[2],d[i].total);
    return 0;
}
