/* Shruti Srivastava
   21EE30025
   Electrical Engg Dual Degree
   Code Blocks
   Windows 10 */

#include<stdio.h>
#define MAX 100
int n; //stores the number of students
struct data
{
  char name[MAX];
  char gender[4];
  float marks;
};
struct data Students[MAX];

void input();
void display();
void best_girl();
int main()
{
   input();
   display();
   best_girl();

return 0;
}
void input()
{

  int i;
  printf("Enter the number of students\n");
  scanf("%d",&n);


  for(i=0; i<n; i++)
  {
   printf("Enter the name , gender and marks of student respectively\n");

   scanf("%s %s  %f",&Students[i].name,&Students[i].gender,&Students[i].marks);
  }
}

void display()
{
  printf("The student records are as follows\n");
  int i;

  for(i=0; i<n; i++)
  {
    printf("\n%s   %s    %f",Students[i].name,Students[i].gender,Students[i].marks);
    printf("\n");
  }
}

void best_girl()
{
  int i,k=0;
  float girl_marks[n];// array to store the marks of every girl student
  char girl_name[n];
  for(i=0; i<n; i++)
   {
     if(Students[i].gender == "girl")
       {
         girl_marks[k] = Students[i].marks;
         girl_name[k] = Students[i].name;
         k++;
        }
   }
   char best[MAX];
   int max = girl_marks[0];
   for(i=1; i<k; i++)
   {
     if(girl_marks[i]>max)   //checks the max marks of girl student
       {
         max = girl_marks[i];
         best[MAX]= girl_name[i];
       }
    }

printf("\nThe best girl student is : %s        %f",best,max); //prints the max marks of girl student
}
