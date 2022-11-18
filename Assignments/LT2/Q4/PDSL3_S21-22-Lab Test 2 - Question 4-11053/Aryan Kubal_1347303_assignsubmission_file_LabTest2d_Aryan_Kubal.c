/***************************
 * Name : Aryan Kubal
 * Roll number : 21MT30012
 * Section : 3
***************************/

#include<stdio.h>


#define max 10

struct student
{
    char name[20],gen[4];
    float marks;
}a[max];

void populate(int n)
{
    int i; // defining integer i
    printf("\n");
    for(i=0;i<n;i++)
    {   
        printf("Enter the Name of Student %d : ",i+1); // Taking input of name of student
        fgets(a[i].name,20,stdin);
        fgets(a[i].name,20,stdin);
        printf("Enter the Gender of Student %d : ",i+1); // Taking input of the gender of student
        scanf("%s",a[i].gen);
        printf("Enter the Marks of Student %d : ",i+1); // Taking input of the marks obtained by the student
        scanf("%f",&a[i].marks);
        printf("\n");
    }
}

void pri(int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("Name of Student %d : %s\nGender of Student %d : %s\nMarks of Student %d : %f\n",i+1,a[i].name,i+1,a[i].gen,i+1,a[i].marks);
        printf("\n");
    }
}

void best(int n)
{
    int i,c=0,j;
    float m;
    for(i=0;i<n;i++)
    {
        if(c==0&&(a[i].gen[0]=='g'||a[i].gen[0]=='G'))
        { 
            m=a[i].marks;
            c++;
            j=i;
        }    
        else if(c>0&&(a[i].gen[0]=='g'||a[i].gen[0]=='G'))
        {
            if(a[i].marks>m)
            { 
                m=a[i].marks;
                j=i;
            }    
        }
    }    

    if(c!=0)
    printf("\n\nBest Girl student in the Class : %s\n\n",a[j].name); // Displaying the output of best girl as per the marks scored, that is the input
    else
    printf("\n\nNo Girl student in the Class , (Beti Bacho beti Padho)\n\n");
}
 
int main()
{
    int n=11;
    
    while(n>10)
    {
        printf("Enter the no of students in class (<=10) : ");
        scanf("%d",&n);
        if(n>10)
        printf("\nPlease enter a value <=10\n");
    } 

    populate(n);
    pri(n);
    best(n);

    return 0;

}