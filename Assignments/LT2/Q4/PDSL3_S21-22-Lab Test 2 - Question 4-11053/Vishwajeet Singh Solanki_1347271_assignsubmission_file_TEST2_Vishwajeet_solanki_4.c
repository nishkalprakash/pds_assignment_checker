/*
NAME: VISHWAJEET SINGH SOLANKI
ROLL NO: 21CS10079
DEPT: COMPUTER SCIENCE
PACKAGE: CODEBLOCKS
Question : 4
*/

# include <stdio.h>
# define MAX 20

typedef struct
{
   char name[25];
   char surname[25];
   char gender[5];
   float marks;
} Student;

void Read_Data(Student a[],int n)                                                        //DATA INPUT FUNCTION
{
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%s%s%s%f",a[i].name,a[i].surname,a[i].gender,&a[i].marks);
    }

    return;
}

void Print_Data(Student a[],int n)                                                        //DATA PRINT FUNCTION
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%s %s  %s  %0.2f\n",a[i].name,a[i].surname,a[i].gender,a[i].marks);
    }

    return;
}

void Best_Girl(Student a[],int n)                                                          //BEST GIRL SCORER
{
    float max=0;
    int best_indx,i;

    for(i=0;i<n;i++)
    {
        if((a[i].marks>=max)&&(a[i].gender[0]=='g'))
        {
            max = a[i].marks;
            best_indx = i;
        }
    }

    printf("Best girl student: %s %s\n",a[best_indx].name,a[best_indx].surname);

    return;
}

int main()                                                                    //MAIN FUNCTION
{
    Student arr[MAX];
    int n;
    printf("Enter the number of students:\n");
    scanf("%d",&n);

    printf("Enter the student details:\n");
    Read_Data(arr,n);

    printf("Printing the student records:\n");
    Print_Data(arr,n);

    Best_Girl(arr,n);
    return 0;
}
