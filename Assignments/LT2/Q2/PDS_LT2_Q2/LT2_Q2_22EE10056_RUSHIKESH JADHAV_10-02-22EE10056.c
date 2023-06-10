#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/*
Name:-Rushikesh santosh jadhav
Roll no:-22EE10056
*/
typedef struct student
{
    char rollNo[11];
    char branch[4];
    char dob[12];
}student;
void read(student*s,int n)
{
    for(int i=0;i<n;i++)
    {
        printf("Enter Roll no of %dth student:\n",i+1);
        printf("Enter branch of %dth student:\n",i+1);
        printf("Enter dob of %dth student:\n",i+1);
        scanf("%s %s %s",s[i].rollNo,s[i].branch,s[i].dob);
    }
}
int delete(student *s,int year,int n)
{
    int ctr1,m=0,sum;
    for(int i=0;i<n;i++)
    {
        ctr1=0;
        sum=0;
        for(int j=0;j<10;j++)
        {
            if(s[i].dob[j]=='/')
            {
                ctr1++;
                continue;
            }
            if(ctr1==2)
            {
                sum=sum*10+s[i].dob[j]-48;
            }
        }
        if(sum<year)
        {
            if(i==n-1)
            {
                printf("Deleted record: ");
                printf("%s ",s[i].rollNo);
                printf("%s ",s[i].branch);
                printf("%s \n",s[i].dob);
                n--;
                m++;
            }
            else
            {
                printf("Deleted record: ");
                printf("%s ",s[i].rollNo);
                printf("%s ",s[i].branch);
                printf("%s \n",s[i].dob);
                for(int k=i;k<n-1;k++)
                {
                   s[i]=s[i+1];
                }
                n--;
                m++;
                i--;
            }
        }
    }
    return m;
}
int main()
{
    student *s;
    int n,m,year;
    printf("Enter no of records to be stored:");
    scanf("%d",&n);
    getchar();
    s=(student*)malloc(n*sizeof(student));
    read(s,n);
    printf("Enter dob year before which all records are to be deleted:\n");
    scanf("%d",&year);
    getchar();
    m=delete(s,year,n);
    printf("m = %d, n - m = %d\n",m,n-m);
    s=realloc(s,(n-m)*sizeof(student));
    printf("Remaining records:\n");
    for(int i=0;i<n-m;i++)
    {
        printf("%s ",s[i].rollNo);

        printf("%s ",s[i].branch);

        printf("%s\n",s[i].dob);

    }
    free(s);
  return 0;
}
