

#include <stdio.h>
#define MAX 100
static int n;
struct student{
    char name[30];
    char gender[5];
    float marks;
}record[MAX];
void input(struct student record[])
{
 
 int i;
    printf("ENTER THE NUMBER OF STUDENTS");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter the details of student %d",i+1);
        scanf("%s",record[i].name);
        printf("\n");
        scanf("%s",record[i].gender);
        printf("\n");
        scanf("%f",&record[i].marks);
        printf("\n");
    }
    
}
void output(struct student record[],int n)
{
      int i;
    for(i=0;i<n;i++)
    {
    printf("details of student %d\n",i+1);
    printf("%s \t %s\t %f",record[i].name,record[i].gender,record[i].marks);
    }
}
    
int compare(char a[],char b[])  
{  
     int chk=0,i;
    while(a[i]!='\0' || b[i]!='\0')
    {
        if(a[i]!=b[i])
        {
            chk = 1;
            break;
        }
        i++;
    }
    return(chk);
}  
void bestgirlstud(struct student record[],int n)
{
    char str[5]="girl";
    int i,j,k=0,max,b[100];
    for(i=0;i<n;i++)
    {
        for(j=0;j<5;j++)
        {
            if(compare(record[i].gender,str)==0)
            {
                record[i].marks=b[k++];
            }
        }
    }
    max=b[0];
    for(i=1;i<k;i++)
    {
        if(b[i]>max)
        {
            max=b[i];
        }
    }
    for(i=0;i<n;i++)
    {
        if(record[i].marks==max)
        {
            printf("the best girl is %s",record[i].name);
        }
    }
    
}

int main()
{
    input(record);
    output(record,n);
    bestgirlstud(record,n);
    
    
    

    return 0;
}
