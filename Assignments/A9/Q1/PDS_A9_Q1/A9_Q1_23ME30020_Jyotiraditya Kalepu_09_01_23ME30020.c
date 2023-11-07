//Roll No: 23ME30020
//Name: Kalepu Jyotiraditya

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student{
  char first_name[20];
  char last_name[20];
  char address[40];
  long mobile_number;
  int roll_number;
  char grade[5];
  float gpa;
};

struct student studArray[50];
int nStuds;

void enrolStuds();
void enterGrades();
void searchStud();

int main()
{
  int choice;
  nStuds = 0;
  while(1)
    {
      printf("1. Enrol student\n");
      printf("2. Enter grade\n");
      printf("3. Display student\n");
      printf("4. Search student\n");
      printf("5. Edit student grades\n");
      printf("6. Modify Student Details\n");
      printf("7. Display merit list\n");
      printf("8. Exit the program\n");
      
      printf("Enter a number between 1 to 8\n");
      scanf("%d",&choice);

      if(choice == 8) return 0;
      else{
	switch(choice){
	case 1:{
	  enrolStuds();
	  printf("Roll Number    First Name       Last Name       Address          Mobile Number\n");          
	  for(int i = 0; i < nStuds; i++)
	    {
	      printf("%d             %s               %s              %s               %ld\n",studArray[i].roll_number,studArray[i].first_name,studArray[i].last_name,studArray[i].address,studArray[i].mobile_number);
	    }
	  break;}
	case 2:{ enterGrades();
	    break;}
	case 4:{ searchStud();break;}
	}
      }
    }
}

void enrolStuds()
{
  printf("Enter the number of students\n");
  scanf("%d",&nStuds);

  for(int i = 0; i < nStuds; i++)
    {
      printf("Enter First Name : ");
      scanf("%s",studArray[i].first_name);
      printf("Enter Last Name : ");
      scanf("%s",studArray[i].last_name);
      printf("Enter Address : ");
      scanf(" %[^\n]s",studArray[i].address);
      printf("\nEnter Mobile Number : ");
      scanf("%ld",&studArray[i].mobile_number);

      studArray[i].roll_number = i+1;
    } 
}

void enterGrades()
{
  enrolStuds();
  for(int i = 0; i < nStuds; i++)
    {
      int cnt = 0, sum = 0; char ch;
      printf("Roll Number : %d\n",studArray[i].roll_number);
      printf("First Name  : %s\n",studArray[i].first_name);
      printf("Last Name   : %s\n",studArray[i].last_name);

      printf("Enter Grade in Five Subjects\n");
      while( cnt < 5)
	{
	  scanf(" %c",&ch);
	  if(ch=='A'||ch=='B'||ch=='C'||ch=='D'||ch=='E'||ch=='F'||ch=='P'){
	    studArray[i].grade[cnt] = ch;
	    cnt++;
	  }
	}
      for(int i = 0; i < 5; i++)
	{
	  if(studArray[i].grade[i] == 'E') sum += 10;
	  if(studArray[i].grade[i] == 'A') sum += 9;
	  if(studArray[i].grade[i] == 'B') sum += 8;
	  if(studArray[i].grade[i] == 'C') sum += 7;
	  if(studArray[i].grade[i] == 'D') sum += 6;
	  if(studArray[i].grade[i] == 'P') sum += 5;
	  if(studArray[i].grade[i] == 'F') sum += 0;
	}

      studArray[i].gpa = sum/5.0;
    }
  for(int i = 0; i < nStuds; i++)
    {
      printf("%f",studArray[i].gpa);
    }
}

/*void displayStuds()
{
  for(int i = 0; i < nStuds; i++)
    {
      for(int j = i+1; j < nStuds; j++)
	{
	  int cmp = strcmp(studArray[i].first_name,studArray[j].first_name);
	  if ( cmp > 0)
	  { */
void searchStud()
{
  enrolStuds();
  int cmp;
  char prompt[40];
  printf("Enter name to be searched : ");
  scanf("%s",prompt);
  for(int i = 0; i < nStuds; i++)
    {
      if(strcmp(prompt,studArray[i].first_name) == 0 ||strcmp(prompt,studArray[i].last_name) == 0)
	{
	   printf("Roll Number : %d\n",studArray[i].roll_number);
	   printf("First Name  : %s\n",studArray[i].first_name);
	   printf("Last Name   : %s\n",studArray[i].last_name);
	   printf("Address     : %s\n",studArray[i].address);
	   printf("Mobile Number:%ld\n",studArray[i].mobile_number);
	}
    }
}
	    
	      
	      
	    
               
      
      
      
      
      
	
	   

      

  
