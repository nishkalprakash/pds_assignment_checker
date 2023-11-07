//Name : Kshetrimayum Abo
//Roll No. : 23CS30029

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct
{
  char firstName[21], lastName[21], address[40], subject[5];
  unsigned long int mobile;
  float gpa;
  int roll;
  
  
} student;

student studArray[50];
int nStuds;

void enrolStuds()
{
  printf("Enter the number of students : ");
  scanf("%d",&nStuds);
  for(int i = 0; i < nStuds; i++)
    {
      printf("Enter First Name of student%d : ",i+1);
      scanf("%s",studArray[i].firstName);
      printf("Enter Last Name of student%d : ",i+1);
      scanf("%s",studArray[i].lastName);
      printf("Enter address of student : ");
      scanf(" %[^\n]s",studArray[i].address);
      printf("Enter mobile number : ");
      scanf("%lu",&studArray[i].mobile);
      studArray[i].roll = i+1;
    }
  for(int i = 0; i < nStuds; i++)
    {
      printf("First Name : %s\tLast Name : %s\tAddress : %s\tMobile Number : %lu\n",studArray[i].firstName, studArray[i].lastName, studArray[i].address, studArray[i].mobile);
    }
  
}

void enterGrades()
{
  //loop for going through the students list
  for(int i = 0; i < nStuds; i++)
    {
      printf("First Name : %s\tLast Name : %s\tAddress : %s\tMobile Number : %lu\n",studArray[i].firstName, studArray[i].lastName, studArray[i].address, studArray[i].mobile);
      studArray[i].gpa = 0;
      //loop for prompting user to enter one grade at a time and calculating gpa simultaneously
      int j = 0;
      char temp;
      while(j < 5)
	{
	  printf("Enter grade of subject%d : ",j+1);	  
	  scanf(" %c",&temp);
	  switch(temp)
	    {
	    case 'E' : studArray[i].subject[j++] = temp;
	      studArray[i].gpa += 10;
	      break;
	    case 'A' : studArray[i].subject[j++] = temp;
	      studArray[i].gpa += 9;	      
	      break;
	    case 'B' : studArray[i].subject[j++] = temp;
	      studArray[i].gpa += 8;	      
	      break;
	    case 'C' : studArray[i].subject[j++] = temp;
	      studArray[i].gpa += 7;	      
	      break;
	    case 'D' : studArray[i].subject[j++] = temp;
	      studArray[i].gpa += 6;	      
	      break;
	    case 'P' : studArray[i].subject[j++] = temp;
	      studArray[i].gpa += 5;	      
	      break;
	    case 'F' : studArray[i].subject[j++] = temp;
	      studArray[i].gpa += 0;	      
	      break;
	    default : printf("Invalid Grade, Enter again!\n");
	      break;
	    }
	}
      studArray[i].gpa /= 5;      
    }
    for(int i = 0; i < nStuds; i++)
    {
      printf("First Name : %s\tLast Name : %s\tAddress : %s\tMobile Number : %lu GPA : %f\n",studArray[i].firstName, studArray[i].lastName, studArray[i].address, studArray[i].mobile, studArray[i].gpa);
    }
}

void displayStuds()
{
  int i,j,minIndex = 0;
  student temp;
  for( i = 0; i < nStuds; i++)
    {
      minIndex = i;
      //looping through for finding lexicographically small word
      for(j = i+1; j < nStuds; j++)
	{
	  if(strcmp(studArray[j].firstName, studArray[minIndex].firstName) == 0)
	    {
	      if(strcmp(studArray[j].lastName, studArray[minIndex].lastName) > 0)minIndex = minIndex;
	      else minIndex = j;	      
	    }
	  else
	    {
	      if(strcmp(studArray[j].firstName, studArray[minIndex].firstName) > 0)minIndex = minIndex;
	      else minIndex = j;
	    }
	}
      temp = studArray[i];
      studArray[i] = studArray[minIndex];
      studArray[minIndex] = temp;       
    }


  for(int i = 0; i < nStuds; i++)
    {
      printf("First Name : %s\tLast Name : %s\tAddress : %s\tMobile Number : %lu GPA : %f\n",studArray[i].firstName, studArray[i].lastName, studArray[i].address, studArray[i].mobile, studArray[i].gpa);
    }  
}

void searchStuds()
{
  char string[21];
  printf("Enter name to be searched : ");
  scanf("%s",string);
  for(int i = 0; i < nStuds; i++)
    {
      if(strcasecmp(studArray[i].firstName,string) == 0 || strcasecmp(studArray[i].lastName,string) == 0) //string comparison
	{
	        printf("First Name : %s\tLast Name : %s\tAddress : %s\tMobile Number : %lu GPA : %f\n",studArray[i].firstName, studArray[i].lastName, studArray[i].address, studArray[i].mobile, studArray[i].gpa);
	}
    }
}

