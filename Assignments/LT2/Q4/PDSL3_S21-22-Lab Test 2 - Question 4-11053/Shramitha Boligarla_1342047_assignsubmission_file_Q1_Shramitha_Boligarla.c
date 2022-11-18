#include <stdio.h>
#define MAX 100

typedef struct
{
  char name;
  char gender;
  float marks;
}

Stud;

void student_details(int n)
{
   int i;
   Stud Student[MAX];
   for(i=0;i<n;i++)
      {
        fflush(stdin);
        printf("Enter the details of Student %d: \n",i+1 );
        printf("Name: ");
        scanf("%[^\n]s",&Student[i].name) ;
        printf("Gender: ");
        scanf("%s",&Student[i].gender);
        printf("Marks: ");
        scanf("%s",&Student[i].name);
      }
      return;
}

void print_record(Stud Student[],int n)
{
    int i;
    for(i=0;i<n;i++)
     {
       printf("%s %s - %f\n",Student[i].name,Student[i].gender,Student[i].marks);
     }
     return;
}

void bestgirl(Stud Student[],int n)
{
    int max;
    char girl;
    static int j=0,i;
    max = Student [0].marks;
    for (i=0; i<n; i++)
     {
       if(Student[i].gender==girl)
         {
           if (Student[i].marks > max)
           max = Student[i].marks;
           j=i;
         }

     }
    printf("Best girl student:",Student[j].name);
    return ;
}


int main()
{
  Stud Student[MAX];
  int n;
  printf("Enter the number of students: ");
  scanf("%d",&n);
  fflush(stdin);
  printf("Enter the student details: \n");
  student_details(n);

   printf("Printing the student records..\n\n");

   print_record(Student,n);

   bestgirl(Student,n);
   return 0;
}
