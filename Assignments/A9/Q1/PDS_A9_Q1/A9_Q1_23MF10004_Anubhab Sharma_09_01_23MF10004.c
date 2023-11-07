#include <stdio.h>

struct student
{
  char fname[20];
  char lname[20];
  char address[40];
  int mobno;
  char grade[5];
  float gpa;
};
struct  student studarray[50];
int nstuds;
void enrolstuds();
int main()
{
  enrolstuds();
}

void enrolstuds()
{
  int i,n;
  printf("Enter the number of students: ");
  scanf("%d",&nstuds);
  for(i=0;i<nstuds;i++)
    {
      printf("Enter first name: \n");
      scanf(" %s",studarray[i].fname);
      printf("Enter last name: \n");
      scanf(" %s",studarray[i].lname);
      printf("Enter adress: \n");
      scanf(" %[^\n]s",studarray[i].address);
      printf("Enter mobile number: \n");
      scanf( " %d",&studarray[i].mobno);
    }
  for(n=0;n<nstuds;n++)
    {
      printf(" %s  %s  %s  %d\n", studarray[n].fname,studarray[n].lname,studarray[n].address,studarray[n].mobno);
    }
}



  
      
      
