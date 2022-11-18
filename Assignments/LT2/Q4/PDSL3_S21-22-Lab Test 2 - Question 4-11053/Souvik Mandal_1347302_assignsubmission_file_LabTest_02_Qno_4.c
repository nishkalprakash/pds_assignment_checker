/*
Name : Souvik Mandal
Roll No. : 21MF10036
Section : 3 
Group : 5
Department : Manufacturing Science And ENGG.
Package : VS Code
Operating System : Windows
*/


#include<stdio.h>


struct student{
char name[20];
char gender[7];
float marks;

}S[20],s1;

int input(int n)
{
    printf("Enter the student details:\n");
    for(int i=0;i<n;i++)
    {
       scanf("%s",&(S[i].name));
       scanf("%s",&(S[i].gender));
       scanf("%f",&(S[i].marks));
    }
}


int output(int n)
{
    printf("Printing the student record....\n");
    for(int i=0;i<n;i++)
    {
       printf("%s\t",S[i].name);
       printf("%s\t",S[i].gender);
       printf("%f\t",S[i].marks);
       printf("\n");
    }
}

int checkGirl(struct student s1)
{

    if ((s1.gender[0] == 'g' || s1.gender[0] == 'G'))
        return 1;
    else
        return 0;
}

int findbestgirl(int n)
{
    int A;
    for (int i=0;i<n;i++)
    {
        if (checkGirl(S[i]) == 1)
        {
            A=i;
            break;
        }
    }

     for (int i = 0; i < n; i++)
    {
        if (S[i].marks>S[A].marks)
            {
              if (checkGirl(S[i])==1)
                 {
                    A=i;
                 }
            }
    }

      printf("\nThe best girl student: %s", S[A].name);


}

int main()
{
    int n;
    printf("Enter the nubmer of students:\n");
    scanf("%d",&n);
    input(n);
    output(n);
    findbestgirl(n);
    return 0;
}