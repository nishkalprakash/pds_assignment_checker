#include<stdio.h>
struct student
{
    char Rollno[10];
    float marks[3];
    float total;
    int n;
}s[100];
int main()
{

   int i,n;
   printf("enter number of students:");
   scanf("%d",&n);

   printf("sorted student records:\n");

   for(i=0;i<n;++i)
   {
       s[i].roll=i+1;

      printf("\nstudent record:");
      printf("\nenter roll no:");
      scanf("%c",&s[i].rollno);
      printf("\nenter marks:");
      scanf("%f",&s[i].marks);
   }
   printf("displaying information :"\n\n);
    for(i = 0; i < 5; ++i) {
     printf("\nRoll number: %d\n", i + 1);
     printf("marks:%.1f",s[i].marks);
     printf("\n");
    }
    return 0;



}


