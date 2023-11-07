//name : sourendra nandi
//roll 23CH10066
#include <stdio.h>
#include <string.h>
void enrolStuds();
void enterGrades();
void displayStuds();
void searchStuds();
void modifyStudDetails();
void editStudGrades();
void dispMeritList();

typedef struct student{
  char fname[21];
  char lname[21];
  char address[41];
  long long int mob;
  char grades[5];
  float gpa;
  int roll;
}student;
student studArray[50];
int nstuds;
int main()
{
  int ch;
  nstuds=0;     //Setting nstuds to 0
  while (1)
    {
      printf("1.Enrol student\n");
      printf("2.Enter grade\n");
      printf("3.Dispay students\n");
      printf("4.Search student\n");
      printf("5.Edit student grades\n");
      printf("6.Modify Student Details\n");
      printf("7.Dispay merit list\n");
      printf("8.Exit the program\n");
      printf("Enter the Choice :");
      scanf("%d",&ch);
      if (ch==1) enrolStuds();
      else if (ch==2) enterGrades();
      else if (ch==3) displayStuds();
      else if (ch==4) searchStuds();
      else if (ch==5) editStudGrades();
      else if (ch==6) modifyStudDetails();
      else if (ch==7) dispMeritList();
      else if (ch==8) break;
      else printf("Wrong Input !!\n");
    }
  printf("Exiting Program !\n");
  return 0;
}
void enrolStuds()
{
  int i,j;
  printf("Enter the No. of Students:\n");
  scanf("%d",&nstuds);
  for (i=0;i<nstuds;i++)
    {
      printf("Enter Details of Student %d\n",i+1);
      printf("Enter the First Name : ");
      scanf("%s",studArray[i].fname);
      printf("Enter the Last Name : ");     //filling details of i+1 th student
      scanf("%s",studArray[i].lname);
      printf("Enter the Address : ");
      scanf(" %[^\n]",studArray[i].address);
      printf("Enter the Mobile No. : ");
      scanf("%lld",&(studArray[i].mob));
      studArray[i].roll=i+1;
      printf("------------------------\n");
    }
  printf("Data for Students Stored !\n");
  printf("Details of Students Stored:\n\n");
  for (i=0;i<nstuds;i++)
    {
      printf("Details of Student %d\n",i+1);
      printf("Roll No. %d\n",studArray[i].roll);
      printf("First Name: %s\n",studArray[i].fname);
      printf("Last Name: %s\n",studArray[i].lname);
      printf("Address: %s\n",studArray[i].address);
      printf("Mobile No.: %lld\n",studArray[i].mob);
      printf("-----------------------------\n");
    }
}
void enterGrades()
{
  int i,j;
  float gpa=0;
  char grade;
  for (i=0;i<nstuds;i++)
    {
      gpa=0;
      printf("Details of Student %d\n",i+1);
      printf("Roll No. %d\n",studArray[i].roll);
      printf("First Name: %s\n",studArray[i].fname);
      printf("Last Name: %s\n",studArray[i].lname);
      printf("Enter Grades of Student %d\n",i+1);
      for (j=0;j<5;j++)
	{
	  while (1)
	    {
	      printf("Enter Grade of Subject %d: ",j+1);
	      scanf(" %c",&(studArray[i].grades[j]));
	      grade=studArray[i].grades[j];
	      if (grade=='E'||grade=='A'||grade=='B'||grade=='C'||grade=='D'||grade=='P'||grade=='F')
		{
		  break;
		}
	      else
		{
		  printf("Wrong Character input ! Enter Again\n");
		}
	    }
	  
       	  if (grade=='E') gpa+=10;
	  else if (grade=='A') gpa+=9;
	  else if (grade=='B') gpa+=8;
	  else if (grade=='C') gpa+=7;
	  else if (grade=='D') gpa+=6;
	  else if (grade=='P') gpa+=5;
	  else if (grade=='F') gpa+=0;
	
	}
      
  gpa=gpa/5.0;       //calculating gpa      
  studArray[i].gpa=gpa;
    }
   printf("Details of Students Stored:\n\n");
   for (i=0;i<nstuds;i++)
    {
      printf("Details of Student %d\n",i+1);
      printf("Roll No. %d\n",studArray[i].roll);
      printf("First Name: %s\n",studArray[i].fname);
      printf("Last Name: %s\n",studArray[i].lname);
      printf("Address: %s\n",studArray[i].address);
      printf("Mobile No.: %lld\n",studArray[i].mob);
      printf("GPA: %f\n",studArray[i].gpa);
      printf("-----------------------------\n");
    }
}
void displayStuds()
{
  int i,j,f_check,l_check;
  char f1[21],f2[21],l1[21],l2[21];
  student temp;
  for (i=0;i<nstuds-1;i++)
    {
      for (j=0;j<nstuds-i-1;j++)
	{
	  strcpy(f1,studArray[j].fname);
	  strcpy(f2,studArray[j+1].fname);
	  strcpy(l1,studArray[j].lname);
	  strcpy(l2,studArray[j+1].lname);
	  f_check=strcmp(f1,f2);
	  if (f_check==0)
	    {
	      l_check=strcmp(l1,l2);
	      if (l_check>0)
		{
		  temp=studArray[j];
		  studArray[j]=studArray[j+1];
		  studArray[j+1]=temp;
	      	}
	    }
	  else
	    {
	      if (f_check>0)
		{
		  temp=studArray[j];
		  studArray[j]=studArray[j+1];
		  studArray[j+1]=temp;
	      	}
	    }
	}
    }
  printf("Sorted Details of Students:\n\n");
  for (i=0;i<nstuds;i++)
    {
      printf("Details of Student %d\n",i+1);
      printf("Roll No. %d\n",studArray[i].roll);
      printf("First Name: %s\n",studArray[i].fname);
      printf("Last Name: %s\n",studArray[i].lname);
      printf("Address: %s\n",studArray[i].address);
      printf("Mobile No.: %lld\n",studArray[i].mob);
      printf("GPA: %f\n",studArray[i].gpa);
      printf("-----------------------------\n");
    }
}
void searchStuds()
{
  int f_check,l_check,i;
  char search[21];
  printf("Enter the String :");
  printf("-----------------\n");
  scanf("%s",search);
  for (i=0;i<nstuds;i++)
    {
      f_check=strcasecmp(search,studArray[i].fname);
      l_check=strcasecmp(search,studArray[i].lname);
      if (f_check==0)
	{
	  printf("Match found with First name !! Details :\n");
	  printf("Roll No. %d\n",studArray[i].roll);
          printf("First Name: %s\n",studArray[i].fname);
          printf("Last Name: %s\n",studArray[i].lname);
          printf("Address: %s\n",studArray[i].address);
          printf("Mobile No.: %lld\n",studArray[i].mob);
          printf("GPA: %f\n",studArray[i].gpa);
          printf("-----------------------------\n");
	}
      else if (l_check==0)
	{
	  printf("Match found with Last name !! Details :\n");
	  printf("Roll No. %d\n",studArray[i].roll);
          printf("First Name: %s\n",studArray[i].fname);
          printf("Last Name: %s\n",studArray[i].lname);
          printf("Address: %s\n",studArray[i].address);
          printf("Mobile No.: %lld\n",studArray[i].mob);
          printf("GPA: %f\n",studArray[i].gpa);
          printf("-----------------------------\n");
	}
    }
}
void modifyStudDetails()
{
  int roll,i;
  printf("Enter the Roll No.: ");
  scanf("%d",&roll);
  for (i=0;i<nstuds;i++)
    {
      if (roll==studArray[i].roll)
	{
	  printf("First Name: %s\n",studArray[i].fname);
          printf("Last Name: %s\n",studArray[i].lname);
          printf("Address: %s\n",studArray[i].address);
          printf("Mobile No.: %lld\n",studArray[i].mob);
	  printf("\n Enter New Address: ");
	  scanf(" %[^\n]",studArray[i].address);
	  printf("Enter New Mobile No.: ");
	  scanf("%lld",&(studArray[i].mob));
	  printf("--------------------\n");
	  printf("The Updated Details of the Student:\n");
	  printf("Roll No. %d\n",studArray[i].roll);
          printf("First Name: %s\n",studArray[i].fname);
          printf("Last Name: %s\n",studArray[i].lname);
          printf("Address: %s\n",studArray[i].address);
          printf("Mobile No.: %lld\n",studArray[i].mob);
          printf("GPA: %f\n",studArray[i].gpa);
          printf("-----------------------------\n");
	}
    }
}
void editStudGrades()
{
  int i,j,roll;
  char grade;
  float gpa=0;
  printf("Enter the Roll No.; ");
  scanf("%d",&roll);
  for (i=0;i<nstuds;i++)
    {
      if (roll==studArray[i].roll)
	{
	  printf("Roll No. %d\n",studArray[i].roll);
          printf("First Name: %s\n",studArray[i].fname);
          printf("Last Name: %s\n",studArray[i].lname);
          printf("Address: %s\n",studArray[i].address);
          printf("Mobile No.: %lld\n",studArray[i].mob);
	  printf("Grades: (");
	  for (j=0;j<5;j++)
	    {
	      printf("%c,",studArray[i].grades[j]);
	    }
	  printf("\b)\n");
          printf("GPA: %f\n",studArray[i].gpa);
	  printf("-------------------\n");
	  printf("Enter the New Grades:\n");
	  for (j=0;j<5;j++)
	  {
	  while (1)
	    {
	      printf("Enter Grade of Subject %d: ",j+1);
	      scanf(" %c",&(studArray[i].grades[j]));
	      grade=studArray[i].grades[j];
	      if (grade=='E'||grade=='A'||grade=='B'||grade=='C'||grade=='D'||grade=='P'||grade=='F')
		{
		  break;
		}
	      else
		{
		  printf("Wrong Character input ! Enter Again\n");
		}
	   }
	  
       	  if (grade=='E') gpa+=10;
	  else if (grade=='A') gpa+=9;
	  else if (grade=='B') gpa+=8;
	  else if (grade=='C') gpa+=7;
	  else if (grade=='D') gpa+=6;
	  else if (grade=='P') gpa+=5;
	  else if (grade=='F') gpa+=0;
	
         }
      
  gpa=gpa/5.0;       //calculating new gpa      
  studArray[i].gpa=gpa;
	
      printf("Updated Details :\n");
          printf("Roll No. %d\n",studArray[i].roll);
          printf("First Name: %s\n",studArray[i].fname);
          printf("Last Name: %s\n",studArray[i].lname);
          printf("Address: %s\n",studArray[i].address);
          printf("Mobile No.: %lld\n",studArray[i].mob);
	  printf("Grades: (");
	  for (j=0;j<5;j++)
	    {
	      printf("%c,",studArray[i].grades[j]);
	    }
	  printf("\b)\n");
          printf("GPA: %f\n",studArray[i].gpa);
	}
    }
}
void dispMeritList()
{
   int i,j,l_check;
  char l1[21],l2[21];
  student temp;
  for (i=0;i<nstuds-1;i++)
    {
      for (j=0;j<nstuds-i-1;j++)
	{
     	  strcpy(l1,studArray[j].lname);
	  strcpy(l2,studArray[j+1].lname);
	  
	  if (studArray[j].gpa<studArray[j+1].gpa)
	    {
	      temp=studArray[j];
	      studArray[j]=studArray[j+1];
	      studArray[j+1]=temp;
	    }
	  else if (studArray[j].gpa==studArray[j+1].gpa)
	    {
               l_check=strcmp(l1,l2);
	      if (l_check>0)
		{
		  temp=studArray[j];
		  studArray[j]=studArray[j+1];
		  studArray[j+1]=temp;
	      	}
	    }
	}
    }
  printf("GPA Sorted Details of Students:\n\n");
  for (i=0;i<nstuds;i++)
    {
      
      printf("Roll No. %d\n",studArray[i].roll);
      printf("First Name: %s\n",studArray[i].fname);
      printf("Last Name: %s\n",studArray[i].lname);
      printf("Address: %s\n",studArray[i].address);
      printf("Mobile No.: %lld\n",studArray[i].mob);
      printf("GPA: %f\n",studArray[i].gpa);
      printf("-----------------------------\n");
    }
}
  
  

		   
	    
		 
		
        
	  
  
  
  

  
  

	  
      
      
  
	     
      
