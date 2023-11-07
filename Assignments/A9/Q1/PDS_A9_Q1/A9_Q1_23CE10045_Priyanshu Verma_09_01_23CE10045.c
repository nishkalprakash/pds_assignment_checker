//Roll No.:23CE10045
//Name:PRIYANSHU VERMA


#include <stdio.h>
#include <stdlib.h>

struct student
{
  char firstname [20];
  char lastname [20];
  char address [40];
  long int mobileno;
  char grade [5];
  float gpa;
}studArray [50];

int nStuds;

void enrolStuds ()
{
  
  int i;
  float cgsum = 0;
  printf("Enter the number of students: \n");
  scanf("%d", &nStuds);
  
  for(i = 0; i<nStuds ; i++)
    {
      printf("Enter First Name of student %d:\n", i+1);
      scanf("%s", studArray[i].firstname);

      printf("Enter Last Name of student %d:\n", i+1);
      scanf("%s", studArray[i].lastname);

      printf("Enter Address of student %d:\n", i+1);
      scanf("%s", studArray[i].address);

      printf("Enter Mobile No. of student %d:\n", i+1);
      scanf("%ld", studArray[i].mobileno);
    }

  for(i = 0 ; i<nStuds ; i++)
    {
      printf("Roll No. %d Name: %s %s Address: %s Mobile No.: %ld\n", i+1, studArray[i].firstname, studArray[i].lastname, studArray[i].address, studArray[i].mobileno);
    }
}


void enterGrades ()
{

  int i,  j;
  float cgsum = 0;
  
  for(i=0;i<nStuds; i++)
    {
    printf("Roll No-%d Name - %s %s", i+1, studArray[i].firstname, studArray[i].lastname);

        for(j=0; j<5; j++)
	  {
       printf("Enter letter grades in subject no %d");
       scanf("%c", studArray[i].grade[j]);

    start:

       if((studArray[i].grade[j] == 'E') || (studArray[i].grade[j] == 'A') || (studArray[i].grade[j] == 'B') || (studArray[i].grade[j] == 'C') || (studArray[i].grade[j] == 'D') || (studArray[i].grade[j] == 'P') || (studArray[i].grade[j] == 'F'))
	 {

       if ( studArray[i].grade[j] == 'E')
         {
	   studArray[i].grade[j] = 10;
	 }

       if ( studArray[i].grade[j] == 'A')
         {
	   studArray[i].grade[j] = 9;
	 }

       if ( studArray[i].grade[j] == 'B')
         {
	   studArray[i].grade[j] = 8;
	 }

       if ( studArray[i].grade[j] == 'C')
         {
	   studArray[i].grade[j] = 7;
	 }

       if ( studArray[i].grade[j] == 'D')
         {
	   studArray[i].grade[j] = 6;
	 }

       if ( studArray[i].grade[j] == 'P')
         {
	   studArray[i].grade[j] = 5;
	 }

       if ( studArray[i].grade[j] == 'F')
         {
	   studArray[i].grade[j] = 0;
	 }
	 } 
        
       cgsum += studArray[i].grade[j];
      
        
       else
	 {
	   printf("Grade entered is not relevant Enter again ");
	   goto start;
	 }
	      
      }
	studArray[i].gpa = cgsum/5;
   }
}
    
void displayStuds ()
{
  printf("a");
}


void searchStuds ()
{
  char search [40];
  printf("Enter the string to be searched: ");
  scanf("%s", &search);

  
}


void modifyStudDetails ()
{
  int roll, i;
  char newadd[40];
  long int newmono;
  
  printf("Enter the roll no of student: \n");
  scanf("%d", &roll);
  printf("Roll No.%d  Name: %s %s Address: %s Mobile No.: %ld \n");
  
  printf("Enter new address: \n");
  scanf("%s", &newadd);
  studArray[roll+1].address = newadd;

   printf("Enter new mobile no.: \n");
  scanf("%ld", &newmono);
  studArray[roll+1].mobileno = newmono;

  for(i = 0 ; i<nStuds ; i++)
    {
      printf("Roll No. %d Name: %s %s Address: %s Mobile No.: %ld\n", i+1, studArray[i].firstname, studArray[i].lastname, studArray[i].address, studArray[i].mobileno);
    }
  
}


void editStudGrades ()
{
  int roll, i;
  printf("Enter Roll No. of student: ");
  scanf("%d", &roll);
  
}


void dispMeritList ()
{
  printf("a");
}


int main()
{
  int nStuds = 0;
  int choice, i;
  
  while (1)
    {
      printf("1. Enroll student\n");
      printf("2. Enter grade\n");
      printf("3. Display students\n");
      printf("4. Search student\n");
      printf("5. Edit student grades\n");
      printf("6. Modify Student Details\n");
      printf("7. Display merit list\n");
      printf("8. Exit the program\n");
      scanf("%d", &choice);

      if (choice == 8)
	{
	  return 0;
	}

      switch (choice)
	{
        case 1: {
	  enrolStuds ();
	  break;
	}
	  
        case 2: {
	  enterGrades ();
	  break;
	}

        case 3: {
	  displayStuds ();
	  break;
	}

        case 4: {
	  searchStuds ();
	  break;
	}

        case 5: {
	  modifyStudDetails ();
	  break;
	}

        case 6: {
	  editStudGrades ();
	  break;
	}

     	case 7: {
	  dispMeritList ();
	  break;
        }
	  
	}
      int main ();
    }
      return 0;
 }
  

