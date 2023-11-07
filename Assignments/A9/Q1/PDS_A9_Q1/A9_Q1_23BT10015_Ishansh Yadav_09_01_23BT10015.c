#include<stdio.h>

struct student{
  char first_name[20];
  char last_name[20];
  char address[40];
  long int mob_num;
  char grades[5];
  float gpa;
  int roll_no;
};

struct student studArray[50];
int nStuds;

void enrolStuds()
{  printf("Enter the number of students:\n");
  scanf("%d", &nStuds);
  int j;
  for(j=0;j<nStuds;j++)
    {printf("Enter the details of the student:\n");
      scanf("%s", studArray[j].first_name);
      scanf("%s", studArray[j].last_name);
      scanf("%s", studArray[j].address);
      scanf("%ld", &studArray[j].mob_num);
      studArray[j].roll_no = j+1;
      }
  printf("Roll No.       First Name   Last Name            Address            Mobile No.\n");
  for(j=0;j<nStuds;j++)
    {printf("%8d       %10s   %10s            %10s               %ld\n", studArray[j].roll_no,  studArray[j].first_name,  studArray[j].last_name,  studArray[j].address,  studArray[j].mob_num);
    }
}

void entergrades()
{  int j;
  int m;
  int point[5];
  int sum=0;
  for(j=0;j<nStuds;j++)
    { printf("Roll No.       First Name   Last Name\n");
      printf("%8d       %10s   %10s\n", studArray[j].roll_no,  studArray[j].first_name,  studArray[j].last_name);
      printf("Enter grades of the student:");
           for(m=0;m<5;m++)
	{
	   scanf("%c", &studArray[j].grades[m]);
	   if(studArray[j].grades[m]=='E')point[m]==10;
	  if(studArray[j].grades[m]=='A')point[m]==9;
	  if(studArray[j].grades[m]=='B')point[m]==8;
	  if(studArray[j].grades[m]=='C')point[m]==7;
	  if(studArray[j].grades[m]=='D')point[m]==6;
	  if(studArray[j].grades[m]=='P')point[m]==5;
	  if(studArray[j].grades[m]=='F')point[m]==0;
	  if((studArray[j].grades[m]!='E')&&(studArray[j].grades[m]!='A')&&(studArray[j].grades[m]!='B')&&(studArray[j].grades[m]!='C')&&(studArray[j].grades[m]!='D')&&(studArray[j].grades[m]!='P')&&(studArray[j].grades[m]!='F')){printf("Wrong input!");
	    m=m-1;
	    continue;
	  }
	  sum=sum+point[m]; 
	}}
      studArray[j].gpa=(sum/5);

  for(j=0;j<nStuds;j++)
    { printf("Roll No.       First Name   Last Name       GPA\n");
      printf("%8d       %10s   %10s       %f\n", studArray[j].roll_no,  studArray[j].first_name,  studArray[j].last_name, studArray[j].gpa);
    }
}

void modifyStudDetails()
{ int input;
  int j;
  printf("Enter the roll no. of the student:");
  scanf("%d", &input);
   printf("Roll No.       First Name   Last Name            Address            Mobile No.\n");
   printf("%8d       %10s   %10s            %10s               %ld\n", studArray[input-1].roll_no,  studArray[input-1].first_name,  studArray[input-1].last_name,  studArray[input-1].address,  studArray[input-1].mob_num);
   printf("Enter new details");
   scanf("%s", studArray[input-1].address);
   scanf("%ld", &studArray[input-1].mob_num);
   printf("Details modified");
   printf("Roll No.       First Name   Last Name            Address            Mobile No.\n");
   printf("%8d       %10s   %10s            %10s               %ld\n", studArray[input-1].roll_no,  studArray[input-1].first_name,  studArray[input-1].last_name,  studArray[input-1].address,  studArray[input-1].mob_num);
}

void editStudGrades()
{
  int input;
  int j, m;
  int point[5];
  int sum=0;
  printf("Enter the roll no.");
  scanf("%d", &input);
   printf("Roll No.       First Name   Last Name            Address            Mobile No.\n");
   printf("%8d       %10s   %10s            %10s               %ld\n", studArray[input-1].roll_no,  studArray[input-1].first_name,  studArray[input-1].last_name,  studArray[input-1].address,  studArray[input-1].mob_num);
   printf("Current Grades are:");
   for(j=0;j<5;j++)
     printf("%c ", studArray[input-1].grades[j]);
   printf("\nEnter the updated grades:");
     for(j=0;j<5;j++)
       {scanf("%c", &studArray[input-1].grades[j]);
        if(studArray[j].grades[m]=='E')point[j]==10;
	  if(studArray[j].grades[m]=='A')point[j]==9;
	  if(studArray[j].grades[m]=='B')point[j]==8;
	  if(studArray[j].grades[m]=='C')point[j]==7;
	  if(studArray[j].grades[m]=='D')point[j]==6;
	  if(studArray[j].grades[m]=='P')point[j]==5;
	  if(studArray[j].grades[m]=='F')point[j]==0;
	  sum=sum+point[j];
       }
   studArray[j].gpa=(sum/5);
   printf("The new GPA is:%f", studArray[j].gpa);
       }

int main()
{
  int i;
  int program;
  for(i=0;;i++)
    {printf("1.Enrol Student\n");
     printf("2.Enter Grade\n");
     printf("3.Display Students\n");
     printf("4.Search Student\n");
     printf("5.Edit student grades\n");
     printf("6.Modify student details\n");
     printf("7.Display merit list\n");
     printf("8.Exit the program\n");
     printf("Enter a number from 1 to 8\n");
     scanf("%d", &program);
     if(program==1){enrolStuds();}
     if(program==2){entergrades();}
     if(program==5){modifyStudDetails();}
     if(program==6){editStudGrades();}
     if(program==8)break;
    }
  return 0;
}
