/*This program is to do a program to print details of students and finding best girl*/
/*Name : Susank Chigilipalli
  Section : 3A
  Assignment class 6
  Assignment : test 2
  question 4*/
#include<stdio.h>
#define MAX 20
typedef struct
{
   char name[30];
   char gen[5];
   float marks;
}Student;
void print(int n,Student deta[n])
{
   int i;
   printf("Printing the student records..\n\n");
   for(i=0;i<n;i++)
   {
      printf("%s %s %f\n",deta[i].name,deta[i].gen,deta[i].marks);
   }
}
void best_girl(int n,Student details[MAX])
{
   int i,goodind=0;
   float maxm=0;
   for(i=0;i<n;i++)
   {
      if(details[i].marks>maxm)
      {
         maxm=details[i].marks;
         goodind=i;
      }
    }
    printf("Best girl student : %s\n",details[goodind].name);
}
void main()
{
   Student det[MAX];
   int n,i;
   printf("Enter the number of students : ");
   scanf("%d",&n);
   printf("Enter the student details : \n");
   for(i=0;i<n;i++)
   {
      scanf("%s",&det[i].name);
      scanf("%s",&det[i].gen);
      scanf("%f",&det[i].marks);
   }
   print(n,det);
   best_girl(n,det);
}
