// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
struct Student//struct to store the parameters
//taking the surname seperately
{
    char name[100];
    char surname[100];
    char gender[6];
    int marks;
};
int main()
{
    int n;
    printf("Enter the number of students : ");
    scanf("%d",&n);
    printf("\nEnter the students details :\n");
    struct Student s[n];//array of struct to store student data
    
    for(int i=0;i<n;i++)
    {
        scanf("%s",s[i].name);//name
         scanf("%s",s[i].surname);//surname
        scanf("%s",s[i].gender);//gender
        scanf("%d",&s[i].marks);//marks
    }
    int max=0,p=-1;//declaration and initialisation
    for(int i=0;i<n;i++)
    {
        
        if(s[i].marks>max&&s[i].gender[0]=='g')
        {
            
            max=s[i].marks;
            p=i;
        }
    }
    printf("\n\nPrinting the student records..\n\n");
    for(int i=0;i<n;i++)
    {
        printf("%s %s %s-> %d\n",s[i].name,s[i].surname,s[i].gender,s[i].marks);//record of student's data
    }
    printf("\n\nBest %s student: %s %s",s[p].gender,s[p].name,s[p].surname);//best girl student
    return 0;
}
