/*NAME HARSH SOMANI
SECTION 3
ROLL NUMBER 21EC10031
ASSIGNMENT CLASS 6
DEPT ECE*/
#include<stdio.h>
#define MAX 100
struct student
{
    char firstname[15];
    char lastname[15];
    char gender[15];
    float marks;
};
int cmps(char x[],char y[])
/*compare string to girl*/
{
    int a,i;
    for(i=0;i<4;i++)/*i<4 as only we are checking for girl*/
    {
        if(x[i]!=y[i]) {a=1; break;}
        else a=0;
    }
    return(a);
}
void prt(struct student st[],int n)
{
    int k;
    for(k=0;k<n;k++)
    {
        printf("%s %s\n",st[k].firstname,st[k].lastname);
        printf("%s\n",st[k].gender);
        printf("%f\n",st[k].marks);
    }
}
void bestgirl(struct student st[],int n)
{
    int a,i,max_m=0,z;
    for(i=0;i<n;i++)
    {
        a=cmps(st[i].gender,"girl");
        if(a==0)
        {
           if(st[i].marks>max_m) {max_m=st[i].marks;z=i;}
        }
        else continue;
    }
    printf("the best girl is %s %s",st[z].firstname,st[z].lastname);
}
int main()
{
    int n;
    int i;
    struct student st[MAX];
    printf("enter number of students\n");
    scanf("%d",&n);/*assume n less than 100*/
    printf("enter student entries\n");/*taking the inputs from user*/
    for(i=0;i<n;i++)
    {
        scanf("%s%s",st[i].firstname,st[i].lastname);
        scanf("%s",st[i].gender);
        scanf("%f",&st[i].marks);
    }
     printf("printing the student records\n");
     prt(st,n);/*printing output */
     bestgirl(st,n);
}
