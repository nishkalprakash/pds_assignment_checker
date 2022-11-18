/*Soumojit Bhattacharya 
21EC10071 
macos visual studio code*/
#define MAX 100
#include <stdio.h>

struct student           //make structure
{
    char name[100];
    char gender[6];
    float marks;
};
void accept(struct student st[],int n)
{
    printf("Enter the student details:\n");
    int i,count;
    char c;
    for(i=0;i<n;i++)
    {
        count=0;              //----------------------------------------------------------------------
        int l=0;
        while(count<2)               
        {
            scanf("%c", &c);   //accept name and surname in one string as shown in question
            st[i].name[l++]=c; //and make final char in string null character
            if(c==' ')
            count++;
        }
        st[i].name[l]='\0';   //----------------------------------------------------------------------
        l=0;
        do
        {                       //accept gender
            scanf("%c", &c);
            st[i].gender[l++]=c;
        }                     
        while(c!=' ');
        st[i].gender[l]='\0'; //----------------------------------------------------------------------
        scanf("%f", &st[i].marks); //input marks
        scanf("%c", &c);
    }
}
void print(struct student st[],int n)     //print student records
{
    printf("Printing the student records..\n\n");
    int i;
    for(i=0;i<n;i++)
    {
        printf("%s  %s  %0.2f\n",st[i].name,st[i].gender,st[i].marks);
    }
}
void best_girl(struct student st[],int n)
{
    float max=0;
    int i;
    int bestg=-1;
    for(i=0;i<n;i++)
    {
        if(st[i].gender[0]=='g'||st[i].gender[0]=='G') //check if student is a girl
        {
            if(st[i].marks>=max)         //check if her marks are greater than max marks set b4
            {
                max=st[i].marks;   
                bestg=i;              //set input of girl with best marks
            }
        }
    }
    if(bestg==-1)
    {
        printf("none of the students are girls");  //if no girl present
    }
    else 
    {
        printf("Best girl student:  %s", st[bestg].name);
    }
}
int main()
{
    struct student st[MAX];
    int n;
    printf("Enter number of students:");   //input number of students
    scanf("%d",&n);
    accept(st,n);            //call functions
    print(st,n);
    best_girl(st,n);
    printf("\n");
    
    return 0;
}