void modifyStudDetails()
{
  int roll,i,flag = 0;
  printf("Enter Roll number of the student : ");
  scanf("%d",&roll);
  for(i = 0; i < nStuds; i++)
    {
      if(roll == studArray[i].roll)
	{
	  flag = 1;
	  break;
	}
    }
  if(flag == 0)//Case for when roll number not found
    {
      printf("Roll number not found in the database\n");
      return;
    }
  
  printf(" Name : %s %s\tAddress : %s\tMobile Number : %lu\n",studArray[i].firstName, studArray[i].lastName, studArray[i].address, studArray[i].mobile);
  printf("Enter new address : ");
  scanf(" %[^\n]s",studArray[i].address);
  printf("Enter new mobile number : ");
  scanf(" %lu",&studArray[i].mobile);
  printf(" Name : %s %s\tAddress : %s\tMobile Number : %lu\n",studArray[i].firstName, studArray[i].lastName, studArray[i].address, studArray[i].mobile);  
}

void editStudGrades()
{
  int i, j, roll, flag=0;
  printf("Enter roll number of the student : ");
  scanf("%d",&roll);
  for(i = 0; i < nStuds; i++)
    {
      if(studArray[i].roll == roll)
	{
	  flag = 1;
	  break;
	}
    }
  if(flag == 0)
    {
      printf("Roll number not found in the database\n");
      return;
    }
  printf("First Name : %s\tLast Name : %s\tAddress : %s\tMobile Number : %lu GPA : %f\n",studArray[i].firstName, studArray[i].lastName, studArray[i].address, studArray[i].mobile, studArray[i].gpa);      
  for(j = 0; j < 5; j++)
    {	  
      printf("Subject%d Grade : %c\n",j+1, studArray[i].subject[j]);
    }
  
  char temp;
  j = 0;
  while(j < 5)
    {
      printf("Enter grade of subject%d : ",j+1);	  
      scanf(" %c",&temp);
      studArray[i].gpa = 0;
      switch(temp)
	{
	case 'E' : studArray[i].subject[j++] = temp;
	  studArray[i].gpa += 10;
	  break;
	case 'A' : studArray[i].subject[j++] = temp;
	  studArray[i].gpa += 9;	      
	  break;
	case 'B' : studArray[i].subject[j++] = temp;
	  studArray[i].gpa += 8;	      
	  break;
	case 'C' : studArray[i].subject[j++] = temp;
	  studArray[i].gpa += 7;	      
	  break;
	case 'D' : studArray[i].subject[j++] = temp;
	  studArray[i].gpa += 6;	      
	  break;
	case 'P' : studArray[i].subject[j++] = temp;
	  studArray[i].gpa += 5;	      
	  break;
	case 'F' : studArray[i].subject[j++] = temp;
	  studArray[i].gpa += 0;	      
	  break;
	default : printf("Invalid Grade, Enter again!\n");
	  break;
	}
    }
      studArray[i].gpa /= 5;
      printf("First Name : %s\tLast Name : %s\tAddress : %s\tMobile Number : %lu GPA : %f\n",studArray[i].firstName, studArray[i].lastName, studArray[i].address, studArray[i].mobile, studArray[i].gpa);  
}

void dispMeritList()
{
  int i,j,maxIndex = 0;
  student temp;
  for( i = 0; i < nStuds; i++)
    {
      maxIndex = i;
      //looping through for finding lexicographically small word
      for(j = i+1; j < nStuds; j++)
	{
	  if(studArray[j].gpa == studArray[maxIndex].gpa)
	  {
	    if(strcmp(studArray[j].firstName, studArray[maxIndex].firstName) == 0)
	    {
	      if(strcmp(studArray[j].lastName, studArray[maxIndex].lastName) > 0)maxIndex = maxIndex;
	      else maxIndex = j;	      
	    }
	  else
	    {
	      if(strcmp(studArray[j].firstName, studArray[maxIndex].firstName) > 0)maxIndex = maxIndex;
	      else maxIndex = j;
	    }
	  }
	  else
	    {
	      if(studArray[j].gpa > studArray[maxIndex].gpa)
		{
		  maxIndex = j;
		}
	      else continue;
	    }
	}
      temp = studArray[i];
      studArray[i] = studArray[maxIndex];
      studArray[maxIndex] = temp;       
    }


  for(int i = 0; i < nStuds; i++)
    {
      printf("First Name : %s\tLast Name : %s\tAddress : %s\tMobile Number : %lu GPA : %f\n",studArray[i].firstName, studArray[i].lastName, studArray[i].address, studArray[i].mobile, studArray[i].gpa);
    }  
}

int main()
{
  int i, choice;
  nStuds = 0;
  while(1)
    {
  printf("1. Enroll student\n2.Enter grade\n3.Display students\n4.Search student\n5.Edit student grades\n6.Modify Student Details\n7.Display merit list\n8.Exit the program\n");
  printf("Enter your choice : ");
  scanf("%d",&choice);
  if(choice > 8 || choice < 1)
    {
      printf("Invalid choice, enter again!\n");
      continue;
    }
  switch(choice)
    {
    case 1 : enrolStuds();
      break;
    case 2 : enterGrades();
      break;
    case 3 : displayStuds();
      break;
    case 4 : searchStuds();
      break;
    case 5 : editStudGrades();
      break;
    case 6 : modifyStudDetails();
      break;
    case 7 : dispMeritList();
      break;
    case 8 : return 0;
    }

    }
  return 0;
}
