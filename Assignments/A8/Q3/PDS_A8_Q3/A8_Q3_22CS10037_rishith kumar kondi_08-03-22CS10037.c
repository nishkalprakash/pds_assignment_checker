#include<stdio.h>
#include<stdlib.h>
struct student{
   char Rolno[10];
   float marks[3];
   float total;
};
int main()
{
    int i,j,*s,*u,t;
    struct student *p;
    int n;
    scanf("%d",&n);
    s=(int *)malloc(n*4);
    u=(int*)malloc(n*4);
    p=(struct student *)malloc(n*sizeof(struct student));
    for(i=0;i<n;i++)
    {
        scanf("%s",p[i].Rolno);
        for(j=0;j<3;j++)
        {
            scanf("%f",&p[i].marks[j]);
            p[i].total+=p[i].marks[j];
        }
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<3;j++)
        {
            if(p[i].marks[j]<s[i]){s[i]=p[i]#include<stdio.h>
#include<stdlib.h>
struct student{
   char Rolno[10];
   float marks[3];
   float total;
};
int main()
{
    int i,j,*s,*u,t;
    struct student *p;
    int n;
    scanf("%d",&n);
    s=(int *)malloc(n*4);
    u=(int*)malloc(n*4);
    p=(struct student *)malloc(n*sizeof(struct student));
    for(i=0;i<n;i++)
    {
        scanf("%s",p[i].Rolno);
        for(j=0;j<3;j++)
        {
            scanf("%f",&p[i].marks[j]);
            p[i].total+=p[i].marks[j];
        }
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<3;j++)
        {
            if(p[i].marks[j]<s[i]){s[i]=p[i].marks[j];u[i]=j;};
        }
    }
    for(i=0;i<n;i++)
    {
        t=p[i].marks[u[i]];
        p[i].marks[u[i]]=p[i].marks[0];
        p[i].marks[0]=t;
        for(j=0;j<2;j++)
        {
            if(p[i].marks[j]<p[i].marks[j+1]){ t=p[i].marks[j];
        p[i].marks[j]=p[i].marks[j+1];
        p[i].marks[j+1]=t;}
        }
    }

    printf("students records in order\n");
    printf("student records:\n");
    for(i=0;i<n;i++)
    {
        printf("rollno:%s\n",p[i].Rolno);
        printf("marks:");
        for(j=0;j<3;j++)
        {
           printf("%f ",p[i].marks[j]);
        }
        printf("%d",p[i].total);

        printf("\n");
    }


}

.marks[j];u[i]=j;};
        }
    }
    for(i=0;i<n;i++)
    {
        t=p[i].marks[u[i]];
        p[i].marks[u[i]]=p[i].marks[0];
        p[i].marks[0]=t;
        for(j=0;j<2;j++)
        {
            if(p[i].marks[j]<p[i].marks[j+1]){ t=p[i].marks[j];
        p[i].marks[j]=p[i].marks[j+1];
        p[i].marks[j+1]=t;}
        }
    }

    printf("students records in order\n");
    printf("student records:\n");
    for(i=0;i<n;i++)
    {
        printf("rollno:%s\n",p[i].Rolno);
        printf("marks:");
        for(j=0;j<3;j++)
        {
           printf("%f ",p[i].marks[j]);
        }
        printf("%d",p[i].total);

        printf("\n");
    }


}